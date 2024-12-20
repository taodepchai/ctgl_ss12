#include<stdio.h>
int check(int a[], int n){
   int hasSymmetry = 0;
    for (int i = 0; i < n / 2; i++) {
        if (a[i] == a[n - i - 1]) {
            printf("(%d, %d)\n", a[i], a[n - i - 1]);
            hasSymmetry = 1;
        }
    }
    if (!hasSymmetry) {
        printf("khong co phan tu doi xung");
    } 
}
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    check(a,n);
}