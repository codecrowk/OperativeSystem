// This library was made to run dinamic string command in system() 
#include <iostream>
#include <format>
using namespace std;

// Validate if headers doesn't have duplicate importing
#ifndef HSystemString
#define HSystemString
class SystemString
{
  public: 
    void execute(string command)
    {
      // Convert string to const char * as system requires
      // parameter of type const char *
      const char* systemCommand = command.c_str();
      system(systemCommand);
    }

    void notification(string message)
    {
      string command = format("notify-send '{}'", message);
      execute(command);
    }
};
#endif