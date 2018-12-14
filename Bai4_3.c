// Dang Lam San 20170111
#include <stdio.h>

int main()
{
    int n;
    int i;
    int ans = 1;
    printf("Nhap n\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        ans *= (i + 1);
    }
    printf("%d\nDang Lam San 20170111", ans);
    return 0;
}