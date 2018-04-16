#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<deque>
#include<cmath>
#include<vector>
#include<queue>
#include<sstream>

//Largest palindrome substring

using namespace std;

bool is_palin(string s)//define palindrome
{
    if(s.empty())
        return true;
    else if(s.size()==1)
        return true;
    else if(s[0]==s[s.size()-1])
    {
        s.erase(s.begin());
        s.erase(s.end()-1);
        return is_palin(s);
    }
    else
        return false;
}

bool newsub (string s,vector<string> sv)//check if substring exists already
{
    for(int i=0;i<sv.size();++i)
        if(sv[i]==s)
            return false;
    return true;
}

int main()
{
    int n=0;
    while(cin>>n)
    {
        string s=" ";
        for(int i=1;i<=n;++i)
        {
            cin>>s;
            vector<string>palinsubs;
            int longest=0;

            int ct=0;
            for(int k=0;k<s.size();++k)
                for(int j=s.size()-k;j>0;--j)
                {
                    string sub=s.substr(k,j);
                    if(is_palin(sub)&&newsub(sub,palinsubs))
                    {
                        if(sub.size()>longest)//replace longer sub-palindrome-string
                            {   palinsubs.clear();
                                longest=sub.size();
                                palinsubs.push_back(sub);}
                        else if(sub.size()==longest)
                            palinsubs.push_back(sub);
                    }

                }
            cout<<"第"<<i<<"組測試資料的最長迴文子字串長度為:"<<longest<<endl;
            cout<<"第"<<i<<"組測試資料的最長迴文子字串內容為:";
            for(int j=0;j<palinsubs.size();++j)
                cout<<palinsubs[j]<<" ";
            cout<<'\n'<<'\n';
        }
    }
    return 0;
}
