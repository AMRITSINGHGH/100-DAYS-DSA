#include<iostream>
#include<vector>
#include<algorithm>
std::vector<int> test(std::vector<int> nums){
    std::vector<int> temp;
for(int i=1;i<nums.size()-1;i++){
    if((nums[i]<nums[i-1]) && nums[i] < nums[i+1])
    temp.push_back(nums[i]);



}





    return temp;
}
int main(){
    std::vector<int> nums = {1,2,5,0,3,1,7};

    std::cout<<"Original Elements are: ";
    for(int x: nums)
    std::cout<<x<<" ";

    std::cout<<"\n";

    std::vector<int> result = test(nums);
    std::cout<<"The adjacent are: ";
for(int y: nums){
    std::cout<<y<<" ";
}

    /*Write a C++ program that returns the elements in a vector that are strictly smaller than their adjacent left and right neighbours.

Example:
Original Vector elements:
1 2 5 0 3 1 7
Vector elements that are smaller than its adjacent neighbours:
0
1*/
    
    
    
    
    
    
    return 0;

}