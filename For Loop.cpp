#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter a and b on the same line : ";
    cin>>a>>b;
    string name[] = {"one","two","three","four","five","six","seven","eight","nine","even","odd"};
    for(int i=a;i<=b;i++){
        cout<<((i>=1 && i<=9)? name[i-1] : (i%2==0)?name[9]:name[10])<<endl;
    }
    return 0;
}
