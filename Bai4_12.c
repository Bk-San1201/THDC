#include <stdio.h>

int main() {
    int n; int sum=0; int cnt=0;
    do {
        printf("Nhap vao n\n");
        scanf("%d",&n);
        sum+=n;
        cnt++;
    } while (n!=0);
    float x = (float) sum;
    printf("%f", x/cnt);
    printf("\nDang Lam San 20170111");

    return 0;
}