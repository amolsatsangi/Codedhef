/*********************
Sports Championship Problem Code: ZRACE
InterHouseSportsChampionship  is organized in Zen's School .There is five teams (Red,Green,White,Blue and Orange)participated in the Championship. Zen is the captain of Red team . Red team very close to winning the Inter House Sports Championship and there is only one sport left which is 100 meter race . Zen took part in this race, as he is the captain of his team so all eyes are on him and to make his team champion he has to finish the race at first position. Zen's average speed and other 4 team 's racers average speed is given ,find out whether Zen would be able to make his team champion or not. If Any other team along with Red finishing as first in the race then also Red team will be the winner .

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
Each test case contains five integers R G B W O denoting speed of participants of each team(R=Red ,G=Green, B=Blue, W=white ,O=Orange) in m/s .
Output:
Output Champions if Red team wins else -1.
Constraints
1≤T≤100
1≤R,G,B,W,O≤10
Sample Input :
2

5 4 3 2 1

2 3 4 1 5

Sample Output :
Champions

-1

EXPLANATION:
Case 1:- speeds are 5 4 3 2 1 so time taken by each team are RED=20s ,Green =25s , Blue =33.33 s , White= 50 s , Orange =100s. Zen's team Red is winner so, output Champions Case 2:- speeds are 2 3 2 1 5 so time taken by each team are RED=50s ,Green =33.33s , Blue =50s , White= 100 s , Orange =20s. Orange is winner so, output −1
*********/
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i=0;
        int r,g,w,b,o;
        scanf("%d %d %d %d %d",&r,&g,&b,&o,&w);
        if(r>=g&&r>=o&&r>=w&&r>=b&&r>=w)
        {
            printf("Champions\n");
        }
        else
        {
            printf("-1\n");
        }
        printf("\n");
    }
    return 0;
}
