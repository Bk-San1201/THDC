// Đặng Lâm San 20170111
#include <stdio.h>
#include <conio.h>

int main()
{
    float a, b, c;
    printf("Nhap vao 3 canh cua tam giac\n");
    scanf("%f%f%f", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0 || a >= b + c || b >= c+a || c >= a + b)
    {
        printf("Khong phai la 3 canh tam giac\n");
    }
    else
    {
        printf("La 3 canh cua tam giac\n");
        if (a == b && b == c)
            printf("Tam giac deu\n");
        else if (a == b || b == c)
            printf("Tam giac can\n");
        else if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
            printf("Tam giac vuong\n");
        else
            printf("Tam giac thuong\n");
    }
    printf("Dang Lam San 20170111");
    return 0;
}