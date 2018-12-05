// ĐẶng Lâm San 20170111
#include <stdio.h>
#include <conio.h>

int main() {
    float toan,ly,hoa;
    printf("Nhap vao 3 điem toan ly hoa theo thu tu\n");
    scanf("%f%f%f",&toan,&ly,&hoa);
    printf("Tong diem=%f",toan+ly+hoa);
    printf("Diem trung binh cong=%f",(toan+ly+hoa)/3);
    printf("\nDANG LAM SAN 20170111");
    getch();
    return 0;
}