#include <stdio.h>

int main()
{
    int start = 10;
    do
    {
        printf("%d\n",start);
        start--;
        if(start==0)
        {
            printf("Takeoff!");
        }
    } while(start>0);
}
