// Dang Lam San 20170111
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int i;
    int dem = 0;
    printf("Nhap vao so nguyen n\n");
    scanf("%d", &n);
    int m = sqrt(n);
    for (i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            dem = 1;
            break;
        }
    }
    if (dem)
        printf("So nay khong la so nguyen to\nDang Lam San 20170111");
    else
        printf("Day la so nguyen to\nDang Lam San 20170111");
    return 0;
}
