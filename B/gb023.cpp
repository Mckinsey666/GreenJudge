#include<iostream>

using namespace std;

void steps (int n, int a, int b, int c)
{
    if(n==1)
        cout<<"Ring 1 from "<<a<<" to "<<c<<endl;
    else
    {
        steps(n-1,a,c,b);
        cout<<"Ring "<<n<<" from "<<a<<" to "<<c<<endl;
        steps(n-1,b,a,c);
    }
}
int main()
{
    int n=0;
    while(cin>>n)
        steps(n,1,2,3);
    return 0;
}
