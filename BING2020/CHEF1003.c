/*********
CHEF and LOSS
Chef has a chart of prices for a restaurant over the next several years. He must buy the restaurant in one year and sell it in another, and he must do so at a loss. He wants to minimize financial loss with your help.

Input:
The first line contains an integer n, the number of years of house data.
The second line contains n space-separated long integers describing each Price[i] .
Output:
Print a single integer denoting the minimum amount of money Chef must lose if he buys and resells the house within the next years.

Constraints
2≤n≤2X105
1≤Price[i]≤1016
Sample Input:
3
5 10 3
Sample Output:
2
EXPLANATION:
Chef buys the restaurant in year 1 at price[0]=5 and sells it in year 3 at price[2]=3 for a minimal loss of 5−3=2. Hence the answer is 2.


*************/  
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int a[n];
    int i=0,j=0;
    long long int diff=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    if(a[1]>a[0])
    diff=a[1]-a[0];
    else 
    diff=a[0]-a[1];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if((a[i]-a[j])<diff&&(a[j]<=a[i]))
           {
               diff=a[i]-a[j];
           }
        }
    }
    printf("%lld\n",diff);
    return 0;
}
