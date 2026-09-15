#include <iostream>
#include <string>
#include<algorithm>
bool Palinstr(const std::string & text, int start, int end){
    if(start>=end)
    return true;

    if (text[start] != text[end])
        return false;

    return Palinstr(text,start+1,end-1);



}
int main(){
    std::string input;
    std::cout<<"Input a string: ";
    std::getline(std::cin,input);

    input.erase(std::remove(input.begin(),input.end(),' '),input.end());


  bool palindrome = Palinstr(input,0,input.length()-1);

  if(palindrome){
    std::cout<<"The string is palindrome. "<<"\n";
  }
  else{
    std::cout<<"The string is not a palindrome."<<std::endl;
  }
    /*Input a string: madam
The string is a palindrome.
Input a string: abc
The string is not a palindrome.
9. Reverse a Linked List Using Recursion

Write a C++ program to implement a recursive function to reverse a linked list.*/




    return 0;
}