#
# Be sure to run `pod lib lint MPCore.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
    s.name             = 'MPCore'
    s.version          = '0.1.17'
    s.summary          = 'Core sdk framework.'
    
    # This description is used to generate tags and improve search results.
    #   * Think: What does it do? Why did you write it? What is the focus?
    #   * Try to keep it short, snappy and to the point.
    #   * Write the description between the DESC delimiters below.
    #   * Finally, don't worry about the indent, CocoaPods strips it!
    
    s.description      = <<-DESC
    Core sdk framework.
    DESC
    
    s.homepage         = 'https://phamducmanh1989@github.com/phamducmanh1989/MPCore'
    # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
    s.license          = { :type => 'MIT', :file => 'LICENSE' }
    s.author           = { 'Manh Pham' => 'phamducmanh1989@gmail.com' }
    s.source           = { :git => 'https://phamducmanh1989@github.com/phamducmanh1989/MPCore.git', :tag => s.version.to_s }
    
    s.ios.deployment_target = '9.0'
    s.vendored_frameworks = 'MPCore.framework'
    s.public_header_files = 'MPCore.framework/Headers/*.h'
    s.source_files = 'MPCore.framework/Headers/*.h'
    s.frameworks = 'Security'
end
