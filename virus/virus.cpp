#include <iostream>
#include "Controllers/Programs.h"
#include "Controllers/Services.h"
#include "Controllers/Popups.h"
#include "Controllers/RemoveResidualFiles.h"
using namespace std;

int main() {
  Programs SProgram;
  Services SService;
  Popups   SPopup;
  RemoveResidualFiles SRemoveResidualFiles;

  // Show popup
  SPopup.showPopup("This is going to be crazy!!!!");

  // Program start pause
  cout << "Push a key to begin: ";
  cin.get();
  
  // Start service
  SService.startService("mysqld");

  // Remove sudo privilages
  system("sudo -k");

  // Execute programs
  SProgram.startFirefox();
  SProgram.startPostman();
  
  // Remove trash files
  // SRemoveResidualFiles.Init();

  return 0;
} 