#include <iostream>
#include <cmath>
#include <vector>
#include<iomanip>

using namespace std;
class parameters
{
public:
    double x,y,v,t;
    parameters(double a,double b,double c,double d):x(a),y(b),v(c),t(d){}
    parameters();
};

int main()
{
    int r;
    cin>>r;
    int x,y,v,t;

    vector<double> LET;
    vector<parameters> car;

    for(int i=0;i<3;++i)
    {
        cin>>x>>y>>v>>t;
        parameters temp(x,y,v,t);
        car.push_back(temp);
    }

    double a = car[0].v*cos(car[0].t)-car[1].v*cos(car[1].t);
    double b =car[0].x-car[1].x;
    double c= car[0].v*sin(car[0].t)-car[1].v*sin(car[1].t);
    double d= car[0].y-car[1].y;

    double let=(-(a*b+c*d)+sqrt(r*r*(a*a+c*c)-(a*d-b*c)*(a*d-b*c)))/(a*a+c*c);
    LET.push_back(let);

    a = car[0].v*cos(car[0].t)-car[2].v*cos(car[2].t);
    b =car[0].x-car[2].x;
    c= car[0].v*sin(car[0].t)-car[2].v*sin(car[2].t);
    d= car[0].y-car[2].y;

    let=(-(a*b+c*d)+sqrt(r*r*(a*a+c*c)-(a*d-b*c)*(a*d-b*c)))/(a*a+c*c);
    LET.push_back(let);

    a = car[1].v*cos(car[1].t)-car[2].v*cos(car[2].t);
    b =car[1].x-car[2].x;
    c= car[1].v*sin(car[1].t)-car[1].v*sin(car[2].t);
    d= car[1].y-car[2].y;

    let=(-(a*b+c*d)+sqrt(r*r*(a*a+c*c)-(a*d-b*c)*(a*d-b*c)))/(a*a+c*c);
    LET.push_back(let);

    cout<<"LET (i=1, j=2) = "<<setprecision(4)<<LET[0]<<endl;
    cout<<"LET (i=1, j=3) = "<<setprecision(4)<<LET[1]<<endl;
    cout<<"LET (i=2, j=3) = "<<setprecision(4)<<LET[2]<<endl;

    return 0;
}
