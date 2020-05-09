#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    
    const int MAX = 100, MIN = 0;
    int tn = 0;
    srand(time(NULL));
    int mn = (rand() % (MAX - MIN + 1)) + MIN;
    
    printf("Let's go !\n");
    
    while(tn != mn){
        printf("What number ?");
        scanf("%d", &tn);
        if (tn < mn)
            printf("Bigger !\n");
        if (tn > mn)
            printf("Smaller !\n");
    }
    
    if (tn == mn)
        printf("\nCongratulations, you won !\n\n");
    
    return 0;
    
}
