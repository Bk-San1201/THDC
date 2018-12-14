// Dang Lam San 20170111
#include <stdio.h>

int main()
{
    // int i;
    float pi = 0;
    int cnt = 0;
    int dau = 1;
    float epsi;
    printf("Nhap vao epsi\n");
    scanf("%f", &epsi);
    while (1.0 / (2 * cnt + 1) >= epsi)
    {
        pi += dau * 4.0 / (2 * cnt + 1);
        dau *= -1;
        cnt++;
    }
    printf("%f\nDang Lam San 20170111", pi);
    return 0;
}