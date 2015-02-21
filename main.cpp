//Eric Wilson
#include "Date.h"
 //#include "menu.cpp"

using namespace std;//Can you see this?Shit. 

int main()
{ 
  Date newDate; //Default constructor
  newDate = "20150218"; //assignment operator
  Date newDate2;
  newDate2 = "19991231";
  
  cout << newDate2.toInt() << endl;
  cout << newDate << " > " << newDate2 << ": " << (newDate > newDate2) << endl; 
  
  //cout << "newDate: " << newDate << ' ' << "newDate2: " << newDate2 << endl; //stream insertion operator
  //cout << "newDate > newDate2: " << (newDate > newDate2) << endl;
  //cout << "newDate < newDate2: " << (newDate < newDate2) << endl;  
  
  //newDate2 = newDate; //they can even be made equal to eachother!

  //cout << "newDate: " << newDate << ' ' << "newDate2: " << newDate2 << endl; //stream insertion operator
  //cout << "newDate >= newDate2: " << newDate >= newDate2 << endl;
  //cout << "newDate <= newDate2: " << newDate <= newDate2 << endl; 
  
  return 0;
}