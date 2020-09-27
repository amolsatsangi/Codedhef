/**********
Id and Ship
Write a program that takes in a letterclass ID of a ship and display the equivalent string class description of the given ID. Use the table below.

Class ID	Ship Class
B or b	BattleShip
C or c	Cruiser
D or d	Destroyer
F or f	Frigate
Input
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains a character.

Output
For each test case, display the Ship Class depending on ID, in a new line.

Constraints
1 ≤ T ≤ 1000
Example
Input

3 
B
c
D

Output
BattleShip
Cruiser
Destroyer
***********/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    while(n--)
    {
        char s;
        scanf("%c\n",&s);
        if(s=='B'||s=='b')
        {
            printf("BattleShip\n");
        }
        else if(s=='c'||s=='C')
        {
            printf("Cruiser\n");
        }
        else if(s=='d'||s=='D')
        {
            printf("Destroyer\n");
        }
        else if(s=='f' || s=='F')
        {
            printf("Frigate\n");
        }
    }
    return 0;
}
