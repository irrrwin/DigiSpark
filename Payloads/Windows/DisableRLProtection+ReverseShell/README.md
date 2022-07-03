
## DisableRLProtection+ReverseShell.ino
Opens powershell as administrator, disables the real-time protection and runs payload.ps1 fetched from the server. Change the Host IP Address and Port according to your setup.

## payload.ps1
A simple and small reverse shell by samratashok's Nishang framework. Change the Host IP Address and Port according to your setup.

### HOW-TO:
0. fill out IP and PORT fields in both DisableRLProtection+ReverseShell.ino and payload.ps1 files
1. put the shit on the stick using your favorite method (<a href=http://digistump.com/wiki/digispark/tutorials/connecting>recommended</a>)
2. setup a server with "python3 -m http.server <PORT>" to serve the payload.ps1
3. copy payload.ps1 into the root directory of the python's http server
4. use the stick
5. ...
6. enjoy
  
### Tricks:
* using common ports might help against firewalls  
 
