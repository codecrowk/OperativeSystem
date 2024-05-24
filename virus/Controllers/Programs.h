#include <iostream>
using namespace std;

class Programs
{
  public: 
    void startPostman()
    {
      /* You have multiple alternatives
        * nohup
        * diswon
      */
      system("nohup postman &");
    }

    void startFirefox()
    {
      system("firefox");
    }
};