#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int a[6][6],i,j,r,c;    // a[6][6] nisi jate array index 0 er jaygay 1 theke start hoy
    for(i=1; i<6; i++)      // index starts from 1 to 6, total index number 5
    {
        for(j=1; j<6; j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                r = abs(3-i); c= abs(3-j);      // 3-i or 3-j is to calculate the moves for bringing 1 to center
            }                                   //  abs()  is used to get absolute value. |3-i|
        }
    }
    cout<<r+c<<endl;

    return 0;
}
