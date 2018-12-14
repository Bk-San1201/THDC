// Dang Lam San 20170111
#include <stdio.h>

int ucln(int a, int b)
{
    
}
int main()
{
    int a, b;
    printf("Nhap vao a,b\n");
    scanf("%d%d", &a, &b); int n=a*b;
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
    // return a;
    printf("UCLN %d", a);
    printf("\nBCNN %d", n / a);
    printf("\nDang Lam San 20170111");
    return 0;
}