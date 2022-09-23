#include<stdio.h>
#include<string.h>
int main(){

    int n, a=0, d=0, i=0;;
    scanf("%d",&n);
    char game[n];
    scanf("%s",&game);
    for(i=0; i<n; i++)
    {
        if(game[i]=='A')
            a++;
        else if(game[i]=='D')
            d++;
    }
    if(a>d)
        printf("Anton");
    else if(a<d)
        printf("Danik");
    else
        printf("Friendship");


    return 0;
}
