/****
Chef and Ice Cream 
Chef and his friend like to pool their money and go to the ice cream parlor. Chef never buys the same flavor as his friend does. The only other rule they have is that they spend all of their money. Given a list of prices for the flavors of ice cream, select the two that will cost all of the money they have.

Input Format:
The first line contains an integer, m, denoting the number of trips to the ice cream parlor. The next sets of lines each describe a visit. Each trip is described as follows:

  1.The integer , m,the amount of money they have pooled.
  2.The integer ,n,the number of flavors offered at the time.
  3.n,space-separated integers denoting the cost of each flavor.
Constraints
1≤T≤50
2≤M≤104
2≤N≤104
1≤cost[i] ≤104
Output Format
For each test case, print two space-separated integers denoting the indices of the two flavors purchased, in ascending order.

Sample Input:
    2
    4
    5
    1 4 5 3 2
    4
    4
    2 2 4 3
Sample Output:
   1 4
   1 2
***********/
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m;
        scanf("%d",&m);
        int n;
        scanf("%d",&n);
        int a[n],i=0,j=0,diff,x=0,y=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]<m)
            {
                diff=m-a[i];
            for(j=i+1;j<n;j++)
            {
                if(diff==a[j])
                {
                    x=i+1;
                    y=j+1;
                    break;
                }
            }
            }
        }
        printf("%d %d\n",x,y);
    }
    return 0;
}
