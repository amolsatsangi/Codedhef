/**************
Alien New Challenge Problem Code: ALCHH
Alien  likes to give challenges to Codezen team to check their implementation ability, this time he has given a string S and asked to find out whether the given string is a GOOD string or not. According to the challenge GOOD String is a string that has at least 3 consecutive vowels and at least 5 different consonants. For example ACQUAINTANCES is a GOODString ,as it contains 3 consecutive vowels UAI and 5 different consonants C,Q,N,T,S but ACQUAINT is not ,as it contain 3 vowels but have only 4 different consonants C,Q,N,T.

Input:
A string input is given from Standard Input that consists of only capital letters.

Output:
Output a single line that is either GOOD (if string is a good string ) or −1(if string is not good).

Constraints
8≤S≤1000
Sample Input 1:
AMBITIOUSNESS

Sample Output 2:
GOOD

Sample Input 2:
COOEY

Sample Output 2:
-1

******************/
#include<stdio.h>
int main()
{
    char a[1001];
    int n=0,k=0,t=0,i=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U')
        {
            n++;
        }
        t++;
    }
    if(n>=5)
    {
        for(i=0;i<t-2;i++)
        {
            if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
            {
                if(a[i+1]=='A'||a[i+1]=='E'||a[i+1]=='I'||a[i+1]=='O'||a[i+1]=='U')
                {
                    if(a[i+2]=='A'||a[i+2]=='E'||a[i+2]=='I'||a[i+2]=='O'||a[i+2]=='U')
                    {
                        k=1;
                        break;
                    }
                }
            }
        }
    }
        if(k==1)
        {
            printf("GOOD");
        }
        else
        {
            printf("-1");
        }
    return 0;
}
