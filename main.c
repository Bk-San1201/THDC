#include <stdio.h>
#include <conio.h>

struct infoStudent
{
	char firstName[100];
	char lastName[100];
	char Class[100];
	long long int id;
	int birthDay;
	int birthMonth;
	int birthYear;
	float midMarks, finalMarks;
};

struct infoStudent data[2000];
int n = 0;

void setInfo()
{
	printf("Nhap Ho va Ten dem ");
	fflush(stdin);
	gets(data[n].lastName);
	printf("Nhap Ten ");
	gets(data[n].firstName);
	printf("Nhap Lop ");
	gets(data[n].Class);
	printf("Nhap MSSV & Ngay Sinh & Thang Sinh & Nam Sinh\n");
	scanf("%ld%d%d%d", &data[n].id, &data[n].birthDay, &data[n].birthMonth, &data[n].birthYear);
	printf("\nNhap diem giua ky va cuoi ky\n");
	scanf("%f%f", &data[n].midMarks, &data[n].finalMarks);
	n++;
	return;
}

void getInfo()
{
	if (n == 0)
	{
		printf("No Data Found\n");
		return;
	}
	for (int i = 0; i < n; i++)
	{
		printf("Ho va Ten: ");
		printf("%s %s", data[i].lastName, data[i].firstName);
		printf("\nLop: ");
		puts(data[i].Class);
		printf("MSSV: ");
		printf("%ld\n", data[i].id);
		printf("Ngay thang nam sinh: ");
		printf("%d %d %d\n", data[i].birthDay, data[i].birthMonth, data[i].birthYear);
		printf("Diem thi giua ky va cuoi ky: ");
		printf("%f %f\n", data[i].midMarks, data[i].finalMarks);
		printf("---------------------------------");
	}
}

void sort()
{

}
int main()
{
	char s = '1';
	printf("Ban muon lam gi ?\n");
	printf("1. Them sinh vien\n2. Sap xep\n3. In sinh vien\n");
	printf("Nhan 1 2 3 de chon. Nhan # de thoat!\n");
	scanf("%c", &s);
	while (s != '#')
	{

		switch (s)
		{
		case '1':
			setInfo();
			break;
		case '2':
			sort();
			break;
		case '3':
			getInfo();
			break;
		default:
			break;
		}
		printf("Ban muon lam gi ?\n");
		printf("1. Them sinh vien\n2. Sap xep\n3. In sinh vien\n");
		printf("Nhan 1 2 3 de chon. Nhan # de thoat!\n");
		fflush(stdin);
		scanf("%c", &s);
	}
	return 0;
}
