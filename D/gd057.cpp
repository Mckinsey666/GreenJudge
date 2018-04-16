#include<iostream>
#include<string>
#include<sstream>

using namespace std;

//Matching, Greedy Algorithm
int main()
{
    int student[11][11] = {};
    int professor[11][11] = {};
    bool student_matched[11] = {};
    bool professor_matched[11] = {1,1,1,1,1,1,1,1,1,1,1};

    for(int i=1;i<=10;++i)
    {
        string s;
        getline(cin,s);
        s.erase(0,s.size()-20);

        int j=1;
        while(s.size()>0)
        {
            int index = s.find(',');

            if(index == -1)
            {
                stringstream ss(s);
                ss>>student[i][10];
                break;
            }

            stringstream ss(s.substr(0,index));
            ss>>student[i][j];
            ++j;
            s.erase(0,index+1);
        }
    }

    for(int i=1;i<=10;++i)
    {
        string s;
        getline(cin,s);
        s.erase(0,s.size()-20);

        int j=1;
        while(s.size()>0)
        {
            int index = s.find(',');

            if(index == -1)
            {
                stringstream ss(s);
                int temp;
                ss>>temp;
                professor[i][temp]=j;
                break;
            }

            stringstream ss(s.substr(0,index));
            int temp;
            ss>>temp;
            professor[i][temp]=j;
            ++j;
            s.erase(0,index+1);
        }
    }

    int match [11]={};
    for(int i=1;i<=10;++i)//priority
    {
        for(int j=1;j<=10;++j)
        {

        }
    }
    return 0;

}
