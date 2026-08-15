#include<iostream>
#include<algorithm>
#include<vector>
std::vector<std::vector<int>> test(int n){
    std::vector<int> t(n,n);
    std::vector<std::vector<int>> arr(n,t);
    return arr;



}
int main(){
    int n;
    std::cin>>n;
    std::vector<std::vector<int>> result = test(n);
    std::cout<<"This is a nxn matrix: "<<"\n";

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            std::cout<<result[i][j]<<" ";
            
        }
    }
    


    /*3. Create an n x n Matrix from Input

Write a C++ program to create an n x n matrix by taking an integer (n) as input from the user.

Example:
Input: 2
Input an integer value: Create an n x n matrix by said integer:
2 2
2 2*/
    return 0;
}
