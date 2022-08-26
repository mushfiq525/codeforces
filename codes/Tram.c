
#include<stdio.h>
#include<math.h>


int main(){

    int n,a,b,p=0,max=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        p=b-a+p;          // a = exit, b = enter. enter-exit = current number of passenger. if any passenger
        if(max<p)            // stays inside from a stop before, we are adding p again.
            max=p;
    }
    printf("%d\n",max);

    return 0;
}
