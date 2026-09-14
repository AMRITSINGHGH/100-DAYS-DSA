#include <iostream>

int Recexpo(int input,int expo){
    if (expo == 0) {
        return 1;
    }
    return input*Recexpo(input,expo-1);

}
int main(){

    /*7. Power Calculation Using Recursion

Write a C++ program to implement a recursive function to calculate the power of a number
Input the base number: 2
Input the exponent: 3
2 raised to the power of 3 is: 8
Input the base number: 10
Input the exponent: 4
10 raised to the power of 4 is: 10000*/

int input, expo;
std::cout<<"Input the base number: ";
std::cin>>input;
std::cout<<"Input the Exponent: ";
std::cin>>expo;

int rs = Recexpo(input,expo);
std::cout<<input<<" raised to the power of "<<expo<<" is: "<<rs;

    return 0;
}