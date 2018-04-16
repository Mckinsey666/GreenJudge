#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<deque>
#include<cmath>
#include<vector>
#include<queue>

using namespace std;

int num[1000]={};
int check[1000]={};

int permutation(int n,int m,int k)//Do I have to return int??? Some compilers can't stand void??
{

    if(n==0)
    {
        for(int i=m;i>=1;--i)
            cout<<num[i];
        cout<<endl;
        return 0;
    }

    for(int i=1;i<=k;++i)
    {
        if(check[i]!=1)
            {num[n]=i;
            check[i]=1;
            permutation(n-1,m,k);
            check[i]=0;}//Important
    }
}
int main(void)
{
    int n=0;
    while(cin>>n)
        permutation(n,n,n);
    return 0;
}
