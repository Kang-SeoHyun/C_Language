#include <stdio.h>

int s_factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * s_factorial(n - 1);
}

int main()
{
    int n;
    scanf_s("%d", &n);
    int result;
    result = s_factorial(n);
    printf("%d", result);
    return 0;
}