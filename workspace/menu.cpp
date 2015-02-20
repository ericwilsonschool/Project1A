// Sample Template for Menu Navigation
// Eric Wilson
#include <iostream>
using namespace std;

void genericSubmenu();

void mainMenu() {
  char menuSelection;
  while (1) { // Dangerous retard code
    cout << "\nMAIN MENU\n1. View assigned\t\t2. View completed\n"
         << "3. Generic Submenu\t\t0. Exit\n";

    cin >> menuSelection; // get user selection;

    switch (menuSelection) {
    case '1':
      cout << "This is viewing assigned!\n"; // placeholder
      break;
    case '2':
      cout << "This is viewing completed!\n"; // placeholder
      break;
    case '3':
      genericSubmenu();
      break;
    case '0':
      // I wanted to keep the 0 option as the universal 'back' command just
      // because it seems more intuitive.
      return; // exit mainMenu() to main()
    default:
      cin.clear();
      cin.ignore(256, '\n');
      cout << "Invalid selection!\n";
      menuSelection = '0';
      break; // Restarts while(1) loop
    }
  }
}
void genericSubmenu() { // submenu created to test main menu and 'back'
                        // functionality
  char menuSelection;

  while (1) { // dangerous retard code
    cout << "\nGENERIC SUBMENU:\n1. OptionSelect\n"
         << "0. Back\n";

    cin >> menuSelection; // get user selection;

    switch (menuSelection) {
    case '1':
      cout << "This is Option Select!\n"; // placeholder
      break;
    case '0':
      return; // exit to previous menu
    default:
      cin.clear();
      cin.ignore(256, '\n');
      cout << "Invalid selection!\n";
      menuSelection = '0';
      break; // restarts while(1) loop
    }
  }
}