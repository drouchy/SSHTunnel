Pod::Spec.new do |s|
  s.name         = 'SSHTunnel'
  s.version      = '1.0.0'
  s.summary      = 'An easy-to-use Cocoa framework for creating SSH tunnels.'
  s.author = {
    'Joe Roback' => 'none@example.com'
  }
  s.source = {
    :git => 'https://github.com/drouchy/SSHTunnel',
    :tag => '1.0.0'
  }
  s.source_files = 'SSHTunnel/*.{h,m}'
end

