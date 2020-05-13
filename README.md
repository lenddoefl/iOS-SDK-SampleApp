# iOS Lenddo SDK eKYC

## Introduction
The Lenddo SDK Framework allows you to perform eKYC using Lenddo's Platform. This repository contains a demo application that utilizes the LenddoSDKFramework. 

## Pre-requisites
Xcode IDE is required, and the target version is iOS 11. 
Cocoapods must be also installed.

Before incorporating the Lenddo SDK into your app, you should be provided with the following information:

 * Partner Script ID

Please ask for the information above from your LenddoEFL representative. If you have a dashboard account, these values can also be found there.

## Installing the Lenddo SDK

1. Clone the repository on your machine

2. Open the project by using `.xcworkspace` file
   
3. Install the dependencies by doing `pod install`

#### Adding the Lenddo Credentials

In your application's sample ViewController assign the following values according to your setup:

```swift
 lenddoOnboarding.initialize(
            environment: LenddoEnvironment.QA,
            partnerscriptId: partnerscriptIdTextField.text!,
            // NOTE: Do not use underscore on APP ID
            applicationId: applicationIdTextField.text!,
            formDataCollector: jsonData)
```

The `FormDataCollector` is a sample class for giving `Partner Data` and `Verification Data` and this is flexible as long as the format is json and passed as `Data` type. An example is provided this project.

## Initializing Lenddo SDK
In your view controller use the protocol `LenddoAuthorizeDelegate`

```swift

import UIKit
import LenddoSDKFramework

class ViewController: UIViewController,
    LenddoAuthorizeDelegate,
    UITextFieldDelegate {
    
    }
```
Which has the following implementation

```swift
public protocol LenddoAuthorizeDelegate {
    func onAuthorizeStarted()
    func onAuthorizeComplete(item: AuthorizationStatus)
    func onAuthorizeFailure(item: AuthorizationStatus)
    func onAuthorizeCancelled(item: AuthorizationStatus)
```
