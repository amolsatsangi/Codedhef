/**************
Even Pair Sum Problem Code: EVENPSUM

 
Read problem statements in Bengali, Mandarin Chinese, and Russian as well.
You are given two positive integers A and B. Find the number of pairs of positive integers (X,Y) such that 1≤X≤A, 1≤Y≤B and X+Y is even.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two space-separated integers A and B.
Output
For each test case, print a single line containing one integer ― the number of valid pairs.

Constraints
1≤T≤1,000
1≤A,B≤109
Subtasks
Subtask #1 (10 points): A,B≤10
Subtask #2 (10 points): A,B≤1,000
Subtask #3 (80 points): original constraints

Example Input
4
1 1
2 3
4 6
8 9
Example Output
1
3
12
36

**********/
#include<stdio.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int m,n;
        scanf("%ld %ld",&m,&n);
        long long int e1,o1,e2,o2;
        e1=m/2;
        e2=n/2;
        o1=(m+1)/2;
        o2=(n+1)/2;
        printf("%lld\n",e1*e2+o2*o1);
    }
    return 0;
}
