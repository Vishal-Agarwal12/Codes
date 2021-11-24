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

    for(int k=0;k<n;k++){
        Union[k]=A[k];
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<k;j++){
            if(Union[j]==B[i]){
                break;
            }
            else{
                Union[j]=B[i];
                k++;
                n++;
            }
        }
    }

    for(int k=0;k<n;k++){
       cout<<Union[k]<<endl;
    }

    return 0;
}