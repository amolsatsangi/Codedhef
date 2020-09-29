/************
Total Expenses Problem Code: FLOW009

 
While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000.
If the quantity and price per item are input, write a program to calculate the total expenses.

Input
The first line contains an integer T, total number of test cases. Then follow T lines, each line contains integers quantity and price.

Output
For each test case, output the total expenses while purchasing items, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ quantity,price ≤ 100000
Example
Input

3 
100 120
10 20
1200 20

Output

12000.000000
200.000000
21600.000000
*************************/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int p,q;
        double ac=0,d=0;
        scanf("%d %d",&p,&q);
        ac=p*q;
        if(p>1000)
        {
           d= 0.1*ac;
            ac=ac-d;
        }
        printf("%f\n",ac);
       
        
    }
    return 0;
}
