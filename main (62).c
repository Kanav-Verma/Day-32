
 
#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter size of 1st array  ");
    scanf("%d", &n1);
    printf("Enter elements of 1st array  ");
 
    int a[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }
     int b[n1];
     printf("Enter elements of 2nd array  ");
 
    for (int i = 0; i < n1; i++) {
        scanf("%d", &b[i]);
    }
    int c[n1];
    printf("new array = ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", a[i] + b [i]);
    }

    
    return 0;
}