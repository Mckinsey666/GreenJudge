#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
    long n=0;
    while(cin>>n)
    {
        long temp=n;
        cout<<temp<<" = ";

        while(n%2==0)
        {
            if(n/2==1)
                cout<<2;
            else
                cout<<2<<" * ";
            n/=2;
        }

        long p=3;//don't need to make prime list! increment 2 every loop is sufficient.(e.g. 9 won't be factored out(3 factored!))
        for(long p=3;p<=sqrt(temp);p+=2)//Note: Upper bound is sqrt(n). The remainder must be a prime it self!(if there are two factors
                                        //>=sqrt(n), we get n>n which is contradictory.
        {
            while(n%p==0)
            {
                if(n/p==1)
                    cout<<p;
                else
                    cout<<p<<" * ";
                n/=p;
            }
        }

        if(n>2)
            cout<<n;//The remaining must be prime.
        cout<<endl;
    }
    return 0;
}
