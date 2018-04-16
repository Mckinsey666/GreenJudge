#include<iostream>
#include<vector>
#include<sstream>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

//Fixed output

class coor{
public:
    double x,y;
    coor(){x=0;y=0;};
    coor(double a,double b){x=a;y=b;};
};

double sqr(double n)
{
    return n*n;
}

coor comb[3];
bool used[10];
coor houses[10];

void backtrack (int n, int homes, int &a)
{
    if(n==3)
    {
        double del=2*(comb[0].x-comb[1].x)*(comb[2].y-comb[1].y);
        double delx=(comb[2].y-comb[1].y)*(sqr(comb[0].x)+sqr(comb[0].y)-sqr(comb[1].x)-sqr(comb[1].y))-
                    (comb[0].y-comb[1].y)*(sqr(comb[2].x)+sqr(comb[2].y)-sqr(comb[1].x)-sqr(comb[1].y));
        double dely=(comb[0].y-comb[1].y)*(sqr(comb[2].x)+sqr(comb[2].y)-sqr(comb[1].x)-sqr(comb[1].y))-
                    (comb[2].y-comb[1].y)*(sqr(comb[0].x)+sqr(comb[0].y)-sqr(comb[1].x)-sqr(comb[1].y));

        double x=delx/del,y=dely/del;//center of circle

        double r=sqrt(sqr(comb[0].x-x)+sqr(comb[0].y-y));//square of the radius of circle

        int ct=0;

        for(int i=0;i<homes;++i)
            if((sqr(houses[i].x-x)+sqr(houses[i].y-y))<=(sqr(comb[0].x-x)+sqr(comb[0].y-y)))
                ++ct;
        cout<<ct<<endl;
        a+=ct;
        return;
    }

    for(int i=0;i<homes;++i)
    {
        if(!used[i])
        {

            comb[n]=houses[i];

            used[i]=true;
            backtrack(n+1,homes,a);
            used[i]=false;

        }
    }
    return;
}


int main()
{
    double n=0;
    while(cin>>n)
    {
        int sum=0;
        for(int i=0;i<n;++i)
            {
                double a=0,b=0;
                cin>>a>>b;
                coor home(a,b);
                houses[i]=home;
            }

        backtrack(0,n,sum);

        cout<<(double)sum/n<<endl;
    }
    return 0;
}
