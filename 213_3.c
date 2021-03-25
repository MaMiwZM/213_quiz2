#include<stdio.h>
int main()
{
    int i,j=0,k,tmp=0,re=0,n;
    scanf("%d",&n);
    if(n!=0)
    {
        for(i=1; i<=n; i++)
        {
            tmp=i%10;
            if(i>9&&i<100)
            {
                re=i/10;
                if(tmp==re)
                {
                    j++;
                }
            }
            else if(i<10)
            {
                j++;
            }
            else if(i>100&&i<1000)
            {
                re=i/100;
                if(tmp==re)
                {
                    j++;
                }
            }
            else if(i>1000&&i<10000)
            {
                re=i/1000;
                if(tmp==re)
                {
                    j++;
                }
            }
            else if(i>10000&&i<100000)
            {
                re=i/10000;
                if(tmp==re)
                {
                    j++;
                }
            }
             else if(i>100000&&i<1000000)
            {
                re=i/100000;
                if(tmp==re)
                {
                    j++;
                }
            }
        }
        printf("%d",j);
    }
    return 0 ;
}
