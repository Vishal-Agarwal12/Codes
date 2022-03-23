#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //Creating and Initialising Vector
    vector<int> a;
    vector<int> b(5, 10); // five int with value 10 each
    vector<int> c{1, 2, 3, 4, 5};

    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }

    cout<<endl;
    
    //Using Iterator
    for(auto it = c.begin();it!=c.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //Using For each loop
    for(auto x:c){
        cout<<x<<" ";
    }

    return 0;
}