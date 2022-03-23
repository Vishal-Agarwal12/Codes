#include<iostream>
#include<algorithm>
using namespace std;
    
int main(){
    int arr[]={1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n=sizeof(arr)/sizeof(int);

    sort(arr,arr+n);
     
     //Sorted array is:
     
     cout<<"Sorted array is :"<<endl;
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }

    return 0;
}