#include<stdio.h>
int main()
{
    int m,n,i,j,k,c=0;
    scanf("%d",&m);
    scanf("%d",&n);
    int a[m][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d ",a[i][j]);
        }
    }

    return 0;
    }
