\*************

A time is a string in the format "HH:MM AM" or "HH:MM PM" (without quotes), where HH and MM are always two-digit numbers. A day starts at 12:00 AM and ends at 11:59 PM. You may refer here for understanding the 12-hour clock format.

Chef has scheduled a meeting with his friends at a time P. He has N friends (numbered 1 through N); for each valid i, the i-th friend is available from a time Li to a time Ri (both inclusive). For each friend, can you help Chef find out if this friend will be able to attend the meeting? More formally, check if Li≤P≤Ri for each valid i.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single time P.
The second line contains a single integer N.
N lines follow. For each valid i, the i-th of these lines contains two space-separated times Li and Ri.
Output
For each test case, print a single line containing one string with length N. For each valid i, the i-th character of this string should be '1' if i-th friend will be able to attend the meeting or '0' otherwise.

Constraints
1≤T≤500
1≤N≤500
each time is valid in the 12-hour clock format
for each valid i, the time Ri is greater or equal to Li
Subtasks
Subtask #1 (100 points): original constraints

Example Input
2
12:01 AM
4
12:00 AM 11:42 PM
12:01 AM 11:59 AM
12:30 AM 12:00 PM
11:59 AM 11:59 PM
04:12 PM
5
12:00 AM 11:59 PM
01:00 PM 04:12 PM
04:12 PM 04:12 PM
04:12 AM 04:12 AM
12:00 PM 11:59 PM
Example Output
1100
11101
Explanation
Example case 1:

Friend 1: 12:01 AM lies between 12:00 AM and 11:42 PM (that is, between 00:00 and 23:42 in the 24-hour clock format), so this friend will be able to attend the meeting.
Friend 2: 12:01 AM lies between 12:01 AM and 11:59 AM (between 00:01 and 11:59 in the 24-hour clock format).
Friend 3: 12:01 AM does not lie between 12:30 AM and 12:30 PM (between 00:30 and 12:30 in the 24-hour clock format), so this friend will not be able to attend the meeting.
Friend 4: 12:01 AM does not lie between 11:59 AM and 11:59 PM (between 11:59 and 23:59 in the 24-hour clock format).
Example case 2: For friend 3, 04:12 PM lies between 04:12 PM and 04:12 PM (inclusive) and hence this friend will be able to attend the meeting.

**************\

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int h,t,n=0,a=0;
        char dn[3];
        scanf("%d:%d %s",&h,&t,dn);
        h=(h==12)?0:h;
        if(dn[0]=='P')
        {
             a=(h+12)*60+t;
        }
        else
        {
             a=h*60+t;
        }
        scanf("%d",&n);
        while(n--)
        {
            int h1,t1,h2,t2,b,c;
            char dn1[3],dn2[3];
            scanf("%d:%d",&h1,&t1);
            scanf("%s",dn1);
            scanf("%d:%d %s",&h2,&t2,dn2);
            h1=(h1==12)?0:h1;
            h2=(h2==12)?0:h2;
            if(dn1[0]=='P')
            {
                b=(h1+12)*60+t1;
            }
            else
            {
                b=h1*60+t1;
            }
            if(dn2[0]=='P')
            {
                c=(h2+12)*60+t2;
            }
            else
            {
                c=h2*60+t2;
            }
            if(a>=b&&a<=c)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");

    }
    return 0;
}
