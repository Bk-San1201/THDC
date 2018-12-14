// Dang Lam San 20170111
#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Nhap vao so nguyen n\n");
        scanf("%d", &n);
    } while (n <= 0 || n >= 100);
    printf("%d\nDang Lam San 20170111", (n * (n + 1)) / 2);
    return 0;
}