#include<iostream>
#include<vector>
#include<cmath>
#include<time.h>
#include<thread>

#define L 290

using namespace std;

//double START=0,END=0;

int main()
{

    int n=0;
    while(cin>>n)
    {
        //START=clock();

        long long a[2*L]={},b[L]={};

        a[0]=1,b[0]=2;

        for(int c=2;c<=n;++c)
        {

            long long product[2*L]={};

            for(int i=0;i<L;++i)
                for(int j=0;j<L;++j)
                    product[i+j]+=a[i]*b[j];

            for(int i=0;i<2*L-1;++i)
            {   if(product[i]>=1000000000)
                {   product[i+1]+=(product[i]/1000000000);
                    product[i]%=1000000000;} }

            for(int i=0;i<2*L;++i)
                a[i]=product[i];

            ++b[0];

            for(int i=0;i<L-1;++i)
            {   if(b[i]>=1000000000)
                {   b[i+1]+=b[i]/1000000000;
                    b[i]%=1000000000;   }   }

        }

    int index=0;

    for(int i=2*L-1;i>=0;--i)
        if(a[i]!=0)
        {
            index=i;
            break;
        }


    cout<<a[index];

    for(int k=index-1;k>=0;--k)
    {
        if(a[k]==0)
            cout<<"000000000";
        else if(ceil(log10(a[k]))<9)
        {   for(int i=1;i<=(9-ceil(log10(a[k])));++i)
                cout<<0;
            cout<<a[k];     }
        else
            cout<<a[k];
    }

    cout<<endl;

    //END=clock();

    //cout<<"Time spent: "<<(double)(END-START)<<endl;
    }
    return 0;
}
