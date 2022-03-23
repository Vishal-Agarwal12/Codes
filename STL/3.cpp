#include<iostream>
#include<algorithm>
using namespace std;
    
int main(){
    int arr[]={2,5,7,11,9};
    int n=sizeof(arr)/sizeof(int);
    
    int key;
    cin>>key;

    auto it =find(arr,arr+n,key);
    // cout<<it;  this statement prints address of a key in the format 0xskfjfs32 ,so we subtract it from it to get index

    int index =it-arr;

    if (index==n){
        cout<<key<<" not present";
    }
    else{
        cout<<"present at index "<<index;
    }



    return 0;
}