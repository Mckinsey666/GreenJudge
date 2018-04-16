#include <iostream>
#include <vector>
#include "map.h"

using namespace std;

struct data
{
    string location;
    Map animals;
};

bool find_location(vector <data> v, string s, int& index)
{
    if(v.size() == 0)
        return false;

    for(int i = 0 ; i < v.size() ; ++i)
    {
        if(v[i].location == s)
        {
            index = i;
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    while(cin>>n)
    {
        vector <data> total;
        for(int i = 0 ; i < n ; ++i)
        {
            string animal,place;
            int numbers,index=0;

            cin >> animal >> numbers >> place;

            if(find_location(total, place, index))
            {
                if(total[index].animals.exists(animal))
                    total[index].animals.addValue(animal,numbers);
                else
                {
                    total[index].animals.back_push(animal);
                    total[index].animals.addValue(animal,numbers-1);
                }
            }
            else
            {
                data new_location;
                new_location.animals.back_push(animal);
                new_location.animals.addValue(animal,numbers-1);
                new_location.location = place;
                total.push_back(new_location);
            }
        }
        for(int i=0;i<total.size();++i)
        {
            cout<<total[i].location<<endl;
            total[i].animals.print_Map();
        }
    }
    return 0;
}


