#include <iostream>
#include <cctype>
#include <string>
#include<cstdio>

using namespace std;

int main ()
{
    string s=" ";

    while(getline(cin,s))
    {
        char alpha[26]={};
        int check[26]={};
        alpha[0]='A';
        for(int i=1;i<26;++i)
            alpha[i]='A'+i;

        for(int i=0;i<s.size();++i)
        {
            if(isalpha(s[i]))
            s[i]=toupper(s[i]);
            ++check[s[i]-'A'];
        }

        for(int i=0;i<26;++i)
            cout<<alpha[i]<<" ";
        cout<<endl;
        for(int i=0;i<26;++i)
            cout<<check[i]<<" ";
        cout<<endl;
    }
  return 0;
}
