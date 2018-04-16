#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<deque>
#include<cmath>

int GCD(int m,int n)
{
    if(n==0)
        return m;
    else
        GCD(n,m%n);
}

using namespace std;

int main()
{
    int a1=0,b1=0,a2=0,b2=0;
    while(cin>>a1>>a2>>b1>>b2)
    {
        int n=a1*b2+a2*b1;
        int d=a2*b2;

        if(n%d==0)
            cout<<n/d<<endl;
        else
            cout<<n/d<<'+'<<(n%d)/GCD(n%d,d)<<'/'<<d/GCD(n%d,d)<<endl;
    }
    return 0;
}
