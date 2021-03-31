#include <iostream>
using namespace std;

int* insertX(int n ,int arr[] , int x , int pos){

int i ;

//increase the size
n++;

for(i=n ; i >= pos ;i--){
    arr[i]=arr[i-1];
}

arr[pos-1]=x ;

return arr ;
}


int main(){

int arr[20] ={0};
int i ,x,pos ,n =10;
for (i = 0; i < 10 ; i++)
        arr[i] = i + 1;
cout << "before insertion" <<endl ;
for(i=0 ; i <n ; i++)
    cout << arr[i] << " ";
cout << endl;

x=50;
pos=5;

insertX(n,arr,x,pos);
cout<<"After insertion " <<endl;
 for (i = 0; i < n + 1; i++)
        cout << arr[i] << " ";
cout << endl;

return 0;


 }
