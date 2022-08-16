#include<iostream>
using namespace std;

int main(){
    int n,i,r,c=0;
    cin>>n;
    int temp=n;
    while(temp!=0)
    {
        r=temp%10;
        if(r==4 || r==7){c++;}
        temp=temp/10;
    }
    if(c==4 || c==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
