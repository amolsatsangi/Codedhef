\***********************
One Zero Swaps Problem Code: SWAP10HG
Add problem to Todo list
Submit (Practice)

 
Read problem statements in Hindi, Bengali, Mandarin Chinese, Russian, and Vietnamese as well.
You are given two binary strings S and P, each with length N. A binary string contains only characters '0' and '1'. For each valid i, let's denote the i-th character of S by Si.

You have to convert the string S into P using zero or more operations. In one operation, you should choose two indices i and j (1≤i<j≤N) such that Si is '1' and Sj is '0', and swap Si with Sj.

Determine if it is possible to convert S into P by performing some operations.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains a single string S.
The third line contains a single string P.
Output
For each test case, print a single line containing the string "Yes" if it is possible to convert S into P or "No" otherwise (without quotes).

Constraints
1≤T≤105
1≤N≤105
S and P contain only characters '0' and '1'
the sum of N over all test cases does not exceed 105
Subtasks
Subtask #1 (20 points):

N≤14
the sum of N over all test cases does not exceed 100
Subtask #2 (30 points): the sum of N over all test cases does not exceed 1,000
Subtask #3 (50 points): original constraints

Example Input
3
2
00
00
3
101
010
4
0110
0011
Example Output
Yes
No
Yes
Explanation
Example case 1: The strings are already equal.

Example case 2: It can be showed that it is impossible to convert S into P.

Example case 3: You can swap S2 with S4. The strings will then be equal.

All submissions for this problem are available.

******************\
#include<stdio.h>
void swap(char a[],int i,int j)
{
    int temp=0;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    { 
        int n,i=0,k=0,l=0,j=0;
        scanf("%d",&n);
        char a[n],b[n],o;
        int temp=0;
        scanf("%c",&o);
        for(i=0;i<n;i++)
        {
            scanf("%c",&a[i]);
        }
        scanf("%c",&o);
        for(i=0;i<n;i++)
        {
            scanf("%c",&b[i]);
        }
        scanf("%c",&o);
        for(i=0;i<n/2;i++)
        {
            l=0;
            if(a[i]!=b[i])
            {
                k=i;
                for(j=k+1;j<n;j++)
                {
                    if(a[j]!=b[j])
                    {
                        l=j;
                    }
                }
                if(l==0)
                {
                    l=k++;
                }
                swap(a,k,l);
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                temp=1;
                break;
            }
        }
        if(temp==1)
        {
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }
    }
    return 0;
}
