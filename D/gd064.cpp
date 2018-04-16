#include <iostream>
#include <cctype>
#include <string>
#include <cstdio>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

int main ()
{
    string s1=" ",s2=" ",s3=" ";
    while(cin>>s1>>s2>>s3)
    {
        vector<string>sv;
        sv.push_back(s1);sv.push_back(s2);sv.push_back(s3);

        sort(sv.begin(),sv.end());//important

        string maxs=" ";
        do{
            string comp=sv[0]+sv[1]+sv[2];
            maxs=max(comp,maxs);
        }while(next_permutation(sv.begin(),sv.end()));
        cout<<maxs<<endl;
    }
    return 0;

}
