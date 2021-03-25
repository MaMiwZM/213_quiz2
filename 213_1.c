#include<stdio.h>
int main()
{
    int j=2,n,k,z=1,x=0,c=0;
    unsigned int i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if((j*j*j)==i)
        {
            z--;
            j++;
        }
            z++;
    }
    if(i!=j*j*j)
    {
         printf("%d",z);
    }

    else
    {
        printf("Not Cube Free");
    }
    return 0;
}
