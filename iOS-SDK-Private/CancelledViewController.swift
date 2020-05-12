//
//  CancelledViewController.swift
//  iOS-SDK-Private
//
//  Created by Charmaine on 4/30/20.
//  Copyright © 2020 LenddoEFL. All rights reserved.
//

import UIKit

class CancelledViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
    }
    
    @IBAction func closeButtonClick(_ sender: Any) {
        self.dismiss(animated: true, completion: nil)
        UIControl().sendAction(#selector(URLSessionTask.suspend), to: UIApplication.shared, for: nil)
    }
}
