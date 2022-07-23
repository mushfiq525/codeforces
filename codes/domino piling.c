#include<stdio.h>
int main(){

    int m,n;
    scanf("%d %d",&m,&n);
    if(m>=1 && n<=16)
    {
        printf("%d\n",(m*n)/2);
    }

    return 0;
}
