/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 John Slauter
 */

#include "std_lib_facilities.h"
#include "ch6ex4.h"
#include "namevalue.h"
#include "namevalue.cpp"

using namespace ns;

#define stop_name "NoName"
#define stop_number 0

int main(){

    cout << "Enter Name Value Pairs:" << endl;

    vector<Name_value> list;

    string temp_name;

    int temp_value;

    Name_value temp_pair;

    try{

        read_Input(&temp_name, &temp_value);

        while(temp_name != stop_name || temp_value != stop_number){

            temp_pair = Name_value(temp_name, temp_value);

            if(is_In_Vector(list, temp_pair)){

                throw runtime_error("Duplicate Value.");

            }

            list.push_back(temp_pair);

            read_Input(&temp_name, &temp_value);

        }

    }

    catch(exception& err){

        cout << err.what();

        return 1;

    }

    print_List(list);

    return 0;

}

bool ns::is_In_Vector(vector<Name_value> list, Name_value target){

    for(vector<Name_value>::iterator i = list.begin(); i < list.end(); i++){

        if(i->get_Name() == target.get_Name() && i->get_Value() == target.get_Value()){

            return true;

        }

    }

    return false;

}

void ns::print_List(vector<Name_value> list){

    for(vector<Name_value>::iterator i = list.begin(); i != list.end(); i++){

        cout << i->get_Name() << ", " << i->get_Value() << endl;

    }

}

void ns::read_Input(string* name, int* value){

    cin >> *name;

    cin >> *value;

    if(!cin){

        throw runtime_error("Invalid Input.");

    }

}