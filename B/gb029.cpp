#include<iostream>
using namespace std;

int coins[5]={2,5,10,20,25};
int ways[1001]={};

int com (int n)
{
    for(int i=1;(i<5)&&(n>=coins[i]);++i)
        ways[n]+=com(n-coins[i]);
    return ways[n];
}

int main()
{
    for(int i=0;i<1001;++i)
        if(i%2==0)
            ways[i]=1;
    ways[5]=1;
    int n=0;
    while(cin>>n)
        cout<<com[n]<<endl;
    return 0;
}

