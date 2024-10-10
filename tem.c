#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, i = 0, next;

    printf("Enter Number");
    scanf("%d", &n);

    /* while (i <= n)
    { 
        printf("%d ", a);
        next = a+b;
        a=b;
        b=next;
        i++;
    } */
    
    /* do
    { 
        printf("%d ", a);
        next = a+b;
        a=b;
        b=next;
        i++;
    }while (i <= n);
    */
    
    for(i; i<=n; i++)
	{
		printf("%d ", a);
		next = a+b;
		a=b;
		b=next;
	}
    return 0;
}
