#include<bits/stdc++.h>
using namespace std;

int main(){

string players;
cin>>players;
int bra=0, arg=0;
for(int i=0;i!=players.length();i++)
{
    if (players[i]=='1')
    {
         if(bra>=7)
        {
            break;
        }
         if(players[i-1]=='0')
        {
            bra=0;
        }
        bra++;
    }

    if (players[i]=='0')
    {
        if(arg>=7)
        {
            break;
        }
         if(players[i-1]=='1')
        {
            arg=0;
        }
        arg++;
    }
}

if (bra>=7 || arg>=7)
{
    cout<<"YES"<<endl;
}

else{
    cout<<"NO"<<endl;
}


}
