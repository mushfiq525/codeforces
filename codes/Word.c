#include<stdio.h>
#include<string.h>

void upper(char a[100])
{
    for(int i=0; a[i]!='\0'; i++)
    {
        if(a[i]>=97 && a[i]<=122)
            a[i]-=32;
    }
}
void lower(char a[100])
{
    for(int i=0; a[i]!='\0'; i++)
    {
        if(a[i]>=65 && a[i]<=90)
            a[i]+=32;
    }
}

int main(){

    char s[100]; int i,u=0, l=0;
    gets(s);
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]>=97)
            l++;
        else
            u++;
    }
    if(u>l)
        upper(s);
    else
        lower(s);
    printf("%s\n",s);

    return 0;
}

