#include <iostream>
#include "../Helpers/SystemString.h"
using namespace std;

class Popups
{
  private:
    SystemString SSystem;
  public: 
    void showPopup(string message)
    {
      SSystem.notification(message);
    }
};