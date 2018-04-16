#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()

{
    int n=0;
    while(cin>>n)
    {
        vector<int>slime;
        int s=0;
        for(int i=0;i<n;++i)
            {
                cin>>s;
                slime.push_back(s);

            }

        sort(slime.begin(),slime.end());

        int health=0;

        while(slime.size()>1)
        {
            slime.push_back(slime[0]+slime[1]);
            health+=slime[slime.size()-1];
            slime.erase(slime.begin(),slime.begin()+2);
            sort(slime.begin(),slime.end());
        }
        cout<<health<<endl;//How to make the code faster??? More efficient? (is it the sort algorithm?)
    }
    return 0;
}
