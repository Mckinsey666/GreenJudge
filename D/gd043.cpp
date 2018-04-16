#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<sstream>
#include<algorithm>
#include<cctype>

using namespace std;

//Implementation of map
struct numbers
{
    string display;
    int value;

};

bool comp(numbers a,numbers b)
{
    return a.value<b.value;
}
int main()
{
    string s;
    vector <numbers> n;
    map <string, int> chi_num;
    chi_num["�s"]=0;
    chi_num["�@"]=1;
    chi_num["�G"]=2;
    chi_num["�T"]=3;
    chi_num["�|"]=4;
    chi_num["��"]=5;
    chi_num["��"]=6;
    chi_num["�C"]=7;
    chi_num["�K"]=8;
    chi_num["�E"]=9;
    while(cin>>s)
    {
        if(isdigit(s[0]))
        {
            stringstream ss(s);
            int temp;
            ss>>temp;
            numbers n1={s,temp};
            n.push_back(n1);
        }
        else
        {
            int temp=chi_num[s.substr(0,3)];

            if(s.size()>=6)
            {
                for(int i=1;i<=((s.size()/3)-1);++i)
                {
                    temp = 10*temp + chi_num[s.substr(3*i,3)];
                }
            }
            numbers n1={s,temp};
            n.push_back(n1);
        }
        sort(n.begin(),n.end(),comp);
    }
    for(int i=0;i<n.size();++i)
        cout<<n[i].display<<endl;
    return 0;
}
