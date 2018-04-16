#include<iostream>

using namespace std;

long long pow(int p)
{
    if(p==0)
        return 1;
    else if(p==1)
        return 2;
    else
        return p%2==0 ? pow(p/2)*pow(p/2) : pow(p/2)*pow(p/2)*2;
}

void convert (long long p,long long q,long long n, long long &sum, string &s)
{
    long long N=p*q;

    long long x=(n*n)%(N);

    for(int i=1;i<=8;++i)
        {
         if(((x*x)%N)%2==1)
            {sum+=pow(8-i);
            s+='1';}
         else
            s+='0';
        x=(x*x)%N;
        }
}

int main()
{
    long long p=0,q=0,n=0;
    while(cin>>p>>q>>n)
        {string binary="";
        long long sum=0;
        convert(p,q,n,sum,binary);
        cout<<binary<<" = "<<hex<<uppercase<<sum<<endl;}
    return 0;
}
