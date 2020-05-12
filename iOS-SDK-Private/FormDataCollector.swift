//
//  FormDataCollector.swift
//  iOS-SDK-Private
//
//  Created by Jay Espinosa on 26/3/20.
//  Copyright © 2020 LenddoEFL. All rights reserved.
//

import Foundation
import Alamofire

import Foundation
import Alamofire

// NOTE: Partner Data and Verification Data are customizable

// MARK: - FormDataCollector
class FormDataCollector: Codable {
    var partnerScriptID, applicationID: String?
    var partnerData: PartnerData?
    var verificationData: VerificationData?

    enum CodingKeys: String, CodingKey {
        case partnerScriptID = "partner_script_id"
        case applicationID = "application_id"
        case partnerData = "partner_data"
        case verificationData = "verification_data"
    }

    init(partnerScriptID: String, applicationID: String, partnerData: PartnerData, verificationData: VerificationData) {
        self.partnerScriptID = partnerScriptID
        self.applicationID = applicationID
        self.partnerData = partnerData
        self.verificationData = verificationData
    }
    
    init() {
        
    }
}

// MARK: - PartnerData
class PartnerData: Codable {
    var gender, motherFirstName, motherMiddleName, motherLastName: String?
    var houseNumber, barangay, streetName, municipality: String?
    var province, postalCode, sourceOfFunds, nameOfEmployer: String?
    var natureOfWork, mobileNumber, monthlyIncome: String?
    var country: String?
    var loanAmount: Int?

    enum CodingKeys: String, CodingKey {
        case gender
        case motherFirstName = "mother_first_name"
        case motherMiddleName = "mother_middle_name"
        case motherLastName = "mother_last_name"
        case houseNumber = "house_number"
        case barangay
        case streetName = "street_name"
        case municipality, province
        case postalCode = "postal_code"
        case sourceOfFunds = "source_of_funds"
        case nameOfEmployer = "name_of_employer"
        case natureOfWork = "nature_of_work"
        case mobileNumber = "mobile_number"
        case monthlyIncome = "monthly_income"
        case loanAmount = "loan_amount"
        case country
    }

    init(gender: String, motherFirstName: String, motherMiddleName: String, motherLastName: String, houseNumber: String, barangay: String, streetName: String, municipality: String, province: String, postalCode: String, sourceOfFunds: String, nameOfEmployer: String, natureOfWork: String, mobileNumber: String, monthlyIncome: String, loanAmount: Int, country: String) {
        self.gender = gender
        self.motherFirstName = motherFirstName
        self.motherMiddleName = motherMiddleName
        self.motherLastName = motherLastName
        self.houseNumber = houseNumber
        self.barangay = barangay
        self.streetName = streetName
        self.municipality = municipality
        self.province = province
        self.postalCode = postalCode
        self.sourceOfFunds = sourceOfFunds
        self.nameOfEmployer = nameOfEmployer
        self.natureOfWork = natureOfWork
        self.mobileNumber = mobileNumber
        self.monthlyIncome = monthlyIncome
        self.loanAmount = loanAmount
        self.country = country
    }
    
    init() {
        
    }
}

// MARK: - VerificationData
class VerificationData: Codable {
    var name: Name?
    var employer: String?
    var phone: Phone?
    var employmentPeriod: EmploymentPeriod?
    var email, workEmail: String?
    var dateOfBirth: String?
    var address: Address?
    var workAddress: EmploymentPeriod?
    var governmentIDS: [GovernmentID]?

    enum CodingKeys: String, CodingKey {
        case name, employer, phone
        case employmentPeriod = "employment_period"
        case email
        case workEmail = "work_email"
        case address
        case workAddress = "work_address"
        case governmentIDS = "government_ids"
        
        // Format is "yyyy-MM-dd"
        case dateOfBirth = "date_of_birth"
    }

    init(name: Name, employer: String, phone: Phone, employmentPeriod: EmploymentPeriod, dateOfBirth: String, email: String, workEmail: String, address: Address, workAddress: EmploymentPeriod, governmentIDS: [GovernmentID]) {
        self.name = name
        self.employer = employer
        self.phone = phone
        self.employmentPeriod = employmentPeriod
        self.dateOfBirth = dateOfBirth
        self.email = email
        self.workEmail = workEmail
        self.address = address
        self.workAddress = workAddress
        self.governmentIDS = governmentIDS
    }
    
    init() {
        
    }
}

// MARK: - Address
class Address: Codable {
    var line1, line2, countryCode: String

    enum CodingKeys: String, CodingKey {
        case line1 = "line_1"
        case line2 = "line_2"
        case countryCode = "country_code"
    }

    init(line1: String, line2: String, countryCode: String) {
        self.line1 = line1
        self.line2 = line2
        self.countryCode = countryCode
    }
}

// MARK: - EmploymentPeriod
class EmploymentPeriod: Codable {

    init() {
    }
}

// MARK: - GovernmentID
class GovernmentID: Codable {
    var type, value: String

    init(type: String, value: String) {
        self.type = type
        self.value = value
    }
}

// MARK: - Name
class Name: Codable {
    var last, middle, first: String

    init(last: String, middle: String, first: String) {
        self.last = last
        self.middle = middle
        self.first = first
    }
}

// MARK: - Phone
class Phone: Codable {
    var mobile, home: String

    init(mobile: String, home: String) {
        self.mobile = mobile
        self.home = home
    }
}
