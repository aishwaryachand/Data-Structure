#include <iostream>
using namespace std;

int search(int arr[] , int n , int x){
    int i;
    for(i=0 ; i < n ; i++){
        if (arr[i] == x){
            return i;
        }
        
    }
    return -1;
}

int main(){
    int arr[] = {2,3,4,10,34,60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x= 10;
    }
    int result = search(arr,n,x);
    (result ==-1) 
    ? cout << "Element not present" 
    : cout << "Element is present at index " << result ;
    return 0;
    
}
