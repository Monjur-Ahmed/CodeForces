#include<bits/stdc++.h>
using namespace std;

int main(){

long long int m,n,a,r;
cin>>m>>n>>a;
double ar=m*n;
double af=a*a;
double result = ar/af;
r= ceil(result);


if (r%2==0)
{
    cout<<r<<endl;
}
else{
    if(r==1)
    {
        cout<<r<<endl;
    }
    else{
           cout<<r+1<<endl;
    }

}

return 0;
}
