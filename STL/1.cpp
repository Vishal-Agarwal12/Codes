#include <iostream>
#include<cstring>
using namespace std;

// here we are using generic function which are used for different data types

template <typename T>
int search(T arr[], int n, T key)
{
    for (int p = 0; p < n; p++)
    {
        if (arr[p] == key)
        {
            return p;
        }
    }
    return -1;
}

int main()
{
    int a[] = {1, 5, 3, 6, 4};
    int n = sizeof(a) / sizeof(int);
    int key = 3;

    // cout << search(a, n, key) << endl;

    float b[]={1.3,4.2,6.2};
    float k=1.3;
    cout<<search(b,3,k);
    return 0;
}