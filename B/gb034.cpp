#include<iostream>

using namespace std;
int main()
{
    int c[9]={10000, 5000, 1000, 500, 100, 50, 10, 5, 1};
    int n=0;

    while(cin>>n)
    {
    int ct=0;
    for(int i=0;i<9;++i)
        while(n>=c[i])
            {
                n-=c[i];
                ++ct;
            }
    cout<<ct<<endl;
    }
    return 0;
}
