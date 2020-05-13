//
//  ViewController.swift
//  iOS-SDK-Private
//
//  Created by Jay Espinosa on 25/3/20.
//  Copyright © 2020 LenddoEFL. All rights reserved.
//

import UIKit
import WebKit
import LenddoSDKFramework

class ViewController: UIViewController,
    LenddoAuthorizeDelegate,
    UITextFieldDelegate{
    
    @IBOutlet weak var partnerscriptIdTextField: UITextField!
    @IBOutlet weak var applicationNameTextField: UITextField!
    @IBOutlet weak var applicationIdTextField: UITextField!
    
    @IBAction func generateApplicationIdButtonClicked(_ sender: Any) {
        
        let applicationName = applicationNameTextField.text!
        let applicationId = LenddoOnboardingUtility.sharedInstance.generateRandomApplicationId(name: applicationName)
        
        applicationIdTextField.text = applicationId
    }
    
    @IBAction func startOnboardingButtonClicked(_ sender: Any) {
        self.initiateLenddoAuthorize()
    }
    
    func onAuthorizeStarted() {
        print("Client Side - onAuthorizeStarted")
    }
    
    func onAuthorizeComplete(item: AuthorizationStatus) {
        print("Client Side - onAuthorizeComplete")
        print("URL: \(item.url!)")
        print("Client ID: \(item.clientId!)")
        print("Application ID: \(item.applicationId!)")
        
        let successVC = self.storyboard?.instantiateViewController(withIdentifier: "SuccessViewController") as! SuccessViewController
        successVC.clientID = item.clientId!
        successVC.modalPresentationStyle = .fullScreen
        self.present(successVC, animated: true, completion: nil)
    }
    
    func onAuthorizeFailure(item: AuthorizationStatus) {
        print("Client Side - onAuthorizeFailure")
    }
    
    func onAuthorizeCancelled(item: AuthorizationStatus) {
        print("Client Side - onAuthorizeCancelled")
        VCHelper.presentViewController(vc: self, storyBoardName: "Main",
                                       viewControllerName: String(describing: CancelledViewController.self))
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        applicationNameTextField.smartInsertDeleteType = UITextSmartInsertDeleteType.no
        applicationNameTextField.delegate = self
        applicationNameTextField.text = "TESTIOS"
        
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        applicationIdTextField.text = ""
    }
    
    func initiateLenddoAuthorize() {
        
        // Sample for FormDataCollector object.
        // The Partner Data and Verification Data objects are flexible for client side implementation, as long as the keys are in Snake Case
        // Application ID and Partnerscript ID are required.
        // You can also add items on your FormDataCollector object
        // Please update the Codable objects as needed.
        
        let formDataCollector = FormDataCollector()
        
        formDataCollector.partnerScriptID = partnerscriptIdTextField.text
        formDataCollector.applicationID = applicationIdTextField.text
        
        let partnerData = PartnerData()
        partnerData.loanAmount = 10000
        partnerData.sourceOfFunds = "Salary"
        
        let verificationData = VerificationData()
        verificationData.name?.first = "Juan"
        verificationData.name?.middle = "Dela"
        verificationData.name?.last = "Cruz"
        
        verificationData.dateOfBirth = "2000-06-12"
        
        formDataCollector.partnerData = partnerData
        formDataCollector.verificationData = verificationData
        
        // Encode the FormDataCollector to be in Data type
        let encoder = JSONEncoder()
        let jsonData = try! encoder.encode(formDataCollector)
        
        let lenddoOnboarding = LenddoOnboarding()
        
        lenddoOnboarding.initialize(
            environment: LenddoEnvironment.QA,
            partnerscriptId: partnerscriptIdTextField.text!,
            // NOTE: Do not use underscore on APP ID
            applicationId: applicationIdTextField.text!,
            formDataCollector: jsonData)
        
        // Initialize delegate is for handling LenddoAuthorizeDelegate callbacks
        lenddoOnboarding.initializeDelegate(delegate: self)
        
        // Set Screen View is the View Controller that will load the WebView
        lenddoOnboarding.setScreenView(view: self)
        
        // Start the Onboarding Process
        lenddoOnboarding.start()
    }

    func textField(_ textField: UITextField, shouldChangeCharactersIn range: NSRange, replacementString string: String) -> Bool {
        guard let textFieldText = textField.text,
            let rangeOfTextToReplace = Range(range, in: textFieldText) else {
                return false
        }
        let substringToReplace = textFieldText[rangeOfTextToReplace]
        let count = textFieldText.count - substringToReplace.count + string.count
        return count <= 8
    }
}
