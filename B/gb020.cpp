#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int n=0;
    while(cin>>n)
    {
        vector < vector<int> > scores;

        for(int i=0;i<n;++i)
        {
            vector<int> student;

            int score=0;
            int num=0;

            cin>>num;
            student.push_back(num);

            for(int j=1;j<=5;++j)
                {cin>>score;
                student.push_back(score);}

            int sum=0;
            for(int j=1;j<=5;++j)
                sum+=student[j];

            student.push_back(sum);

            scores.push_back(student);
        }
        for(int i=0;i<n-1;++i)
            for(int j=0;j<n-1;++j)
                 if((scores[j][6]>scores[j+1][6])||(scores[j][6]==scores[j+1][6])&&(scores[j][3]>scores[j+1][3]))
                        swap(scores[j],scores[j+1]);
        for(int i=n-1;i>=0;--i)
            cout<<scores[i][0]<<endl;
    }
    return 0;
}
