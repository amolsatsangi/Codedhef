/*******
You are given a strictly increasing sequence of integers A1,A2,…,AN. Your task is to compress this sequence.

The compressed form of this sequence is a sequence of ranges separated by commas (characters ','). A range is either an integer or a pair of integers separated by three dots (the string "..."). When each range a...b in the compressed form is decompressed into the subsequence (a,a+1,…,b), we should obtain the (comma-separated) sequence A again.

For each maximal contiguous subsequence (a,a+1,…,b) of A such that b≥a+2, the compressed form of A must contain the range a...b; if b≤a+1, such a sequence should not be compressed into a range. A contiguous subsequence is maximal if it cannot be extended by at least one element of A next to it. It can be proved that the compressed form of any sequence is unique (i.e. well-defined).

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1,A2,…,AN.
Output
For each test case, print a single line containing one string ― the compressed form of the given sequence.

Constraints
1≤T≤100
1≤N≤100
1≤Ai≤1,000 for each valid i
A1<A2<…<AN
Subtasks
Subtask #1 (100 points): original constraints

Example Input
3
12
1 2 3 5 6 8 9 10 11 12 15 17
4
4 5 7 8
1
4
Example Output
1...3,5,6,8...12,15,17
4,5,7,8
4
******/
#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    int t,i,j=0,temp,te=0;
	    scanf("%d",&t);
	    int a[t];
	    for(i=0;i<t;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<t;i++)
	    {
	        if(a[i+2]==a[i]+2)
	        {
	            j=a[i];
	            temp=j;
	        while(j==a[i])
	        {
	            j++;
	            i++;
	        }
	        j--;
	        i--;
	        
	        printf("%d...%d",temp,j);
	        }
	        else 
	        {
	            printf("%d",a[i]);
	        }
	        if(i<t-1)
	        {
	            printf(",");
	        }
	    }
	    printf("\n");
	}
	return 0;
}

