#include <iostream>
#include <algorithm>
using namespace std;
bool comp(int a,int b)
{
    return  a>b;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,comp);
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}