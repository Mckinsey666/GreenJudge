#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
    int ct=0;
    string name=" ";
    while(cin>>ct)
    {
        vector<string>names;
        for(int i=0;i<ct;++i)
            {cin>>name;
            names.push_back(name);}
        sort(names.begin(),names.end());
        for(int i=0;i<=ct;++i)
            cout<<names[i]<<endl;
    }
    return 0;
}
