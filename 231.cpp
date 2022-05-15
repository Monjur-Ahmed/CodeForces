#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

int matrix[n][3];

for (int i=0;i<n;i++){
    for (int j=0;j<3;j++){
        cin>>matrix[i][j];
    }
}

int count=0, p=0;

for (int i=0;i<n;i++){
    for (int j=0;j<3;j++){
        if (matrix[i][j]==1)
        {
            p++;
        }
        if (p>=2)
        {
         count++;
         break;
        }
    }
    p=0;
}

cout<<count;

}
