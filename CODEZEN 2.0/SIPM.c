/**************
Zenny and Simple Sum Problem Code: SIPM
Recently Zenny read about Array and now she is cracking Array's questions. She told about this to his friend Zen .Zen wants to check how much Zenny know about Array .So, he has given her an array of integers of size N . Zenny′s task is to find out the sum of all distinct positive integer and distinct negative integers in the given array . As Zenny is beginner in problem solving so she is looking for your help.

Input:
First line will contain T, the number of testcases.
Each testcase contains of two lines first line contains N size of array and the second line contains N space-separated integers.
Output:
For each testcase, output in a single line containing S1 and S2 where S1 and S2 are sum of distinct positive integers and sum of distinct negative integers respectively. Sum will not be greater than 10^9 and will not be less than -10^9.

Constraints
1≤T≤100
2≤N≤106
−106≤A[i]≤106
Sample Input:
2

5

-1 1 -1 0 -2

6

4 5 3 3 -1 -2

Sample Output:
1 -3

12 -3

EXPLANATION:
Case 1:- Distinct positive integers are 1,0 and distinct negative integers are -1,-2 sum of positive integers S1 is 1+0=1 and sum of negative integers S2 is (-1+(-2))=-3. So, output is 1 -3.

Case 2:- Distinct positive integers are 4,5,3 and distinct negative integers are -1,-2 sum of positive integers S1 is 4+5+3=12 and sum of negative integers S2 is (-1+ (-2))=-3.So, output is 12 -3.
************/
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n=0,i=0,sn=0,sp=0,j=0;
        scanf("%ld",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                a[j]=0;
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                sp=sp+a[i];
            }
            else
            {
                sn=sn+a[i];
            }
        }
        printf("%ld %ld\n",sp,sn);
    }
    return 0;
}
