#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    char s[n],result[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
	    int m=0;
	    for(int i=0;i<n;i++){
	        if(s[i]='1'){
	            result[n-m-1]=s[i];
	            m++;
	        }
	        else
	          result[i]='0';
	    }
	    for(int i=0;i<n;i++){
            cout<<result[i];
        }
        cout<<endl;
	}
	return 0;
}
