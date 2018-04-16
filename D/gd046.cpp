#include<iostream>
#include<vector>

using namespace std;

long long power (int n, int p)
{
    long long val=1;
    for(int i=0;i<p;++i)
        val*=n;
    return val;
}

bool p_root(int g,int p)
{
    vector<int>rem(p,0);
    for(int x=0;x<p;++x)
        ++rem[power(g,x)%p];

    int ct=0;
    for(int i=0;i<p;++i)
        if(rem[i]!=0)
            ++ct;

    if(ct==p-1)
        return true;
    else
        return false;

}
int main()
{
    int p=0;
    while(cin>>p)
    {
        int ct=0;

        for(int g=1;g<p-1;++g)
            if(p_root(g,p))
                {   cout<<g<<" ";
                    ++ct;       }

        cout<<endl;
        cout<<ct<<endl;
    }
    return 0;
}
