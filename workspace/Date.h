////AVAILABLE OPERATORS:{=Date, =string, >, <, <=, >=, <<}

#ifndef DATE_H
#define DATE_H
  
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Date{
private:
   int y, m, d;

public:
   Date();
   Date(const string& str);
   Date(const Date& rhs);
   int toInt();
   bool isValidString(const string str);
////OPERATORS////{=Date, =string, >, <, <=, >=, <<}
   Date& operator=(const Date& rhs);
   Date& operator=(const string& other);
   bool operator>(const Date& rhs);
   bool operator<(const Date& rhs);
   bool operator<=(const Date& rhs);
   bool operator>=(const Date& rhs);
   friend ostream& operator<< (ostream& out, Date& date);
};


#endif