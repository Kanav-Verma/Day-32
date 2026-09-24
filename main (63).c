
 
#include <stdio.h>

int main() {
    int n, digit;
    int count[10] = {0};
    printf("Enter number : ");
    scanf("%d", &n);
    
    if(n==0){
    printf("Enter number other than zero or exit out of code \n");
          
    return 0;}
    
    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    int max_freq = 0;
    int max_fr_digit = 0;

    for (int i = 0; i <= 9; i++) {
        if (count[i] > max_freq) {
            max_freq = count[i];
            max_fr_digit = i;
        }
    }

    printf("max occured digit is %d with counts = %d\n", max_fr_digit,max_freq);

    return 0;
}