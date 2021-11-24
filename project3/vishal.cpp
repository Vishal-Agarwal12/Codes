#include<iostream>
using namespace std;
    
int main(){
    int arr[]={3,4,5,7,1,8,2,4},n;
    
    n=(sizeof(arr)/sizeof(arr[0]));
    cout<<n;
    return 0;
}