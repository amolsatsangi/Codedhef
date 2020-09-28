/**********
Fit Squares in Triangle Problem Code: TRISQ
What is the maximum number of squares of size 2x2 that can be fit in a right angled isosceles triangle of base B.
One side of the square must be parallel to the base of the isosceles triangle.
Base is the shortest side of the triangle
Input
First line contains T, the number of test cases.
Each of the following T lines contains 1 integer B.
Output
Output exactly T lines, each line containing the required answer.
Constraints
1 ≤ T ≤ 103
1 ≤ B ≤ 104
Sample Input

11
1
2
3
4
5
6
7
8
9
10
11
Sample Output 

0
0
0
1
1
3
3
6
6
10
10

*****************/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
    int b,i,no=0;
    scanf("%d",&b);
    if(b%2!=0)
    b--;
    for(i=2;i<=b;i=i+2)
    {
        no=no+(i/2)-1;
    }
    printf("%d\n",no);
    }
    return 0;
}

