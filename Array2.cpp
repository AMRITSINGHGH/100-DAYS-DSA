#include<iostream>
#include<limits>
using namespace std;
void three_largest(int arr[], int arr_size)
{
    int i,first,second,third;
    if(arr_size<3){
        cout<<"Invalid Input";
    }
    third = first = second = INT_MIN;
     for (i = 0; i < arr_size; i ++) // Loop to find three largest elements in the array
    {
        if (arr[i] > first) // Checking if current element is larger than the first largest element
        {
            third = second; // Updating third largest element
            second = first; // Updating second largest element
            first = arr[i]; // Updating first largest element
        }
        else if (arr[i] > second) // Checking if current element is larger than the second largest element
        {
            third = second; // Updating third largest element
            second = arr[i]; // Updating second largest element
        }
        else if (arr[i] > third) // Checking if current element is larger than the third largest element
        {
            third = arr[i]; // Updating third largest element
        }
    }

    cout << "\nThree largest elements are: " << first << ", " << second << ", " << third; // Output three largest elements
}

int main(){
    int nums = {7,12,9,15,19,32,56,70};
    int n = sizeof(nums)/sizeof(nums[0]);

    cout<<"Original array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    three_largest(nums,n);
    /*2. Largest Three Elements in Array

Write a C++ program to find the largest three elements in an array*/
    return 0;
}