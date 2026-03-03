#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,max,min;

    // Get three numbers from user
    printf("Enter 3 numbers:\n");
    scanf("%d%d%d",&a,&b,&c);

    //Find maximum value
    max=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
    printf("Maximum value:%d\n",max);

    //Find minimum value
    min=a;
    if(b<min)
    {
        min=b;
    }
    if(c<min)
    {
        min=c;
    }
    printf("Minimum value:%d\n",min);

    return 0;
}
