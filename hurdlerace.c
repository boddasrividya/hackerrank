#include<stdio.h>
int main()
{
    int n,k,i,j,height[1000],jump=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&height[i]);
    for(i=0;i<n;i++)
       if(height[i]>k)
           jump++;
    printf("%d",jump);
}
