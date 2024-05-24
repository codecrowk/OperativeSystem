#include <iostream>
#include "../Helpers/SystemString.h"
using namespace std;

class VServices
{
  private:
    SystemString SSystem;

  public: 
    void serviceStatus(string service)
    {
      string command = "sudo systemctl status " + service;
      SSystem.execute(command);
    }
};