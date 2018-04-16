#include<iostream>

using namespace std;

const int len =34;
int mid = len/2;
char grid[len][len] = {};

void create_grid(char arr[len][len],char n)
{
    if(n=='1')
        arr[mid][mid]='1';
    else
    {
        create_grid(arr, char(n-1));

        int l = 2*((n-'0')-2);
        for(int i=mid-l-1;i<=mid+l+1;++i)
        {
            arr[i][mid-l-1]='_';
            arr[i][mid+l+1]='_';
        }

        for(int i=mid-l;i<=mid+l;++i)
        {
            arr[mid-l-1][i]='_';
            arr[mid+l+1][i]='_';
        }

        for(int i=mid-l-2;i<=mid+l+2;++i)
        {
            arr[i][mid-l-2]=n;
            arr[i][mid+l+2]=n;
        }

        for(int i=mid-l-1;i<=mid+l+1;++i)
        {
            arr[mid-l-2][i]=n;
            arr[mid+l+2][i]=n;
        }

    }
}

void print_grid(char arr[len][len], char n)
{
    if(n=='1')
        cout<<arr[mid][mid]<<endl;
    else
    {
        int l = 2*((n-'0')-2);
        for(int i=mid-l-2;i<=mid+l+2;++i)
            {for(int j=mid-l-2;j<=mid+l+2;++j)
                cout<<arr[i][j];
            cout<<endl;}
    }
}

int main()
{
    char n;
    while(cin>>n)
    {
        create_grid(grid,n);
        print_grid(grid,n);
    }
    return 0;
}
