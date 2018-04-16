#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<deque>
#include<cmath>
#include<vector>
#include<queue>
#include<sstream>



using namespace std;

deque<long long>primes;
bool is_prime(long long n)
{
    for(int i=0;primes[i]<=sqrt(n);++i)
        if(n%primes[i]==0)
            return false;
    return true;
}

bool exist(long long n, deque<long long> nv)
{
    for(int i=0;i<nv.size();++i)
        if(nv[i]==n)
            return true;
    return false;
}

int main()
{
    long long a=0,b=0;
    while(cin>>a>>b)
    {
        primes.push_back(2);

        for(int i=3;i<=b;i+=2)
            if(is_prime(i))
                primes.push_back(i);

        while(primes[0]<a)
            primes.pop_front();

        vector<int>coupled;

        for(int i=0;i<primes.size();++i)
        {
            if(exist(primes[i]+4,primes))
            {
                coupled.push_back(primes[i]);
            }
        }

        if(coupled.empty())
            cout<<"共"<<0<<"組"<<endl;
        else{
        for(int i=0;i<coupled.size()-1;++i)
            cout<<'('<<coupled[i]<<','<<coupled[i]+4<<')'<<',';
        cout<<'('<<coupled[coupled.size()-1]<<','<<coupled[coupled.size()-1]+4<<')'<<endl;
        cout<<"共"<<coupled.size()<<"組"<<endl;}

        primes.clear();
        coupled.clear();
    }
    return 0;
}


