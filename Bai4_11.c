#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    double x;
    printf("Nhap n : ");
    scanf("%d", &n);
    printf("Nhap x : ");
    scanf("%lf", &x);
    double luythua, giaithua;
    int sign = 1, i;
    luythua = 1;
    giaithua = 1;
    double s1 = 1, s2 = 1, s3 = 1;
    for (i = 1; i <= n; i++)
    {
        luythua *= x;
        giaithua *= i;
        sign = -sign;
        s1 += luythua;
        s2 += sign * luythua;
        s3 += luythua / giaithua;
    }
    printf("S1 = %lf\n", s1);
    printf("S2 = %lf\n", s2);
    printf("S3 = %lf\n", s3);
    printf("\nDang Lam San 20170111");

    return 0;
}
