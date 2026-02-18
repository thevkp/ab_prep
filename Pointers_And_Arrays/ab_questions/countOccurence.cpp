#include<bits/stdc++.h>
using namespace std;

// WAP to count occurence of an element in an array
int OccurenceInArr(int arr[], int n, int num){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==num){
            count++;
        }
    }
    return count;
}
// WAP to count occurence of a character in a string
int OccurenceInString(char strng[], int n, char letter){
    int count = 0;
    for(int i=0; i<n; i++){
        if(strng[i]==letter){
            count++;
        }
    }
    return count;
}
// WAP to count occurence of an element at even indices
int OccurenceInArrInEvenIndex(int arr[], int n, int num){
    int count = 0;
    cout<<"heay";
    for(int i=0; i<n; i++){
        if(i%2 ==0 && arr[i]==num){
            count++;
        }
    }
    return count;
}
// WAP to count occurence of even numbers at even indices
// if you can think of more variants, then WAP for them too

int main (){
    // Q.1 WAP to count occurence of an element in an array
    // int n;
    // cout<<"Enter n: "<<endl;
    // cin>>n;

    // int arr[n];
    // cout<<"Enter elements: "<<endl;
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }

    // cout<<"Find Occurence of: "<<endl;
    // int num;
    // cin>>num;

    // cout<<"Occurence: "<<OccurenceInArr(arr, n, num);

    // Q.2 WAP to count occurence of a character in a string
    // int n;
    // cin>>n;

    // char strng[n];
    // for(int i=0; i<n; i++){
    //     cin>>strng[i];
    // }

    // char letter;
    // cin>>letter;

    // cout<<"Occurence: "<<OccurenceInString(strng, n, letter);

    // Q.3 WAP to count occurence of an element at even indices
    // int n;
    // cout<<"Enter n: "<<endl;
    // cin>>n;

    // int arr[n];
    // cout<<"Enter elements: "<<endl;
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }

    // cout<<"Find Occurence of: "<<endl;
    // int num;
    // cin>>num;

    // cout<<"Occurence: "<<OccurenceInArrInEvenIndex(arr, n, num);

    // Q.4 WAP to count occurence of even numbers at even indices
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Find Occurence of: "<<endl;
    int num;
    cin>>num;

    if(num%2 ==0){
        cout<<"Occurence: "<<OccurenceInArrInEvenIndex(arr, n, num);
    } 
    else {
        cout<<"num is not even!";
    }
    return 0;
}