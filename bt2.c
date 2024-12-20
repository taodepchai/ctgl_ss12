#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    if (n==0){
        printf("khong co phan tu\n");
        exit(0);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min = a[0];
    for (int i=1; i<n; i++){
        min = min > a[i] ? a[i] : min;
    }
    printf("%d",min);
}