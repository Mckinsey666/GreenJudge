#include<iostream>

using namespace std;

int main()
{
    string roman;
    while(cin>>roman)
    {
        int value=0;
        for(int i=0;i<roman.size()-1;++i)
        {

            switch(roman[i])
            {
            case 'I': value += 1;break;
            case 'V': value += 5;break;
            case 'X': value += 10;break;
            case 'L': value += 50;break;
            case 'C': value += 100;break;
            case 'D': value += 500;break;
            case 'M': value += 1000;break;
            }
        }
    }
}
