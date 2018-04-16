#include <iostream>
#include <sstream>
#include <vector>
#include <cctype>
#include <string>

using namespace std;

//String Processing

bool valid (string& test)
{
    for(int i=0;i<test.size();++i)
        if(!isdigit(test[i]))
            return false;
    return true;
}
int main()
{
    string ip;
    while(getline(cin,ip))
    {
        bool flag = true;
        vector <int> ip_number;

        while(ip.size()>0)
        {
            int dot = ip.find('.');
            if(dot != ip.npos)
            {
                string ipnum = ip.substr(0,dot);
                if(!valid(ipnum))
                {
                    flag = false;
                    break;
                }
                else
                {
                    stringstream ss(ipnum);
                    int num;
                    ss>>num;
                    ip_number.push_back(num);
                }
                    ip.erase(0,dot+1);
            }
            else
            {
                if(!valid(ip))
                    flag = false;
                else
                {
                    stringstream ss(ip);
                    int num;
                    ss>>num;
                    ip_number.push_back(num);
                }
                break;
            }
        }

        for(int i=0;i<ip_number.size();++i)
            if(ip_number[i]>255)
                flag=false;

        if(!flag || (ip_number.size() != 4))
            cout<<'N'<<endl;
        else if(ip_number[0]>=1 && ip_number[0]<=126) cout <<"A";
        else if(ip_number[0]>=128 && ip_number[0]<=191) cout <<"B";
        else if(ip_number[0]>=192 && ip_number[0]<=223) cout <<"C";
        else if(ip_number[0]>=224 && ip_number[0]<=239) cout <<"D";
        else if(ip_number[0]>=240 && ip_number[0]<=247) cout <<"E";
        else cout <<"X";
        cout << endl;
        }
    return 0;
}
