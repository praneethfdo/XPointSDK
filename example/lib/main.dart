import 'package:flutter/material.dart';
import 'package:location/location.dart';
import 'package:xpoint_sdk/models/check_result.dart';
import 'package:xpoint_sdk/xpoint_sdk.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({Key? key}) : super(key: key);

  // This widget is the root of your application.
  @override
  build(BuildContext context) {
    return MaterialApp(
      title: 'Flutter Demo',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: const MyHomePage(),
    );
  }
}

class MyHomePage extends StatefulWidget {
  const MyHomePage({Key? key}) : super(key: key);

  @override
  State<MyHomePage> createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {
  late XpointSdk xpointSdk;

  List<String> progress = [];

  @override
  void initState() {
    checkPermission();
    super.initState();
  }

  // // request locaation permission
  // Future<void> checkPermission() async {
  //   String state = 'Checking location permission';
  //   progress.add(state);

  //   try {
  //     PermissionStatus status = await Permission.location.status;

  //     progress[progress.indexOf(state)] =
  //         'Location permission - ${status.name}';

  //     if (status.isGranted) {
  //       asyncStart();
  //     } else {
  //       requestPermission();
  //     }
  //   } catch (e) {
  //     progress[progress.indexOf(state)] =
  //         'Location permission error - ${e.toString()}';
  //   }
  //   setState(() {});
  // }

  // Future<void> requestPermission() async {
  //   String state = 'Requesting location permission';
  //   progress.add(state);

  //   try {
  //     PermissionStatus status = await Permission.location.request();

  //     progress[progress.indexOf(state)] =
  //         'Requested location permission - ${status.name}';

  //     if (status.isGranted) {
  //       asyncStart();
  //     }
  //   } catch (e) {
  //     progress[progress.indexOf(state)] =
  //         'Requesting location permission error - ${e.toString()}';
  //   }
  //   setState(() {});
  // }

  late Location location;
  // request locaation permission
  Future<void> checkPermission() async {
    String state = 'Checking location service';
    progress.add(state);

    location = Location();

    bool _serviceEnabled;

    try {
      _serviceEnabled = await location.serviceEnabled();

      progress[progress.indexOf(state)] =
          'Location service enabled- $_serviceEnabled';

      if (_serviceEnabled) {
        requestPermission();
      }
    } catch (e) {
      progress[progress.indexOf(state)] =
          'Location service error - ${e.toString()}';
    }
    setState(() {});
  }

  Future<void> requestPermission() async {
    String state = 'Requesting location permission';
    progress.add(state);

    PermissionStatus _permissionGranted;

    try {
      _permissionGranted = await location.hasPermission();

      if (_permissionGranted == PermissionStatus.denied) {
        _permissionGranted = await location.requestPermission();
      }

      if (_permissionGranted == PermissionStatus.granted ||
          _permissionGranted == PermissionStatus.grantedLimited) {
        asyncStart();
      }

      progress[progress.indexOf(state)] =
          'Permission granted - $_permissionGranted';
    } catch (e) {
      progress[progress.indexOf(state)] =
          'Requesting location permission error - ${e.toString()}';
    }
    setState(() {});
  }

  // This order needs to be followed
  asyncStart() async {
    await initSdk();
    await login();
    await startWagering();
  }

  Future<void> initSdk() async {
    xpointSdk = XpointSdk(didCheckStatusChanged: didCheckStatusChanged);

    String state = 'Initialzing SDK';
    progress.add(state);

    bool res = await xpointSdk.initSdk(
        client: "betmakers0762dev",
        server: "prod",
        safetyNetKey: "betmakers0762dev");

    if (res) {
      progress[progress.indexOf(state)] = state + ' success';
    } else {
      progress[progress.indexOf(state)] = state + ' failed';
    }
    setState(() {});
  }

  Future<void> login() async {
    String state = 'Log in with userId';
    progress.add(state);

    bool res =
        await xpointSdk.login(userId: "0", customData: "{isThisJSON:true}");

    if (res) {
      progress[progress.indexOf(state)] = state + ' success';
    } else {
      progress[progress.indexOf(state)] = state + ' failed';
    }
    setState(() {});
  }

  Future<void> startWagering() async {
    String state = 'Start Wagering';
    progress.add(state);
    bool res = await xpointSdk.startWagering();

    if (res) {
      progress[progress.indexOf(state)] = state + ' success';
    } else {
      progress[progress.indexOf(state)] = state + ' failed';
    }
    setState(() {});
  }

  didCheckStatusChanged(CheckResult checkResult) {
    setState(() {
      this.checkResult = checkResult;
    });
  }

  CheckResult? checkResult;

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(title: const Text('XPoint SDK')),
      body: Padding(
        padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 20),
        child: Column(crossAxisAlignment: CrossAxisAlignment.start, children: [
          Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [for (String status in progress) Text(status)],
          ),
          if (checkResult != null)
            Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                const SizedBox(
                  height: 20,
                ),
                Text(
                  'Status - ${checkResult!.status.toString()}',
                  style: const TextStyle(
                      fontSize: 24, fontWeight: FontWeight.w700),
                ),
                if (checkResult!.errors?.isNotEmpty ?? false)
                  Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: [
                      const SizedBox(
                        height: 20,
                      ),
                      const Text('Error',
                          style: TextStyle(
                              fontSize: 18, fontWeight: FontWeight.w500)),
                      Text('Code - ${checkResult!.errors?.first.code}',
                          style: const TextStyle()),
                      Text(
                          'Description - ${checkResult!.errors?.first.description}',
                          style: const TextStyle()),
                    ],
                  ),
                if (checkResult!.jwt != null && checkResult!.jwt!.isNotEmpty)
                  Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: [
                      const SizedBox(
                        height: 20,
                      ),
                      Text('JWT - ${checkResult!.jwt}',
                          style: const TextStyle()),
                    ],
                  ),
              ],
            )
        ]),
      ),
    );
  }
}
