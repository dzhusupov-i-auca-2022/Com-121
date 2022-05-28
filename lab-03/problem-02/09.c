#include <stdio.h>

void swap(long *num1, long *num2)
{
        long temp =  *num1;
        *num1 =  *num2;
        *num2 =  temp;
}


int main(void)
{
        long a, b;
        scanf("%ld %ld", &a, &b);

        printf("Before swap: %ld, %ld\n", a, b);

        // swap(a, b);

        printf("After swap: %ld, %ld\n", b, a);


        return 0;
}
