#include <iostream>
#include <vector>
#include "../Helpers/SystemString.h"
#include "../Models/File.h"
using namespace std;

class RemoveResidualFiles
{
  private:
    SystemString SSystem;
    
    vector<File> fileLocations
    {
      File("virus"),
      File("nohup.out"),
    };

  public: 
    void Init()
    {
      cout << "Removing trash files";
      for (int i; i < fileLocations.size(); i++)
      {
        string location = fileLocations[i].Location();
        string command = "rm " + location;
        SSystem.execute(command);
      }
    }
};