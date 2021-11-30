/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 John Slauter
 */

#include "std_lib_facilities.h"
#include "namevalue.h"

Name_value::Name_value(string name, int value){

    this->name = name;

    this->value = value;

}

Name_value::Name_value(){

    Name_value(NULL, 0);

}

string Name_value::get_Name(){

    return this->name;

}

int Name_value::get_Value(){

    return this->value;

}