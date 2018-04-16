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

vector<int>primes;

bool is_prime (int n)
{
    for(int i=0;primes[i]<=sqrt(n);++i)
        if(n%primes[i]==0)
            return false;
    return true;
}

bool is_palin(string s)
{
    if(s.size()==1)
        return true;
    else if(s.empty())
        return true;
    else if(s.front()==s.back())
        {s.erase(s.begin());
        s.erase(s.end()-1);
        return (is_palin(s));}

    return false;
}

int main(void)
{
    int n=0;
    while(cin>>n)
    {
        primes.push_back(2);
        for(int i=3;i<=n;i+=2)
            if(is_prime(i))
                primes.push_back(i);

        for(int i=0;i<primes.size();++i)
        {
            stringstream ss;
            string s=" ";
            ss<<primes[i];
            ss>>s;

            if(is_palin(s))
                cout<<s<<" ";
        }
        cout<<endl;
        primes.clear();
    }
    return 0;
}
