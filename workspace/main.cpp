//Why are there so many ostritches?
//Eric Wilson

//Oh, and apparently there's an option under the 'Edit' menu to use Vim key bindings. 
#include <iostream>
#include "date.cpp"
#include "menu.cpp"

using namespace std;

int main()
{ 
 Date newDate (11,19,1987); //test constructor with my birfday
 Date newDate2;//test default constructor
  
  newDate.print();
  cout << '\n';
  newDate2.print();
  cout << '\n';
  newDate2.change(11, 13, 1989); //test change function with Brittney's birfday.
  newDate2.print();
  cout << '\n';
  
  mainMenu();//start menu navigation (menu.cpp)

  return 0;
}