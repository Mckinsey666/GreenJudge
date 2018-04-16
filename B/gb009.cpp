#include<iostream>
using namespace std;
int main()
{
    string s1,s2=" ";
    while(cin>>s1>>s2)
    {
        int test=0,j=0;
        for(int i=0;i<s1.size();++i)
        {
            while(j<s2.size())
            {
                if(s1[i]==s2[j])
                    {++test;
                    ++j;
                    break;}
                else
                    ++j;
            }
        }
        if(test==s1.size())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
