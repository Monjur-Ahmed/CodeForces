#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,x=0;
    cin>>n;
    string stmt[n];

    for(int i=0;i<n;i++)
    {
        cin>>stmt[i];
    }

    for(int i=0;i<n;i++){

        if(stmt[i][0]=='+')
        {
            ++x;
        }

        if(stmt[i][2]=='+')
        {
            x++;
        }

        if(stmt[i][0]=='-')
        {
            --x;
        }

        if(stmt[i][2]=='-')
        {
            x--;
        }


    }


    cout<<x<<endl;



}

