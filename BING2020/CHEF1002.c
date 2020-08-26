/*********
Chef and Missing Numbers 
Chef had two lists of ingredients that were permutations of one another. He was very proud. Unfortunately, while going from work , some numbers were lost out of the first list. Can you find the missing numbers?

Notes:
If a number occurs multiple times in the lists, you must ensure that the frequency of that number in both lists is the same. If that is not the case, then it is also a missing number.
You have to print all the missing numbers in ascending order.
Input:
There will be four lines of input:

N the size of the first list,
The next line contains space-separated integers arr[i]
M the size of the second list,
The next line contains space-separated integers brr[i]
Output:
Output the missing numbers in ascending order.

Constraints
1≤n,m≤2X105
n≤m
1≤brr[i] ≤104
Sample Input:
   10
   203 204 205 206 207 208 203 204 205 206
   13
   203 204 204 205 206 207 205 208 203 206 205 206 204
Sample Output:
  204 205 206
  
*************/  
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i=0,j=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    int b[m],temp=0,max;
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<m-1;i++)
    {
        for(j=0;j<m-i-1;j++)
        {
            if(b[j]>b[j+1])
            {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    if(n>m)
    max=m;
    else
    max=n;
    j=0;
    for(i=0;i<max;i++)
    {
        if(a[i]!=b[j])
        {
            printf("%d ",b[j]);
            i--;
        }
        j++;
    }
    return 0;
}
