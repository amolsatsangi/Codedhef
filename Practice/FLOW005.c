/*************
Smallest Numbers of Notes
Consider a currency system in which there are notes of six denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
If the sum of Rs. N is input, write a program to computer smallest number of notes that will combine to give Rs. N.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the smallest number of notes that will combine to give N, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Example
Input
3 
1200
500
242

Output
12
5
7

**********/
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int r;
        long int n=0;
        int temp;
        scanf("%ld",&r);
        while(r!=0)
        {
            if(r/100!=0)
            {
                temp=r/100;
                r=r-temp*100;
                n=n+temp;
            }
            else if(r/50!=0)
            {
                temp=r/50;
                r=r-temp*50;
                n=n+temp;
            }
            else if(r/10!=0)
            {
                temp=r/10;
                r=r-temp*10;
                n=n+temp;
            }
            else if(r/5!=0)
            {
                temp=r/5;
                r=r-temp*5;
                n=n+temp;
            }
            else if(r/2!=0)
            {
                temp=r/2;
                r=r-temp*2;
                n=n+temp;
            }
            else
            {
                temp=r/1;
                r=r-temp*1;
                n=n+temp;
            }
        }
        printf("%ld\n",n);
    }
    return 0;
}
