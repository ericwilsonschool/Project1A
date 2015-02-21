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
   Date(){//Default constructor
      this->y = 0;
      this->m = 0;
      this->d = 0;
   }
   Date(const string& str){ //copy constructor
           if (isValidString(str)){
            this->y = stoi(str.substr(0, 4));
            this->m = stoi(str.substr(4, 2));
            this->d = stoi(str.substr(6, 2));
         }
    }
   Date(const Date& rhs){ //copy constructor
    *this = rhs;
    }
   int toInt()const{
    int iDate = 0;
    iDate += y * 10000;
    iDate += m * 100;
    iDate += d;
    
    return iDate;
  }
   bool isValidString(const string str){//tests validity of string passed as date.
      int mo, dy;
      //try{
         if (str.length() != 8){//check for proper length
            //throw 1;
            return false;
         }
         for (int i = 0; i < 8; ++i){//check if entire string is numeric
            //assumes correct length since it got this far
            if (!isdigit(str[i])){
               //throw 2;
               return false;
            }
         }
         mo = stoi(str.substr(4, 2));//get month as int
         ///*DEBUG*/cout << "mo: " << mo << '\n';
         if (mo > 12 || mo < 1){//check for valid month
            //throw 3;
            return false;
         }
         dy = stoi(str.substr(6, 2));//get day as int
         ///*DEBUG*/ cout << "dy: " << dy << '\n';

         if (dy < 1){
            //throw 4;
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
               //throw 5;
               return false;
            }
            else
               break;
         case 4:
         case 6:
         case 9:
         case 11:
            if (dy > 30){
               //throw 5;
               return false;
            }
            else
               break;
         case 2:
            if (dy > 28){
               //throw 5;
               return false;
            }
            else
               break;
         //default:
            //throw 3;
         }
      //}
      /*catch (int e){
         switch (e){
         case 1:
            cout << "Invalid str length\n";
            break;
         case 2:
            cout << "Invalid characters detected\n";
            break;
         case 3:
            cout << "Invalid month\n";
            break;
         case 4:
            cout << "Not enough days.\n";
            break;
         case 5:
            cout << "Too many days.\n";
            break;
         }

      }*/
      return true;
   }
////OPERATORS////{=Date, =string, >, <, <=, >=, <<}
   Date& operator=(const Date& rhs){//OL Assignment
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
   Date& operator=(const string& other){//Assign as string (i.e. date = "20150218")
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
   bool operator>(const Date& rhs){
     if ((this->toInt()) > rhs.toInt())
       return true;
    else
      return false;
  }
   bool operator<(const Date& rhs){
      if ((this->toInt()) < rhs.toInt())
        return true;
     else
       return false;
   }
   bool operator<=(const Date& rhs){
     if ((this->toInt()) <= rhs.toInt())
       return true;
     else
       return false;
   }
   bool operator>=(const Date& rhs){
     if ((this->toInt()) >= rhs.toInt())
       return true;
     else
       return false;
   }
   friend ostream& operator<< (ostream& out, Date& date){
      out << setfill('0') << setw(4) << date.y
         << setfill('0') << setw(2) << date.m
         << setfill('0') << setw(2) << date.d;
      return out;
   }
};


#endif