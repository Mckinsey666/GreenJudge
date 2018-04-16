#include<iostream>
#include<vector>

using namespace std;

class coor
{
public:
    coor(int a,int b){x=a;y=b;};
    coor();
    int x,y;
};

int dis(coor a, coor b)
{
    return (a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);
}

int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0;i<n;++i)
        {
            int x1,x2,y1,y2;
            cin>>x1>>y1>>x2>>y2;
            coor first(x1,y1), second(x2,y2);

            int k;
            cin>>k;
            vector<coor> missles;
            for(int i=0;i<k;++i)
            {
                cin>>x1>>y1;
                coor missle(x1,y1);
                missles.push_back(missle);
            }

            int smallest=1000;
            for(int i=0;i<k;++i)
            {
                bool covered[10];
                for(int i=0;i<k;++i)
                    covered[i]=false;

                int radius=dis(first,missles[i]);
                for(int j=0;j<k;++j)
                {
                    if(dis(first,missles[j])<=radius)
                        covered[j]=true;
                }
                int largest=0;
                for(int j=0;j<k;++j)
                {
                    if(!covered[j] && dis(second,missles[j])>largest)
                        largest=dis(second,missles[j]);
                }
                if(largest+radius<smallest)
                    smallest=radius+largest;
            }
            cout<<smallest<<endl;
        }

    }
    return 0;
}
