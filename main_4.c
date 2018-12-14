#include <stdio.h>
#include <math.h>
void bai1()
{
    float a, b, c;
    printf("Nhap vao 3 canh cua tam giac\n");
    scanf("%f%f%f", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0 || a >= b + c || b >= c + a || c >= a + b)
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
}

void bai2()
{
    int n;
    const char *word[] = {"Khong", "Mot", "Hai", "Ba", "Bon", "Nam", "Sau", "Bay", "Tam", "Chin"};
    printf("Nhap n\n");
    scanf("%d", &n);
    if (n >= 10 || n < 0)
        printf("So khong hop le");
    else
        printf("%s", word[n]);
    printf("\nDang Lam San 20170111");
    // return 0;
}

void bai3()
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
}

void bai4()
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
}

void bai5()
{
    int n;
    do
    {
        printf("Nhap vao so nguyen n\n");
        scanf("%d", &n);
    } while (n <= 0 || n >= 100);
    printf("%d\nDang Lam San 20170111", (n * (n + 1)) / 2);
}

void bai6()
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
}

void bai7()
{
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
}

void bai8()
{
    int a, b;
    printf("Nhap vao a,b\n");
    scanf("%d%d", &a, &b);
    int n = a * b;
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
}

void bai9()
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
                return ;
            }
            else
            {
                printf("Phuong trinh vo nghiem");
                return ;
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
            return ;
        }
        if (delta == 0)
        {
            printf("Nghiem kep x = %f", -b / (2 * a));
            return;
        }
        printf("Nghiem x1 = %f + %fi", -b / (2 * a), sqrt(-delta) / (2 * a));
        printf("Nghiem x1 = %f - %fi", -b / (2 * a), sqrt(-delta) / (2 * a));
    }
    printf("\nDang Lam San 20170111");
}

void bai10()
{
    int n;
    int sum = 0;
    do
    {
        printf("Nhap vao so n\n");
        scanf("%d", &n);

    } while (n > 1000 || n <= 0);
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("%d", sum);
    printf("\nDang Lam San 20170111");
}

void bai11()
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
}

void bai12()
{
    float n;
    int sum = 0;
    int cnt = 0; float max=-99999; float min=999999;
    do
    {
        printf("Nhap vao n\n");
        scanf("%f", &n);
        sum += n;
        cnt++;
        if (max<n) max = n;
        if (min>n) min = n;
    } while (n != 0);
    float x = (float)sum;
    printf("TBC %f\n", x / cnt);
    printf("\nMax %f", max);
    printf("\nMin %f",min);
    printf("\nDang Lam San 20170111");
}
int main()
{
    int n;
    printf("Bai 4.1 : Kiem tra tam giac\n");
    printf("Bai 4.2 : Danh van chu so\n");
    printf("Bai 4.3 : Tinh giai thua\n");
    printf("Bai 4.4 : Tinh e\n");
    printf("Bai 4.5 : Tinh tong tu 1 den n\n");
    printf("Bai 4.6 : Kiem tra so nguyen to\n");
    printf("Bai 4.7 : Tinh so pi\n");
    printf("Bai 4.8 : UCLN va BCNN\n");
    printf("Bai 4.9 : Giai pt bac 2\n");
    printf("Bai 4.10 : Tinh tong cac chu so\n");
    printf("Bai 4.11 : Tinh tong cac chuoi\n");
    printf("Bai 4.12 : Tinh TBC, Min, Max\n");
    do
    {
        printf("\nBan muon lam bai nao ? Neu khong muon lam thi nhap n =100\n");
        scanf("%d", &n);


        switch (n)
        {
        case 1:
            bai1();
            break;
        case 2:
            bai2();
            break;
        case 3:
            bai3();
            break;
        case 4:
            bai4();
            break;
        case 5:
            bai5();
            break;
        case 6:
            bai6();
            break;
        case 7:
            bai7();
            break;
        case 8:
            bai8();
            break;
        case 9:
            bai9();
            break;
        case 10:
            bai10();
            break;
        case 11:
            bai11();
            break;
        case 12:
            bai12();
            break;
        default:
            break;
        }
        
            
    }while (n <= 12 && n >= 0);
    return 0;
}