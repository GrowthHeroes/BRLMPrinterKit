Pod::Spec.new do |s|
  s.name             = 'BRLMPrinterKit'
  s.version          = '4.12.0'
  s.summary          = "Pod for the BRLMPrinterKit / Brother's printers"
  s.description      = "This project is only a Pod for the Brother SDK v#{s.version}"
  s.homepage         = 'https://github.com/johnvuko/BRLMPrinterKit'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Jonathan VUKOVICH' => 'jonathan@eivo.fr' }
  s.source           = { :git => 'https://github.com/johnvuko/BRLMPrinterKit.git', :tag => s.version.to_s }
  s.ios.deployment_target = '13.0'
  s.ios.vendored_frameworks = 'BRLMPrinterKit/BRLMPrinterKit.xcframework'
end
