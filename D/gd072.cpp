#include<iostream>
#include<map>
#include<utility>

using namespace std;

typedef map <string, int> animal_count;
typedef string location;

//Implementation of map

int main()
{
    int n;
    while(cin>>n)
    {
        map <location, animal_count> zoo;

        for(int i=0;i<n;++i)
        {
            string animal, place;
            int number;
            cin>>animal>>number>>place;
            if(!zoo.count(place))
                {
                    animal_count new_animal;
                    new_animal[animal]=number;
                    zoo[place]=new_animal;
                }
            else
            {
                if(!zoo[place].count(animal))
                    zoo[place][animal]=number;
                else
                    zoo[place][animal]+=number;
            }
        }

        map <location, animal_count>::iterator it;
        for(it=zoo.begin();it!=zoo.end();++it)
        {
            cout<<it->first<<" : ";
            animal_count::iterator p;
            for(p=(it->second).begin();p!=(it->second).end();++p)
            {
                cout<<p->first<<' '<<p->second<<"   ";
            }
            cout<<endl;
        }
    }
    return 0;
}
