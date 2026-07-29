#include<iostream>
#include<algorithm>
void swap_elements(int *a, int *b){
        int t = *a;
        *a = *b;
        *b = t;





}


void Wave(int arr[], int n){
    std::sort(arr,arr+n);
    for(int i=0;i<n-1;i+=2)
    swap_elements(&arr[i],&arr[i+1]);




}
int main(){
    /*Write a C++ program to sort a given unsorted array of integers, in wave form.
Note: An array is in wave form when array[0] >= array[1] <= array[2] >= array[3] <= array[4] >= . . . .*/
int arr[] = {4, 5, 9, 12, 9, 22, 45, 7};
int n = sizeof(arr)/sizeof(arr[0]);
 std::cout<<"Original Array: "<<"\n";
 for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";


 }
 std::cout<<"\n";
 Wave(arr,n);
   for (int i = 0; i < n; i++)
       std::cout << arr[i] << " ";





    return 0;
}