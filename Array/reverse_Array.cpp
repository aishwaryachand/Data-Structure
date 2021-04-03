/*Function to reverse an array */
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void reverseArray( int arr[] , int start , int end)
{
    if(start >= end){
        return ;
    }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverseArray(arr , start + 1 , end - 1 );
}

/*Utility functions to print an array*/
void printArray(int arr[] , int n)
{
   for(int i = 0 ;i < n ; i++){
        cout << arr[i] << " "  ;
   }

}

int main(){

    int arr[] = {1,2,3,4,5,6};
    printArray(arr,6);
    reverseArray(arr,0,5);
    cout << endl ;
    printArray(arr,6);

    return 0;
}

