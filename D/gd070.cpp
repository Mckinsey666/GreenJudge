#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<deque>
#include<cmath>
#include<vector>
#include<queue>
#include<list>

using namespace std;

int main(void)
{
    int h=0;
    double m=0;
    char c=' ';
    while(cin>>h>>c>>m)
    {
        double angle=(h*30)%360-11*m/2;

        if(angle>180)
            angle=(double)360-angle;
        else if(angle<0)
        {
            angle+=(double)360;
            if(angle>180)
                angle=(double)360-angle;
        }
        cout<<fixed<<setprecision(2)<<angle<<endl;
    }
    return 0;
}

