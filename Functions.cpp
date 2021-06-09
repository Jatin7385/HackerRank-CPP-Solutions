#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a,int b,int c,int d)
{
    int arr[] = {a,b,c,d};
    int max = a;
    for(int i=0;i<4;i++)
    {
        (max>arr[i])?  : max = arr[i];
    }
    return max;
}
int main() {
    int a, b, c, d;
    cout<<"Enter the four numbers in a single line : ";
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d\n", ans);
}
