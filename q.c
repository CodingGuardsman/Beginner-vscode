//@author: @Bryan Lee Kwan Hong (Kwanhong.lee@digipen.edu)
#include <stdio.h>

int main(void) {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    
    int n = x;
    int i = 1;
    while(i < y) {
        n = n * x;
        i += 1;
    }
    printf("%d raised to power of %d is: %d\n", x, y, n);
    return 0;
}
