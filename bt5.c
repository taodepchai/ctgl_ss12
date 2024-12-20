#include<stdio.h>
#include<stdlib.h>
int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1;
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] > target) {
        return binarySearch(arr, left, mid - 1, target);
    } else {
        return binarySearch(arr, mid + 1, right, target);
    }
}

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
    int searchValue;
    printf("nhap gia tri tim kiem: ");
    scanf("%d",&searchValue);
    int index = binarySearch(a, 0, n - 1, searchValue);
    if (index != -1) {
        printf("%d",index);
    } else {
        printf("khong tim thay gia tri nay");
    }   
}