#include<iostream>

using namespace std;


//Life Game

//The point of using functions is that it increases code readability and clarity.

int check (int arr[5][5],int a,int b)
{
    int check=0;

    for(int c = a-1 ; c <= a+1 ; ++c)
        for(int d = b-1 ;d <= b+1 ; ++d)
            if(c<5 && c>=0 && d<5 && d>=0 && (c!=a||d!=b))
                if(arr[c][d] == 1)
                    ++check;


    if(arr[a][b] == 1)
    {
        switch(check)
        {
        case 0: return 0;break;
        case 1: return 0;break;
        case 2: return 1;break;
        case 3: return 1;break;
        default: return 0;break;
        }
    }
    else
    {
        if(check == 3)
            return 1;
        return 0;
    }
}


int main()
{
    char c;
    int life[5][5]={};

    for(int i = 0 ; i<5 ; ++i)
    {
        cin>>life[i][0];
        for(int j = 1 ; j < 5 ; ++j)
        {
            cin>>c;
            cin>>life[i][j];
        }
    }

    cout<<endl;

    int next_life[5][5]={};

    for(int i = 2 ; i <= 5 ; ++i)
    {
        int lived = 0;

        for(int a = 0 ; a < 5 ; ++a)
            for(int b = 0 ; b < 5 ; ++b)
            {
                next_life[a][b]=check(life,a,b);
                if(next_life[a][b])
                    ++lived;
            }

        cout<<"第"<<i<<"代: "<<lived<<"個細胞存活"<<endl;

        for(int a = 0 ; a < 5 ; ++a)
            {
                for(int b = 0 ; b < 4 ; ++b)
                {
                    cout<<next_life[a][b]<<',';
                    life[a][b]=next_life[a][b];
                }
                cout<<next_life[a][4];
                life[a][4]  = next_life[a][4];

                cout<<endl;
            }
    }
    return 0;
}
