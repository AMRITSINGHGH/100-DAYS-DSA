#include <iostream>
int Sum(int x){
    if(x==0)
    return 0;
return (x % 10) + Sum(x / 10);


    
}

int main(){

    int n;
    std::cout<<"Enter a number: ";
    std::cin>>n;
int rs = Sum(n);
std::cout<<"The sum is: "<<rs;
    return 0;
}