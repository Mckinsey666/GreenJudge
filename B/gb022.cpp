#include<iostream>

using namespace std;

int fibo(int n, int &c)
{
    ++c;
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibo(n-1,c)+fibo(n-2,c);
}

int main()
{
    int n=0;
    while(cin>>n)
    {
        int ct=0;
        cout<<fibo(n,ct)<<" ";
        cout<<ct<<endl;//Why do I have to put this in different lines??? *if I put ct behind the previous line-->0
    }
    return 0;
}
