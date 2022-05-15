#include<bits/stdc++.h>
using namespace std;

int main()
{

    string name;
    cin>>name;
    int n = name.length();

    if(n%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}
