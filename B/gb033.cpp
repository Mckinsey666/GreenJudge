#include<iostream>
#include<string>
#include<sstream>
#include<set>
#include<vector>
#include<cctype>
#include<iomanip>
#include<algorithm>
#include<map>

using namespace std;
//LCS-->Dynamic Programming
//The method of dynamic programming is to prevent recursive calls to previously calculated data
//Excessive and unnecessary work will be done in the recursion process, and it is better if we
//store previous data in an array.

int main()
{
    string s1,s2;
    while(cin>>s1>>s2)
    {
        char a[101]={};
        char b[101]={};

        for(int i=0;i<s1.size();++i)
        {
            a[i+1]=s1[i];
        }
        for(int i=0;i<s2.size();++i)
        {
            b[i+1]=s2[i];
        }

        int trace[101][101]={};
        for(int i=0;i<=s1.size();++i)
            for(int j=0;j<=s2.size();++j)
                trace[i][j]=0;

        for(int i=1;i<=s1.size();++i)
            for(int j=1;j<=s2.size();++j)
        {
            if(a[i]==b[j])
                trace[i][j]=1+trace[i-1][j-1];
            else
                trace[i][j]=max(trace[i-1][j],trace[i][j-1]);
        }
        cout<<trace[s1.size()][s2.size()]<<endl;
    }
    return 0;
}

