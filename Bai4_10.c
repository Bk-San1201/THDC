#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    do
    {
        printf("Nhap vao so n\n");
        scanf("%d", &n);
        
    } while (n > 1000 || n <= 0);
    while (n != 0)
        {
            sum += n % 10;
            n /= 10;
        }
        printf("%d", sum);
    printf("\nDang Lam San 20170111");

    return 0;
}