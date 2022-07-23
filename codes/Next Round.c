#include<stdio.h>
int main(){

    int n,k,a[100],i,sum=0;
    scanf("%d %d",&n,&k);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]>=a[k-1] && a[i]>0)  // k-th poosition e j ase she joto score korse tar soman ba beshi score krte hbe
            sum++;                  // jehetu position bolay k array er vitor nisi tai k=5 hole array te likhte hbe
    }                               // a[k-1]....karon array er index 0 theke start hoy
    printf("%d\n",sum);

    return 0;
}
