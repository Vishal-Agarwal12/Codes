#include<iostream>
#include<algorithm>
using namespace std;
    
int main(){
    
    int arr[]={20,30,50,100,120};
    int n=sizeof(arr)/sizeof(int);
    
    //Search in a sorted array
    int key;
    cin>>key;

    bool present=binary_search(arr,arr+n,key);
    if(present){
        cout<<"Present";
    }
    else{ 
        cout<<"Absent!";
    }



    return 0;
}