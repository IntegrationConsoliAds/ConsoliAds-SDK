#
# Be sure to run `pod lib lint ConsoliAds-SDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ConsoliAds-SDK'
  s.version          = '13.1.0'
  s.summary          = 'ConsoliAds-SDK is integrated in order to get Ads of ConsoliAds.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
  'ConsoliAds-SDK is integrated in order to get Ads of ConsoliAds.'
  DESC
  s.homepage         = 'https://github.com/IntegrationConsoliAds/ConsoliAds-SDK'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'IntegrationConsoliAds' => 'integration@consoliads.com' }
  s.source           = { :git => 'https://github.com/IntegrationConsoliAds/ConsoliAds-SDK.git', :tag => s.version.to_s }

  s.ios.deployment_target = '9.0'

s.vendored_frameworks = 'ConsoliAds-SDK/ConsoliAdsSDK.xcframework'
s.xcconfig = {"OTHER_LDFLAGS" => "-ObjC"}

s.user_target_xcconfig = { 'ONLY_ACTIVE_ARCH' => 'YES'}
s.pod_target_xcconfig = { 'ONLY_ACTIVE_ARCH' => 'YES'}
s.static_framework = true

s.resource = 'ConsoliAds-SDK/Assets/ConsoliAdsResources.bundle'
end
