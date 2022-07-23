#include<iostream>
#include<string.h>
using namespace std;

int main(){

    int n, i, c=0;
    char st[20];
    cin>>n>>st;
    for(i=0; i<n; i++)
    {
        if(st[i]==st[i+1])
            {
                c++;
            }
    }
    cout<<c;

}
