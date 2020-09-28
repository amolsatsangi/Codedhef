/*************
Sums in a Triangle Problem Code: SUMTRIAN

Let's consider a triangle of numbers in which a number appears in the first line, two numbers appear in the second line, three in the third line, etc. Develop a program which will compute the largest of the sums of numbers that appear on the paths starting from the top towards the base, so that:

on each path the next number is located on the row below, more precisely either directly below or below and one place to the right;
the number of rows is strictly positive, but less than 100
all numbers are positive integers between 0 and 99.
Input
In the first line integer n - the number of test cases (equal to about 1000). Then n test cases follow. Each test case starts with the number of lines which is followed by their content.

Output
For each test case write the determined value in a separate line.

Example
Input:
2
3
1
2 1
1 2 3
4 
1 
1 2 
4 1 2
2 3 1 1 

Output:
5
9

*************/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int r;
        scanf("%d",&r);
        int i,e=0;
        for(i=1;i<=r;i++)
        {
            e=e+i;
        }
        int a[e];
        for(i=0;i<e;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=e-r-1;i>=0;i--)
        {
            if(a[i+r-1]>a[i+r])
            {
                a[i]=a[i]+a[i+r-1];
            }
            else
            {
                a[i]=a[i]+a[i+r];
            }
            if(i<e-2*r+2)
            {
                e=e-r;
                r--;
            }
        }
        printf("%d\n",a[0]);
    }
    return 0;
}
