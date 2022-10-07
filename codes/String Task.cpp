#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i; string s, ns;
    cin>>s;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y' || s[i]=='y' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            continue;
        else
        {
            s[i]=tolower(s[i]);
            ns += '.';
            ns += s[i];
        }
    }
    cout<<ns<<endl;
    return 0;
}
