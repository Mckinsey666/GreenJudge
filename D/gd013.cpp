#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool valid(string& first, string& second)
{
    return(first[14]==second[0] && first[15] == second[1]);
}

//need a bool array to store used elements
void shiritori (vector<string> idioms, vector<string>& sequence, vector<bool> used,int start, int& ct)
//function pass by reference --> notes? &ct return ++ct, ct+1-->there is a difference!
{
    if(start == idioms.size())
        return;

    for(int i=0;i<idioms.size();++i)
    {
        if(sequence.size() == 0)
        {
            sequence.push_back(idioms[i]);
            used[i] = true;
            shiritori(idioms, sequence, used, ++start, ++ct);
            used[i] = false;
        }
        else
        {
            if(valid(sequence[sequence.size()-1],idioms[i]))
            {
                sequence.push_back(idioms[i]);
                used[i] = true;
                shiritori(idioms, sequence, used, ++start, ++ct);
                used[i] = false;
            }
        }
        --start;
        --ct;
        sequence.pop_back();
    }
}
int main()
{
    int n;
    cin>>n;

    vector <string> idiom;
    vector <bool> used;

    string s;

    for(int i = 0 ; i < n ; ++i)
    {
        cin>>s;
        idiom.push_back(s);
        used.push_back(false);
    }
    vector<string> sequence;
    int ct;
    shiritori(idiom,sequence,used,0,ct);

    for(int i=0;i<sequence.size();++i)
        cout<<sequence[i]<<endl;
    cout<<ct<<endl;



    return 0;
}
