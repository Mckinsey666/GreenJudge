#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<deque>
#include<cmath>
#include<vector>
#include<queue>


using namespace std;

int main()
{
    int n=0;
    while(cin>>n)
    {
        int st=0;
        string name=" ";
        vector<string>people;
        vector<int>status;

        for(int i=0;i<n;++i)
        {
            cin>>name>>st;
            people.push_back(name);
            status.push_back(st);
        }

        int friends=0;
        int others=0;
        int user=0;

        for(int i=0;i<n;++i)
        {
            if(status[i]==1)
                ++friends;
            else if(status[i]==0)
                ++others;
            else
                ++user;
        }
        int total=friends+user+others;

        string last=" ";
        for(int i=n-1;i>=0;--i)
        {
            if(status[i]==1)
                {last=people[i];
                break;}
        }

        if(friends==0&&user==0)
            cout<<total<<" people like this."<<endl;

        else if(friends!=0&&user==0)
        {
            if(others==0)
                cout<<last<<" like this."<<endl;
            else
                cout<<last<<" and "<<total-1<<" others like this."<<endl;
        }
        else if (friends!=0&&user!=0)
        {
            if(others==0)
                cout<<"You and "<<last<<" like this."<<endl;
            else
                cout<<"You, "<<last<<" and "<<total-2<<" others like this."<<endl;
        }
        else if(friends==0&&user!=0)
        {
            if(others==0)
                cout<<"You like this."<<endl;
            else
                cout<<"You and "<<total-1<<" others like this."<<endl;
        }
    }
    return 0;
}
