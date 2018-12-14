// Dang Lam San 20170111
#include <stdio.h>
#include <math.h>
float a, b, c;

void ptbac1()
{
    if (b == 0)
    {
        if (c == 0)
        {
            printf("Phuong trinh co vo so nghiem");
            return;
        }
        else
        {
            printf("Phuong trinh vo nghiem");
            return;
        }
    }
    printf("Phuong trinh co nghiem x = %f", -c / b);
}

void ptbac2()
{
    float delta = b * b - 4 * a * c;
    if (delta > 0)
    {
        printf("Nghiem x1 = %f", (-b + sqrt(delta)) / (2 * a));
        printf("\nNghiem x2 = %f", (-b - sqrt(delta)) / (2 * a));
        return;
    }
    if (delta == 0)
    {
        printf("Nghiem kep x = %f", -b / (2 * a));
        return;
    }
    printf("Nghiem x1 = %f + %fi", -b / (2 * a), sqrt(-delta) / (2 * a));
    printf("Nghiem x1 = %f - %fi", -b / (2 * a), sqrt(-delta) / (2 * a));
}

int main()
{
    printf("Nhap vao 3 he so\n");
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0)
    {
        ptbac1();
    }
    else
    {
        ptbac2();
    }
    printf("\nDang Lam San 20170111");
}