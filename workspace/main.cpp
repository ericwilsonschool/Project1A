//Eric Wilson
#include "Date.h"
#include "linked_list.cpp"
 //#include "menu.cpp"

using namespace std;//Can you see this?Shit.
void print_list(const linked_list& li){
    
    linked_list::iterator iter = li.begin();
    
    while (iter != li.end()){
        cout << *iter;
        ++iter;
        if (iter != li.end())
            cout << " ===> ";
    }
    
    cout << '\n';
}

int main()
{ 
  Date newDate; //Default constructor
  newDate = "20150218"; //assignment operator
  Date newDate2;
  newDate2 = "19991231";
  
  cout << newDate2.toInt() << endl;
  cout << newDate << " > " << newDate2 << ": " << (newDate > newDate2) << endl;

    linked_list test = new linked_list;
    test.add_node(1234);
    test.add_node("testing");
    print_list(test);
  
  //cout << "newDate: " << newDate << ' ' << "newDate2: " << newDate2 << endl; //stream insertion operator
  //cout << "newDate > newDate2: " << (newDate > newDate2) << endl;
  //cout << "newDate < newDate2: " << (newDate < newDate2) << endl;  
  
  //newDate2 = newDate; //they can even be made equal to eachother!

  //cout << "newDate: " << newDate << ' ' << "newDate2: " << newDate2 << endl; //stream insertion operator
  //cout << "newDate >= newDate2: " << newDate >= newDate2 << endl;
  //cout << "newDate <= newDate2: " << newDate <= newDate2 << endl; 
  
  return 0;
}