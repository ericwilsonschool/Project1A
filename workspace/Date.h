#ifndef DATE_h
#define DATE_h

#include <string>
#include <iostream>
//#include "Date.cpp"
using namespace std;

class Date{
public:
  Date();
  Date& operator=(const Date& rhs);//Assign from other Date object
  Date& operator=(const string& rhs);//Assign from string (YYYYMMDD)
  bool isValidDate();
  bool isValidString(const string srt);

private:
  int y, m, d;
};

Date::Date(){//Default constructor
  this->y = 0;
  this->m = 0;
  this->d = 0;
}

Date& Date::operator=(const Date& rhs){//OL Assignment
  //check if they're the same
  if (this->y == (&rhs)->y && this->m == (&rhs)->m && this->d == (&rhs)->d)
    return *this;
  else{//assign individual values
  this->y = (&rhs)->y;
    this->m = (&rhs)->m;
    this->d = (&rhs)->d;
  return *this;
  }
}

Date& Date::operator=(const string& other){
//int yr, mo, dy;
try{
  if (isValidString(other)){
      this->y = stoi(other.substr(0, 4));
      this->m = stoi(other.substr(4, 2));
      this->d = stoi(other.substr(6, 2));
      return *this;
    }
    else
      throw 1;
    return *this;
  }
  catch (int){
    cout << "Invalid string\n";
  }
}

bool Date::isValidString(const string str){
  int mo, dy;
  try{
    if (str.length() != 8){//check for proper length
      throw 1;
      return false;
    }
    for (int i = 0; i < 8; ++i){//check if entire string is numeric
      //assumes correct length since it got this far
      if (!isdigit(str[i])){
      throw 2;
      return false;
      }
    }
    mo = stoi(str.substr(4, 2));//get month as int
    if (mo > 12 || mo < 1){//check for valid month
      throw 3;
      return false;
    }
    dy = stoi(str.substr(6, 2));//get day as int
    if (dy < 1){
      throw 4;
      return false;
    }
    switch (mo){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      if (dy > 31){
       throw 5;
       return false;
      }
      else
        break;
    case 4:
    case 6:
    case 9:
    case 11:
    if (dy > 30){
        throw 5;
        return false;
      }
      else
        break;
    case 2:
      if (dy > 28){
        throw 5;
        return false;
        }
      else
        break;
    default:
      throw 3;
    }
  }
  catch (int e){
    switch (e){
    case 1:
      cout << "Invalid str length\n";
    case 2:
      cout << "Invalid characters detected\n";
    case 3:
      cout << "Invalid month\n";
    case 4:
      cout << "Not enough days.\n";
    case 5:
      cout << "Too many days.\n";
    }

  }
  return true;
}
bool Date::isValidDate(){
  return false;
}

#endif