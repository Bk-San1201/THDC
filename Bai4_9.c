// Dang Lam San 20170111
#include <stdio.h>
#include <math.h>


int main()
{
    float a, b, c;
    printf("Nhap vao 3 he so\n");
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Phuong trinh co vo so nghiem");
                return 0;
            }
            else
            {
                printf("Phuong trinh vo nghiem");
                return 0;
            }
        }
        printf("Phuong trinh co nghiem x = %f", -c / b);
    }
    else
    {
        float delta = b * b - 4 * a * c;
        if (delta > 0)
        {
            printf("Nghiem x1 = %f", (-b + sqrt(delta)) / (2 * a));
            printf("\nNghiem x2 = %f", (-b - sqrt(delta)) / (2 * a));
            return 0;
        }
        if (delta == 0)
        {
            printf("Nghiem kep x = %f", -b / (2 * a));
            return 0;
        }
        printf("Nghiem x1 = %f + %fi", -b / (2 * a), sqrt(-delta) / (2 * a));
        printf("Nghiem x1 = %f - %fi", -b / (2 * a), sqrt(-delta) / (2 * a));
    }
    printf("\nDang Lam San 20170111");
}