#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){cin>>arr[i];}
    for(int i=n-1;i>=0;i--){cout<<arr[i]<<" ";}
    cout<<endl;
    return 0;
}
