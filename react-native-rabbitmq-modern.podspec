require 'json'

package = JSON.parse(File.read(File.join(__dir__, 'package.json')))

Pod::Spec.new do |s|
  s.name           = package['name']
  s.version        = package['version']
  s.summary        = package['description']
  s.description    = package['description']
  s.license        = package['license']
  s.author         = package['author']
  s.homepage       = package['homepage']
  s.source         = { :git => 'https://github.com/ramighazzawi2002/react-native-rabbitmq-modern.git', :tag => s.version }

  s.requires_arc   = true
  s.platform       = :ios, '9.0'

  s.preserve_paths = 'README.md', 'package.json', 'index.js'
  
  # Include both your library files and the bundled RMQClient files
  s.source_files   = 'iOS/RCTReactNativeRabbitMq/*.{h,m}', 'iOS/RMQClient/RMQClient/**/*.{h,m}'
  
  # Exclude test files
  s.exclude_files = 'iOS/RMQClient/RMQClient/**/*Test*.{h,m}'
  
  # Include public headers
  s.public_header_files = 'iOS/RCTReactNativeRabbitMq/*.h', 'iOS/RMQClient/RMQClient/**/*.h'

  s.dependency 'React'
  s.dependency 'CocoaAsyncSocket'
  s.dependency 'JKVValue'
  
  # Removed RMQClient dependency - now bundled directly
end