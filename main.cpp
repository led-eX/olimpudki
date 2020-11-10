#include <iostream>
#include <cmath>
#define j q
using namespace std;

int main ()
{
    long long n,a,b,c=1;
    cin>>n;
    int q[n];
    cin>>a;
    a=abs(a)*(-1);
    q[0]=a;
    for (int i=1; i<n; i++)
    {
    cin>>b;
    b=abs(b)*(-1);
    q[i]=b;
    }


    for (int i=1; i<n; i++)
    {
    if (c==1){
    while (j[i]>=j[i-1]){i++;}}
    c=0;
    j[i]*=(-1);
    if (i>n)break;
    if (j[i]<j[i-1]){c-=2; break;}
    }


    if (c==-2)
    cout<<"No";
    else {
    cout<<"Yes"<<endl;
    for (int i=0; i<n; i++)cout<<q[i]<<" ";
    }
    return 0;
}
