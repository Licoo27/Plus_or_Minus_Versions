#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    
    const int MAX = 100, MIN = 0;
    char YN = 'A';
    int tn = 0;
    srand(time(NULL));
    int mn = (rand() % (MAX - MIN + 1)) + MIN;
    
    printf(" Hello, my name is computplay, we're gonna play a game, all right ? (Y/N)");
    scanf("%c", &YN);
    if(YN == 'Y'){
        printf(" Great, so the game is called + or -, I focus on a number, and you have to guess it, ready ? (Y/N)");
        scanf(" %c", &YN);
        
        if(YN == 'Y'){
            printf("Let's go !\n");
            
            while(tn != mn){
                printf("What number ?");
                scanf(" %d", &tn);
                if (tn < mn)
                    printf("Bigger !\n");
                if (tn > mn)
                    printf("Smaller !\n");
            }
            if (tn == mn)
                printf("\nCongratulations, you won !\n\n");
        }
        
        if(YN == 'N')
            printf(" Well, well, goodbye then :'( \n\n");
        
    }
    
    
    else
        printf(" Well, well, goodbye then :'( \n\n");
    
    
    
    
}
