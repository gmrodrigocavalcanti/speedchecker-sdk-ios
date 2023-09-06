//
//  ViewController.swift
//  SpeedcheckerSDK Sample
//
//

import UIKit
import SpeedcheckerSDK
import CoreLocation

class ViewController: UIViewController {

    private var internetTest: InternetSpeedTest?
    private var locationManager = CLLocationManager()

    override func viewDidLoad() {
        super.viewDidLoad()

        requestLocationAuthorization()
    }

    @IBAction func runSpeedTestTouched(_ sender: UIButton) {
        // to use free version, your app should have location access
        internetTest = InternetSpeedTest(delegate: self)
        internetTest?.startTest() { (error) in
            if error != .ok {
                print(error)
            }
        }
        
        // to use paid version, your app does not need location access
//        internetTest = InternetSpeedTest(clientID: 0, userID: 0, delegate: self)
//        internetTest?.start() { (error) in
//          if error != .ok {
//              print(error)
//          }
//        }
    }
    
    func requestLocationAuthorization() {
        DispatchQueue.global().async {
            guard CLLocationManager.locationServicesEnabled() else {
                return
            }
            DispatchQueue.main.async { [weak self] in
                self?.locationManager.delegate = self
                self?.locationManager.requestWhenInUseAuthorization()
                self?.locationManager.requestAlwaysAuthorization()
            }
        }
    }
    
}

extension ViewController: InternetSpeedTestDelegate {
    func internetTestError(error: SpeedTestError) {
        print(error)
    }
    
    func internetTestFinish(result: SpeedTestResult) {
        print(result.downloadSpeed.mbps)
        print(result.uploadSpeed.mbps)
        print(result.latencyInMs)
        
    }
    
    func internetTestReceived(servers: [SpeedTestServer]) {
        //
    }
    
    func internetTestSelected(server: SpeedTestServer, latency: Int, jitter: Int) {
        print("Latency: \(latency)")
        print("Jitter: \(jitter)")
    }
    
    func internetTestDownloadStart() {
        //
    }
    
    func internetTestDownloadFinish() {
        //
    }
    
    func internetTestDownload(progress: Double, speed: SpeedTestSpeed) {
        print("Download: \(speed.descriptionInMbps)")
    }
    
    func internetTestUploadStart() {
        //
    }
    
    func internetTestUploadFinish() {
        //
    }
    
    func internetTestUpload(progress: Double, speed: SpeedTestSpeed) {
        print("Upload: \(speed.descriptionInMbps)")
    }
    
    
}

extension ViewController: CLLocationManagerDelegate {
    
}
