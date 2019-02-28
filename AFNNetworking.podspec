#
# Be sure to run `pod lib lint AFNNetworking.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'AFNNetworking'
  s.version          = '3.2.16'
  s.summary          = 'A networking framework.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
  A delightful networking framework for iOS, macOS, watchOS, and tvOS. http://afnetworking.com
                       DESC

  s.homepage         = 'https://github.com/cuizhiyuan/AFNNetworking'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'cuizhiyuan' => '554561128@qq.com' }
  s.source           = { :git => 'https://github.com/cuizhiyuan/AFNNetworking.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'
  s.requires_arc = true
  s.ios.deployment_target = '8.0'
  s.user_target_xcconfig = { 'CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES' => 'YES' }
  s.public_header_files = 'AFNNetworking/AFNNetworking/*.h','AFNNetworking/KKLaunchAd.framework/Headers/**'
  s.source_files = 'AFNNetworking/AFNNetworking/**','AFNNetworking/UIKit+AFNNetworking/**'
  s.resource_bundles = {
      'AFNNetworking' => ['AFNNetworking/AFNNetworkingManager.framework/*.bundle']
  }
  
  s.vendored_frameworks = 'AFNNetworking/*.{framework}'
  s.dependency 'SDWebImage'
  s.dependency 'SVProgressHUD'
end
