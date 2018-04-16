#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>

using namespace std;

bool comp(int a, int b)
{
    return a>b;
}
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i = 0 ; i < n ; ++i)
        {
            int tails;
            cin >> tails;

            int min_weight, max_tail;

            cin >> min_weight >> max_tail;

            vector<int>fishes;

            for(int i = 0 ; i < tails ; ++i)
            {
                string fish;
                cin >> fish;
                if(isdigit(fish[0]))
                {
                    stringstream temp(fish);
                    int weight;
                    temp >> weight;
                    fishes.push_back(weight);
                }
            }

            sort(fishes.begin(),fishes.end(),comp);

            while(fishes[fishes.size()-1]<min_weight)
                fishes.pop_back();

            long int max_fish=0;
            int a = fishes.size();
            int total=min(a,max_tail);
            for(int i=0;i<total;++i)
                max_fish += fishes[i];
            cout<<max_fish<<endl;

        }
    }
    return 0;
}
