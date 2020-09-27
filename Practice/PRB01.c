/************
Primality Test
Alice and Bob are meeting after a long time. As usual they love to play some math games. This times Alice takes the call and decides the game. The game is very simple, Alice says out an integer and Bob has to say whether the number is prime or not. Bob as usual knows the logic but since Alice doesn't give Bob much time to think, so Bob decides to write a computer program.

Help Bob accomplish this task by writing a computer program which will calculate whether the number is prime or not .

Input
The first line of the input contains an integer T, the number of testcases. T lines follow.

Each of the next T lines contains an integer N which has to be tested for primality.

Output
For each test case output in a separate line, "yes" if the number is prime else "no."

Constraints
1 ≤ T ≤ 20
1 ≤ N ≤ 100000
Input:
5
23
13
20
1000
99991

Output:
yes
yes
no
no
yes

*********8/
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        long int k;
        int i=0,temp=0;
        scanf("%ld",&k);
        for(i=2;i<(k);i++)
        {
            if(k%i==0)
            {
                temp=1;
                break;
            }
        }
        if(temp==0&&k!=1&&k!=0)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}
