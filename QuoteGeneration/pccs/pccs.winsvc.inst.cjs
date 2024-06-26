var Service = require('node-windows').Service;

// Create a new service object
var svc = new Service({
  name:'Intel(R) SGX PCK Certificate Caching Service',
  description: 'PCK Certificate Caching Service for Intel SGX DCAP',
  script: require('path').join(__dirname,'pccs_server.js'),
  nodeOptions: [
  ]
  //,workingDirectory: '...'
  //, allowServiceLogon: true
});

// Listen for the "install" event, which indicates the
// process is available as a service.
svc.on('install',function(){
  svc.start();
  console.log('Install Intel(R) SGX PCK Certificate Caching Service complete.');
  console.log('The service exists: ',svc.exists);
});

svc.install();
