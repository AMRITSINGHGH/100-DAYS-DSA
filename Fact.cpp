#include<iostream>
int Fact(int n){
    if(n==0 || n==1)
        return 1;
    
    
    return n*Fact(n-1);

}
int main(){
    int n;
    std::cout<<"Enter value: ";
    
    std::cin>>n;
    std::cout<<"\n";

    int result = Fact(n);
    std::cout<<"The Factorial of "<<n<<" is "<<result;
    return 0;
}