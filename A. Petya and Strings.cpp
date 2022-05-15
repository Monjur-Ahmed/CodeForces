#include<bits/stdc++.h>
using namespace std;

int main(){

    string str1,str2;
    cin>>str1>>str2;

     if(str1<str2)
    {
        cout<<"-1"<<endl;
    }

    if(str1==str2)
    {
        cout<<"0"<<endl;
    }

     if(str1>str2)
    {
        cout<<"1"<<endl;
    }
   return 0;
}
