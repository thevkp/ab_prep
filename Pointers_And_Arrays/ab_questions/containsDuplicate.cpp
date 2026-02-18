/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

Example 1:

Input: nums = [1,2,3,1]

Output: true

Explanation:

The element 1 occurs at the indices 0 and 3.

Example 2:

Input: nums = [1,2,3,4]

Output: false

Explanation:

All elements are distinct.

Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]

Output: true
*/

#include<iostream>
using namespace std;

bool repeat(int arr[], int n){
    int start, check;
    start = 0;
    while(start != n-1){
        check = start + 1;
        for(int i = check; i<n; i++){
            if(arr[start] == arr[i]) return true;
        }
        start++;
        check++;
    }
    return false;
}

int main (){
    int n;
    cout<<"Enter number of elements: "<<endl;
    cin>>n;

    cout<<"Enter num:"<<endl;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Result: "<<repeat(arr, n);

    return 0;
}