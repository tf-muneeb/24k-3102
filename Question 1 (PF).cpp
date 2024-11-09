#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements you want in your array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: \n", n); 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int secLargest = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secLargest && arr[i] != largest) {
            secLargest = arr[i];
        }
    }
    if (secLargest == -1) {
        printf("No second largest element.\n");
    } else {
        printf("The second largest number is %d\n", secLargest);
    }
    return 0;
}
