/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 John Slauter
 */

#include "std_lib_facilities.h"

#ifndef namevalue_H
#define namevalue_H

class Name_value{

    public:

        Name_value(string name, int value);

        Name_value();

        string get_Name();

        int get_Value();

    private:

        string name;

        int value;

};

#endif