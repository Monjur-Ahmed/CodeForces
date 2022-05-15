#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count;
    string name;
    cin>>name;
    sort(name.begin(),name.end());
    for(int i=0;i!=name.length();i++)
    {
        if (name[i]!=name[i+1])
        {
          count++;
        }
    }
   //int ans = name.length()-count;
   if (count%2==0)
   {
      cout<<"IGNORE HIM!"<<endl;
   }
   else{
          cout<<"CHAT WITH HER!"<<endl;

   }
}
