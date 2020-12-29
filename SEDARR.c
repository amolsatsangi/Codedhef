\****************
Sed Sequences Problem Code: SEDARRSolvedSubmit (Practice)

 
Read problem statements in Hindi, Bengali, Mandarin Chinese, Russian, and Vietnamese as well.
The special task force Sed managed to obtain a sequence of positive integers A1,A2,…,AN.

You may perform the following operation any number of times (possibly zero):

Choose any element of the current sequence and replace it by any positive integer.
You need to make the sum of the elements of the sequence divisible by a given positive integer K. Find the minimum number of operations you need to perform to achieve this.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and K.
The second line contains N space-separated integers A1,A2,…,AN.
Output
For each test case, print a single line containing one integer ― the minimum required number of operations.

Constraints
1≤T≤1,000
1≤N≤100
1≤K≤105
1≤Ai≤105 for each valid i
Subtasks
Subtask #1 (100 points): original constraints

Example Input
3
3 2
1 1 1
3 3
1 1 1
5 5
1 2 3 4 5
Example Output
1
0
0
Explanation
Example case 1: Initially, 1+1+1=3 is not divisible by K=2. We can change A1 to 2. Now, 2+1+1=4 is divisible by K.

Example case 2: For the initial sequence A, 1+1+1=3 is already divisible by K=3, so no operations are required.

Example case 3: Again, for the initial sequence A, 1+2+3+4+5=15 is already divisible by K=5, so no operations are required.

All submissions for this problem are available.
Author:	4★bhvdsi
Editorial:	https://discuss.codechef.com/problems/SEDARR
Tags:	bhvdsi, cakewalk, ltime91
Date Added:	24-12-2020
Time Limit:	1 secs
Source Limit:	50000 Bytes
Languages:	CPP14, C, JAVA, PYTH 3.6, PYTH, CS2, ADA, PYPY, PYP3, TEXT, CPP17, PAS fpc, RUBY, PHP, NODEJS, GO, TCL, HASK, PERL, SCALA, kotlin, BASH, JS, PAS gpc, BF, LISP sbcl, CLOJ, LUA, D, R, CAML, rust, ASM, FORT, FS, LISP clisp, SQL, swift, SCM guile, PERL6, CLPS, WSPC, ERL, ICK, NICE, PRLG, ICON, PIKE, COB, SCM chicken, SCM qobi, ST, NEM, SQLQ
Submit (Practice)
My SubmissionsAll Submissions
Successful Submissions

********************\

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
         int k,n;
        scanf("%d %d",&n,&k);
         int a[n],i=0;
        long int s=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            s=s+a[i];
        }
        if(s%k==0)
        {
            printf("0\n");
        }
        else{
            printf("1\n");
        }
    }
return 0;
}
