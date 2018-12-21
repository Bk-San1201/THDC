#include <stdio.h>
#include <math.h>
#include <string.h>

void swap(int *x, int *y);
int check(char fn1[], char ln1[], char fn2[], char ln2[]);
void Bai1();
void Bai2();
void Bai3();
void Bai4();
void Bai5();
void Bai6();
void Bai7();
void Bai8();
void Bai9();
void Bai10();
void Bai11();

void Bai1()
{
    int n;
    int a[10];
    int i;
    printf("Nhap n trong [0,10]: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Nhap a[%d] ", i);
        scanf("%d", &a[i]);
    }
    printf("\nDay vua nhap la: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    int sumP = 0, sumN = 0, cntZ = 0, cntN = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
            sumP += a[i];
        else if (a[i] < 0)
        {
            sumN += a[i];
            cntN++;
        }
        else
            cntZ++;
    }
    if (cntN == 0)
    {
        printf("Khong co so am\n");
    }
    else
    {
        printf("\nTrung binh cong cac so am: %d\n", sumN / cntN);
    }
    printf("Tong cac so duong: %d\n", sumP);
    printf("So cac so 0 la: %d\n", cntZ);
    printf("Xin moi nhap so nguyen x: ");
    int x;
    scanf("%d", &x);
    int indiX = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            indiX = i;
            printf("Vi tri cua %d la: %d", x, indiX + 1);
        }
    }
    if (indiX == 0)
        printf("Khong tim thay %d", x);
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int check(char fn1[], char ln1[], char fn2[], char ln2[])
{
    if (strcmp(fn1, fn2) == 1)
        return 0;
    else if (strcmp(fn1, fn2) == -1)
        return 1;
    else
    {
        if (strcmp(ln1, ln2) >= 0)
            return 0;
        else
            return 1;
    }
}

void Bai2()
{
    int n;
    int a[10];
    int i, j;
    printf("Nhap n trong [0,10]: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Nhap a[%d] ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
                swap(&a[i], &a[j]);
        }
    }
    printf("Day tang dan: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    printf("Day giam dan: ");
    for (i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (abs(a[i]) < abs(a[j]))
                swap(&a[i], &a[j]);
        }
    }
    printf("Day giam dan theo tri tuyet doi: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return;
}

void Bai3()
{
    int n;
    int a[10];
    int i;
    printf("Nhap n trong [0,10]: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Nhap a[%d] ", i);
        scanf("%d", &a[i]);
    }
    int b[10], c[10];
    int cntP = 0;
    int cntN = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            b[cntP] = a[i];
            cntP++;
        }
        if (a[i] < 0)
        {
            c[cntN] = a[i];
            cntN++;
        }
    }
    printf("Mang so duong\n");
    for (i = 0; i < cntP; i++)
        printf("%d ", b[i]);
    printf("\nMang so am\n");
    for (i = 0; i < cntN; i++)
        printf("%d ", c[i]);
}

void Bai4()
{
    char fullN[10][30];
    char firstN[10][30];
    char lastN[10][30];
    int n, i, j;
    printf("Nhap so hoc sinh trong khoang [0,10]: ");
    scanf("%d", &n);
    fflush(stdin);
    for (i = 0; i < n; i++)
    {
        gets(fullN[i]);
        fflush(stdin);
    }
    for (i = 0; i < n; i++)
    {
        int mark = strlen(fullN[i]);
        for (j = mark - 1; j >= 0; j--)
        {
            if (fullN[i][j] == ' ')
            {
                mark = j;
                break;
            }
        }
        for (j = 0; j < mark; j++)
        {
            lastN[i][j] = fullN[i][j];
        }
        for (j = mark + 1; j < strlen(fullN[i]); j++)
        {
            firstN[i][j - mark - 1] = fullN[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        int Imin = i;
        for (j = i + 1; j < n; j++)
        {
            if (check(firstN[j], lastN[j], firstN[Imin], lastN[Imin]))
                Imin = j;
            char temp[30];
            strcpy(temp, fullN[i]);
            strcpy(fullN[i], fullN[Imin]);
            strcpy(fullN[Imin], temp);
        }
    }
    for (i = 0; i < n; i++)
    {
        puts(fullN[i]);
    }
}

void Bai5()
{
    struct Hoso
    {
        char HoTen[40];
        float Diem;
        char Loai[10];
    };
    struct Hoso dssv[100];

    int n, i, j;
    struct Hoso sv;
    printf("Nhap so sinh vien : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Nhap ho ten : ");
        fflush(stdin);
        gets(dssv[i].HoTen);
        printf("Vao diem : ");
        scanf("%f", &dssv[i].Diem);
        if (dssv[i].Diem >= 9.0)
            strcpy(dssv[i].Loai, "Gioi");
        else if (dssv[i].Diem >= 7)
            strcpy(dssv[i].Loai, "Kha");
        else if (dssv[i].Diem >= 5)
            strcpy(dssv[i].Loai, "Trung binh");
        else
            strcpy(dssv[i].Loai, "Khong dat");
    }

    for (i = 0; i < n - 1; i++)
    {
        int k = i;
        for (j = i + 1; j < n; j++)
        {
            if (dssv[k].Diem > dssv[j].Diem)
            {
                k = j;
            }
        }
        if (k != i)
        {
            sv = dssv[k];
            dssv[k] = dssv[i];
            dssv[i] = sv;
        }
    }

    printf("HO VA TEN\t    DIEM\tXEP LOAI\t\n");
    for (i = 0; i < n; i++)
    {
        printf("%-20s%4.2f\t%-20s\n", dssv[i].HoTen, dssv[i].Diem, dssv[i].Loai);
    }
}

void Bai6()
{
    int a[100][100], b[100][100], c[100][100];
    int m, n;
    printf("Nhap vao 2 so nguyen m,n: ");
    scanf("%d%d", &m, &n);
    printf("Nhap vao ma tran A\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Nhap vao ma tran B\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Ma tran tong\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

void Bai7()
{
    int a[100][100], b[100][100], c[100][100];
    int k, n , m;
    printf("Nhap vao 3 so nguyen m,k,n: ");
    scanf("%d%d", &m, &k, &n);
    printf("Nhap vao ma tran A\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Nhap vao ma tran B\n");
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int cnt = 0; cnt < k; cnt++) {
                c[i][j] += a[i][cnt]*b[cnt][j];
            }
        }
    }
    printf("Ma tran tich\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    Bai7();
    // Bai2();
    // Bai3();
    return 0;
}