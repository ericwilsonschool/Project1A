//Just a stupid dream... :(
//Eric Wilson
//John's first commit
#include <iostream>
using namespace std;

class Date{
  private:
    int month;
    int day;
    int year;
  public:
    Date(int , int, int);
    Date();
    void print();
    void change(int , int , int );//Probably replace this with OL = operator
  
};

Date::Date(int m, int d, int y){
  month = m;
  day = d;
  year = y;
}
  
Date::Date(){
  month = 0;
  day = 0;
  year = 0;
}



void Date::print(){
  cout << month << '-' << day << '-' << year;
}

void Date::change(int m, int d, int y){
  month = m;
  day = d;
  year = y;
}