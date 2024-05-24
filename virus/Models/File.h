#include <iostream>
using namespace std;

class File
{
  private:
    const string rootDir = "../";
    string location;

  public: 
    File (string fileLocation)
    {
      this->location = fileLocation; 
    }

    string Location ()
    {
      // return this-> rootDir + location;
      return this-> location;
    }
};