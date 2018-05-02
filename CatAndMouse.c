#include<stdio.h>
#include<math.h>
int main()
{
    int q,x[100][100],y[100][100],z[100][100],i,j;
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d %d %d",x[i][j],y[i][j],z[i][j]);
        }
    }
    for(i=0;i<q;i++)
    {
        for(j=0;j<3;j++)
        {
            if(abs(x[i][j]-z[i][j])<abs(y[i][j]-z[i][j]))
                printf("cat a");
            else if(abs(x[i][j]-z[i][j])>abs(y[i][j]-z[i][j]))
                printf("cat b");
            else
                printf("mouse c");
        }
    }
    return 0;
}
