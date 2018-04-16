#include<iostream>
#include<vector>
#include<sstream>
#include<string>

using namespace std;

bool is_palin(string s)
{
    if(s.size()%2==1)
        return false;
    else if(s.empty())
        return true;
    else if ((s[0]=='('&&s[s.size()-1]==')')||
             (s[0]==')'&&s[s.size()-1]=='(')||
             (s[0]=='['&&s[s.size()-1]==']')||
             (s[0]==']'&&s[s.size()-1]=='['))
        {
            s.erase(s.begin());
            s.erase(s.end()-1);
            return (is_palin(s));
        }
    else
        return false;

}
int main()
{
    string s=" ";
    while(cin>>s)
    {
        if(is_palin(s))
            cout<<"Correct"<<endl;
        else
            cout<<"Error"<<endl;
    }
    return 0;
}
