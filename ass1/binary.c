#include <stdio.h>

void binary(int n)
{
    if (n > 0)
    {
        binary(n / 2);
        printf("%d", n % 2);
    }
}

int main()
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Binary = ");
    binary(num);

    return 0;
}
