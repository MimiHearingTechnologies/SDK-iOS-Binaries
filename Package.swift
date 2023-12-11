// swift-tools-version: 5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MimiSDK",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "MimiSDK",
            targets: ["MimiSDK", "MimiAuthKit", "MimiCoreKit", "MimiHTEKit", "MimiTestKit", "MimiUXKit"]),
    ],
    targets: [
        .binaryTarget(
            name: "MimiSDK",
            path: "artifacts/MimiSDK.xcframework"),
        .binaryTarget(
            name: "MimiAuthKit",
            path: "artifacts/MimiAuthKit.xcframework"),
        .binaryTarget(
            name: "MimiCoreKit",
            path: "artifacts/MimiCoreKit.xcframework"),
        .binaryTarget(
            name: "MimiHTEKit",
            path: "artifacts/MimiHTEKit.xcframework"),
        .binaryTarget(
            name: "MimiTestKit",
            path: "artifacts/MimiTestKit.xcframework"),
        .binaryTarget(
            name: "MimiUXKit",
            path: "artifacts/MimiUXKit.xcframework")
    ]
)
