#include<iostream>
#include<string>

using namespace std;

//String Matching Algorithms
int main()
{
    int n;
    while(cin>>n)
    {
        for (int i=0;i<n;++i)
        {
            string check;
            string test;
            cin>>check>>test;

            int ct=0;

            if(check.size() > test.size()||check.size()!=3||check[0]!=check[2])
                cout<<-1<<endl;
            else
            {
                for(int i=0;i<=test.size();++i)
                    if(test.substr(i,check.size())==check)
                        ++ct;
                cout<<ct<<endl;
            }
        }
    }
    return 0;
}
