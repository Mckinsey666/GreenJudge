#include<iostream>
#include<vector>
//Dynamic Programming

using namespace std;
int main()
{
    int n=0;
    while(cin>>n)
    {
        vector<int> updowns;
        int change=0;
        for(int i=0;i<n;++i)
            {cin>>change;
            updowns.push_back(change);}//Input the highs and lows


        int max_profit=0;
        for(int i=0;i<n;++i)//Decides which day to enter
        {
            int profit=0;
            int sum=0;
            for(int j=i;j<n;++j)//Fixed enter date, find largest profit
                {sum+=updowns[j];
                if(sum>=profit)
                    profit=sum;}//Dynamic 1
            if(profit>=max_profit)
                max_profit=profit;//Dynamic 2
        }
        cout<<max_profit<<endl;
    }
    return 0;
}

