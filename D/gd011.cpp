#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<deque>
#include<cmath>
#include<vector>
#include<queue>


int add(int&);

using namespace std;
int main()
{
    long long a=0,b=0;
    while(cin>>a>>b)
    {
        long long max_sum=0;
        long long check=0;
        for(long long i=a;i<=b;++i)
        {
            long long sum=0;
            long long temp=i;
            while(temp!=1)
            {
                sum+=temp;
                if(temp%2==0)
                    temp/=2;
                else
                    temp=3*temp+1;
            }
            ++sum;
            if(sum>max_sum)
                {max_sum=sum;
                check=i;}
        }
        cout<<max_sum<<" "<<check<<endl;
    }

    return 0;
}


