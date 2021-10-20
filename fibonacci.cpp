#include <stdio.h>

int main()
{
    int a,b,c,i,t;

    printf("Enter number of terms: ");
    scanf("%d", &t);

    a = 0;
    b = 1;
    c = 0;

    

    for(i=1;i<=t;i++)
    {
        printf("%d,", c);

        a = b;     
        b = c;     
        c = a + b; 
    }

    return 0;
}
