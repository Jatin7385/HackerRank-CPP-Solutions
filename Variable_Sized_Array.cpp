#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,k,value,l,m;
    cin>>n>>q;   
    vector <int> a[n];
    for(int i=0;i<n;i++)
    {
        vector<int> b;
        cin>>k;
        for(int j=0;j<k;j++)
        {
            cin>>value;
            b.push_back(value);
        }
        a[i]= b;
    } 
    for(int i = 0;i<q;i++)
    {
        cin>>l>>m;
        cout<<a[l][m]<<endl;
    }
    return 0;
}
