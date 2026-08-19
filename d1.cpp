/*1. Dynamically Allocate Basic Types

Write a C++ program to dynamically allocate an integer, a character and a string and assign a value to them.*/
#include<iostream>
#include<string>
int main(){
    int *dyanmicint = new int;
    *dyanmicint = 20;
    char *dyanmichar = new char;
    *dyanmichar = 'C';

    std::string *dyanmicstring = new std::string;
    *dyanmicstring = "Im doing C++";

    std::cout<<*dyanmicint<<"\n";
    std::cout<<*dyanmichar<<"\n";
    std::cout<<*dyanmicstring<<"\n";


    delete dyanmicint;
    delete dyanmichar;
    delete dyanmicstring;












    return 0;
}