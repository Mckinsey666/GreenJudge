#include<iostream>
#include<string>
#include<vector>
#include<cstdio>

using namespace std;

int main()
{
    char a[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    string s=" ";
    while(getline(cin,s))
        for(int i=0;i<s.size();++i)
            cout<<a[(s[i]-'A'+24)%26];
        cout<<endl;
    return 0;
}
