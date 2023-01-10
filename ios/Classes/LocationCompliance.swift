// import XPointSDK

// class LocationCompliance : SdkXPointSDKDelegate {
//     // Initialize Xpoint SDK
//     private lazy var SDK = IosAsyncSdk(client: "iGaming", server: "prod", delegate: self)

//     func startCheckingPosition(withUsername userID: String) {
//         // Start the instnace of SDK
//         SDK.start { startResult in
//             guard startResult is Result.Success else {
//               // Abort further processing; handle as? Result.Failure
//             }
//             // Configure a session
//             self.SDK.updateUserId(userId: userID)
//             self.SDK.updateClientBrand(clientBrand: "MyCasino")
//             self.SDK.updateCustomData(customData: "{isThisJSON:true}")
//             // Start checking routine
//             self.SDK.startWagering { startWagerResult in
//                 guard startWagerResult is Result.Success else {
//                     // Handle as? Result.Failure
//                 }
//             }
//         }
//     }

//     func stopCheckingPosition() {
//         // Stop session when you no need furhter updates
//         SDK.stopWagering { stopResult in
//             guard stopResult is Result.Success else {
//               // Handle as? Result.Failure
//             }
//         }
//     }

//     // Delegate method used by Xpoint SDK to send updates to your app
//     func didCheckStatusChanged(checkResult: SdkCheckResult) {
//         try! SDK.checkResult() // Informs SDK that we're still listening
//         switch checkResult.status {
//         case .allowed: startOrContinuePlay()
//         case .denied:  abortGameWithErrors(errors: checkResult.errors)
//         case .idle:    wageringTimedOutOrNeverStarted()
//         default:       break
//         }
//     }

//     // Delegate method rarely used for debugging purposes; left empty for now
//     func didConnectionStatusChanged(status: SdkConnectionStatus?) { }
// }