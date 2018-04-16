#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<deque>
#include<cmath>
#include<vector>
#include<queue>

using namespace std;

int num[1000]={};//Why can't I use vector?????

int tuples(int n,int k,int m)//k is used to make a copy of the original n(since n decrements after every call)
{
    if(n==0)
    {
        for(int i=k;i>0;--i)
            cout<<num[i];//Some compiler said vector not declared in this scope?
        cout<<endl;
        return 0;
    }
    for(int i=1;i<=m;++i)
        {num[n]=i;
        tuples(n-1,k,m);}
}

int main()
{
    int n=0,m=0;
    while(cin>>n>>m)
        tuples(n,n,m);
    return 0;
}

