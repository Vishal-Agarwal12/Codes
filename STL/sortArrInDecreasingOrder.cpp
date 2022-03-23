#include<iostream>
#include<algorithm>
using namespace std;
    
bool compare(int a ,int b){
    return a>b;
}

int main(){
    int arr[]={1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n=sizeof(arr)/sizeof(int);

    sort(arr,arr+n,compare);
     
     //Sorted array is:
     
     cout<<"Sorted array in Decreasing Order is :"<<endl;
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }

    return 0;
}