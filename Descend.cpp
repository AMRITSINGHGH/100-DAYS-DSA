#include<bits/stdc++.h>
using namespace std;

void reverse(int *arr,int size)
{
    int left=0;
    int right=size-1;
    
    while(left<right)
    {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}

void Descend(int *arr,int size,int k)
{
    multimap<int,int>mp;
    int nums[size]={0};
    
    for(int i=0;i<size;i++)
    {
        int ab=abs(k-arr[i]);
        mp.insert({ab,arr[i]});
    }
    
    int index=0;
    
    for(auto it:mp)
    {
       nums[index]=it.first; 
       index++;
    }
    
    // reverse(nums,size);
    
    for(int i=0;i<size;i++)
    {
        cout<<nums[i]<<" ";
    }
}

int main()
{
    int arr[]={0,9,7,2,12,11,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=12;
    
    Descend(arr,n,k);
}