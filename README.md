# SDK iOS Binaries

This repository contains precompiled binaries for MimiSDK, making it easy to integrate into your iOS projects using Cocoapods or Swift Package Manager (SPM).

## Installation

### Cocoapods

Add the following line to your project's Podfile:

```ruby
pod 'SDK-iOS-Binaries', :git => 'https://github.com/MimiHearingTechnologies/SDK-iOS-Binaries.git'
```

Run pod install in your terminal to fetch and integrate the SDK into your project.

**Note for Xcode 15 Users:**

If you're using Xcode 15, make sure to disable User Script Sandboxing in the Build settings. This ensures smooth integration with the SDK.

### Swift Package Manager (SPM)
Add the following dependency in your Xcode project:

- Open your project in Xcode.
- Go to "File" > "Swift Packages" > "Add Package Dependency..."
- Enter the repository URL: https://github.com/MimiHearingTechnologies/SDK-iOS-Binaries.git
- Follow the prompts to integrate the SDK into your project.

For more detailed information and API documentation, refer to [https://mimihearingtechnologies.github.io/SDKDocs-iOS/master/].
