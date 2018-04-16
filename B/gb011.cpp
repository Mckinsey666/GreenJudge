#include<iostream>
#include<string>
#include<cmath>
#include<vector>

using namespace std;
int main()
{
    while(true)
    {
        int sum=0;
        for(int i=0;i<3;++i)
            {
                    string s=" ";
                    vector<int>num;
                    getline(cin,s);
                    int pow=1;
                    for(int j=s.size()-1;j>=0;--j)
                        if(isdigit(s[j]))
                            num.push_back(s[j]-'0');
                    for(int j=0;j<num.size();++j)
                        {sum+=num[j]*pow;
                        pow*=10;}
            }
            cout<<sum<<endl;
            }
    return 0;
}
