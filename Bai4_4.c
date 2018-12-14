// Dang Lam San 20170111
#include <stdio.h>

int main()
{
    float epsi, e = 1, f = 1;
    int i;
    printf("Nhap so epsi\n");
    scanf("%f", &epsi);
    for (i = 1; 1.0 / f >= epsi; i++)
    {
        e += 1.0 / f;
        f *= i + 1;
    }
    printf("%f\nDang Lam San 20170111", e);
    return 0;
}