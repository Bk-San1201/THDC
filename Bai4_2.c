// Đặng Lâm San 20170111
#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    const char *word[] = {"Khong", "Mot", "Hai", "Ba", "Bon", "Nam", "Sau", "Bay", "Tam", "Chin"};
    printf("Nhap n\n");
    scanf("%d", &n);
    if (n >= 10 || n < 0)
        printf("So khong hop le");
    else
        printf("%s", word[n]);
    printf("Dang Lam San 20170111");
    return 0;
}