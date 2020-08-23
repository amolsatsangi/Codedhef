#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,s,j=1;
        scanf("%d",&n);
        scanf("%d",&k);
        int a[n],i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        s=0;
        for(i=0;i<n;i++)
        {
            s=s+a[i];
            if(s>k)
            {
                j++;
                s=a[i];
            }
            if(k<a[i])
            {
                j=-1;
                break;
            }
        }
        printf("%d\n",j);
        
    }
    return 0;
}

