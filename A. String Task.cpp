#include<bits/stdc++.h>
using namespace std;

int main()
{
    string sent;
    cin>>sent;

    for(int i=0;i<sent.length();i++)
    {
        if(sent[i]==('a' || 'e' || 'i' || 'o' || 'u'))
        {
            cout<<"ok"<<endl;
        }
    }
}
