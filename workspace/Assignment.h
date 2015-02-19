#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include "Date.h"
#include <string>
using namespace std;

struct Assignment{
    Date due;
    Date completed;
    Date assigned;
    string description;
    bool isLate;
};

#endif