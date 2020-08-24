/*********
SMALL FACTORIALS
You are asked to calculate factorials of some small positive integers.

Input
An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1<=n<=100.

Output
For each integer n given at input, display a line with the value of n!

Example
Sample input:
4
1
2
5
3
Sample output:

1
2
120
6
************/
t=int(input())
j=0
while(j!=t):
    n=int(input())
    i=n
    f=1
    while(i!=0):
        f=f*i 
        i=i-1
    print(f)
    j=j+1
