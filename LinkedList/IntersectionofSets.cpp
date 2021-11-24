#include<iostream>
using namespace std;
    
int main(){
    int A[20],B[20],Union[40],n,m,k=0,temp=0;
    cout<<"Enter the size of First Array";
    cin>>n;
    cout<<"Enter the elements of First Array";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    cout<<"Enter the size of Second Array";
    cin>>m;
    cout<<"Enter the elements of Second Array";
    for(int j=0;j<m;j++){
        cin>>B[j];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i]==B[j]){
               Union[k]=B[j];
               k++;
            }
        }
         
    }
        temp=k;
        for(int i=0;i<n;i++){
            for(int j=0;j<temp;j++){
                if(Union[j]!=A[i]){
                    Union[k]=A[i];
                    k++;
                }
            }
        }
          
           for(int i=0;i<k;i++){
               cout<<Union[i]<<endl;
           }
           
    return 0;
}