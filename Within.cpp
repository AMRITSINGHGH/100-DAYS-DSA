#include<iostream>
using namespace std;
string Test(string s){
    if(s.length()>2 && s.substr(0,2)=="if"){
        return s;
    }
    else
    return "if " + s;
}

int main(){
    cout<<Test("if else")<<endl;
    cout<<Test("else")<<endl;
    /*Write a C++ program to create a string where 'if' is added to the front of a given string. If the string already begins with 'if', return the string unchanged.
Sample Input:
"if else"
"else"
Sample Output:
if else
if else*/
    return 0;
}