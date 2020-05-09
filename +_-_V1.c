#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    
    const int MAX = 100, MIN = 0;
    int n = 0;
    srand(time(NULL));
    int mn = (rand() % (MAX - MIN + 1)) + MIN;
    
    printf("Let's go !\n");
    
    while(n != mn){
        printf("What number ?");
        scanf("%d", &n);
        if (n < mn)
            printf("Taller !\n");
        if (n > mn)
            printf("Smaller !\n");
    }
    
    if (n == mn)
        printf("\nCongratulations, you won !\n\n");
    
    return 0;
    
}
