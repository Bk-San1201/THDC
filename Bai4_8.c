// Dang Lam San 20170111
#include <stdio.h>

int ucln(int a, int b)
{
    if (a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    while (b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main()
{
    int a, b;
    printf("Nhap vao a,b\n");
    scanf("%d%d", &a, &b);
    printf("UCLN %d", ucln(a, b));
    printf("\nBCNN %d", a * b / ucln(a, b));
    printf("\nDang Lam San 20170111");
    return 0;
}