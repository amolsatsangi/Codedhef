\********************
CHOCO PRIME Problem Code: CPRIMESolvedSubmit (Practice)

 
Banta receives a present for Christmas Eve. That is a box full of Chocolates in which each chocolate is labeled a certain number on it. Banta wishes to eat only those chocolates which have a palindromic prime number on them. As a friend of his, help him to find these chocolates by writing a code.

You are given chocolate numbered N, You need to find out whether the given number is palindromic prime or not.

Example:

Input:
2
9
11
Output:
No
Yes
Constraints:
1<=T<=20
1<=N<=10^5
INPUT FORMAT:
The first line of the input contains a single integer T denoting the number of test cases. The next T lines contain integer N.

OUTPUT FORMAT:
Print “Yes” if the given number is a palindromic number, else print “No”.

Sample Test Case:
Input:
6
6
151
383
65266
9889
797
Output:
No
Yes
Yes
No
No
Yes
All submissions for this problem are available.
Author:	2★susheel121
Tags:	susheel121
Date Added:	19-12-2020
Time Limit:	1 secs
Source Limit:	50000 Bytes
Languages:	CPP14, C, JAVA, PYTH 3.6, PYTH, CS2, ADA, PYPY, PYP3, TEXT, CPP17, PAS fpc, RUBY, PHP, NODEJS, GO, TCL, HASK, PERL, SCALA, kotlin, BASH, JS, PAS gpc, BF, LISP sbcl, CLOJ, LUA, D, R, CAML, rust, ASM, FORT, FS, LISP clisp, SQL, swift, SCM guile, PERL6, CLPS, WSPC, ERL, ICK, NICE, PRLG, ICON, PIKE, COB, SCM chicken, SCM qobi, ST, NEM, SQLQ
Submit (Practice)
My SubmissionsAll Submissions
Successful Submissions

**********************\

#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,temp=0,m=0,k;
        scanf("%d",&n);
        k=n;
        while(n!=0)
        {
            temp=n%10;
            m=10*m+temp;
            n=n/10;
        }
        temp=0;
        if(m==k)
        {
            for(i=2;i<=sqrt(m);i++)
            {
                if(m%i==0)
                {
                    temp=1;
                    break;
                }
            }
        }
        else{
            temp=1;
        }
        if(temp==0&&k!=1)
        {
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
