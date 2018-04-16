#include<iostream>
#include<cctype>
#include<string>
#include<vector>

using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        char c;
        cin>>c;
        c=tolower(c);
        for(int i=0;i<s.size();++i)
            s[i]=tolower(s[i]);

        vector<int> repeated;

        int index=s.find(c);
        s.erase(0,index+1);

        while(s.size()!=0)
        {
            index=s.find(c);

            if(index==s.npos)
                break;

            repeated.push_back(index+1);
            s.erase(0,index+1);
        }

        for(int i=0;i<repeated.size();++i)
            cout<<repeated[i]<<' ';
        cout<<endl;
    }
    return 0;
}
