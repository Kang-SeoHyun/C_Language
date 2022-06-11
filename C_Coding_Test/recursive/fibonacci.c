#include <stdio.h>

int s_fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return s_fibonacci(n - 1) + s_fibonacci(n - 2);
}

int main()
{
    int n;
    scanf_s("%d", &n);
    int result;
    result = s_fibonacci(n);
    printf("%d", result);
    return 0;
}