#include <stdio.h>
#include <conio.h>

struct infoStudent {
	char firstName[100];
	char lastName[100];
	char Class[100];
	long long int id;
	int birthDay; int birthMonth; int birthYear;
	float midMarks, finalMarks;
};

struct infoStudent data[2000];
int n;

void getInfo() {
	printf("Nhap Ho va Ten dem ");
	gets(data[n].lastName);
	fflush(stdin);
	printf("\nNhap Ten ");
	gets(data[n].firstName);
	fflush(stdin);
	printf("\nNhap MSSV & Ngay Sinh & Thang Sinh & Nam Sinh\n");
	scanf("%ld&d&d",&data[n].id,&data[n].birthDay,&data[n].birthMonth,&data[n].birthYear);

}

int main() {
	getInfo();
	return 0;
}


