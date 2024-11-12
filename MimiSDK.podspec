Pod::Spec.new do |s|
  s.name                = 'MimiSDK'
  s.version             = '10.3.0'
  s.homepage            = 'https://mimi.io'
  s.documentation_url   = 'https://mimihearingtechnologies.github.io/SDKDocs-iOS/master/'
  s.license             = { :type => 'Commercial', :file => 'MimiSDK.xcframework/LICENSE' }
  s.author              = { 'Mimi Hearing Technologies GmbH' => 'sales@mimi.io' }
  s.summary             = 'MimiSDK for iOS.'

  s.source           = { :git => 'https://github.com/MimiHearingTechnologies/SDK-iOS-Binaries.git', :tag => s.version.to_s }


  s.platform            = :ios, '15.0'
  s.ios.deployment_target = '15.0'

  s.xcconfig            = { 'FRAMEWORK_SEARCH_PATHS' => '"$(PODS_ROOT)/MimiSDK/**"' }
  s.frameworks          = 'Foundation', 'UIKit', 'SafariServices', 'Security', 'AudioToolbox', 'QuartzCore'

  s.preserve_paths      = 'MimiSDK.xcframework', 'MimiTestKit.xcframework', 'MimiHTEKit.xcframework', 'MimiAuthKit.xcframework', 'MimiUXKit.xcframework', 'MimiCoreKit.xcframework'
  s.vendored_frameworks = 'artifacts/MimiAuthKit.xcframework',
                          'artifacts/MimiCoreKit.xcframework',
                          'artifacts/MimiTestKit.xcframework',
                          'artifacts/MimiUXKit.xcframework',
                          'artifacts/MimiHTEKit.xcframework',
                          'artifacts/MimiSDK.xcframework'

end
