#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 
    
    int secretNumber = rand() % 100 + 1; 
    int attempts = 7;
    int found = 0;
    
    printf("It was one of those nights were you couldn't find sleep.\n");
    printf("Yesterday was a rough day, and you knew tomorrow wouldn't be any better.\n");
    printf("Not wanting to stare at the ceiling any longer, you went out for a walk.\n");
    printf("  \n");
    printf("  \n");
    
    printf("After some time you decided to make a halt.\n");
    printf("You grabbed a can of juice to a nearby vending machine and sat on a bench.\n");
    printf("The air was chilly and the streets were silent.\n");
    printf("  \n");
    printf("  \n");
    
    printf("'If only things could stay like this forever...' you whisper to yourself.\n");
    printf("  \n");
    printf("  \n");
    
    printf("You suddenly hear an ominous voice, as a tiny imp appear out of thin air.\n");
    printf("  \n");
    printf("  \n");
    
    printf("'Entertain me or begone, for he who step into the Shadow Realm must perish !'\n");
    printf("  \n");
    printf("  \n");
    

    while (attempts > 0 && !found) {
    
        int guess;
        
        printf("It wants you to guess its age. You have %d chances left ! : \n", attempts);
        printf("  \n");
        printf("  \n");
        
        int result = scanf("%d", &guess);
        if (result != 1) {
            printf("You see it frowning. ' You punk, is that even a number ? ' \n");
            printf("  \n");
            printf("  \n");
            
            attempts = attempts -1 ; 
            
            while (fgetc(stdin) != '\n'); //file get character / standard input
        }
        
        else {
        
            if (guess <1) {
            printf("You see it frowning. ' Do you wish to die so badly ? ' \n");
            printf("  \n");
            printf("  \n");
            }
            
            else if (guess >99) {
            printf("' I'd be more than an imp if I were that older. ' it cackles. \n");
            printf("  \n");
            printf("  \n");
            }
            
            else if (guess > secretNumber + 30) {
                printf("' I am not that old ! ' it menacingly growls.\n");
                printf("  \n");
                printf("  \n");
            } 
            
            else if (guess < secretNumber - 30) {
                printf("' You are cute, but I'm not a toddler anymore. ' it giggle.\n");
                printf("  \n");
                printf("  \n");
            } 
            
            else if (guess > secretNumber) {
                printf("' I'm a bit younger. ' it reply.\n");
                printf("  \n");
                printf("  \n");
            } 
            
            else if (guess < secretNumber) {
                printf("' I'm a bit older. ' it reply.\n");
                printf("  \n");
                printf("  \n");
            } 
            
            else {
                printf("'Well played, it said as it vanishes away. You guessed in %d attempts. '\n", 7 - attempts + 1);
                printf("  \n");
                printf("  \n");
                
                printf("You wake up sweating.\n");
                printf("It was thankfully just a dream.\n");
                printf("Or..\n");
                printf("Was it ? ");
                printf("  \n");
                found = 1; 
            }
            attempts = attempts - 1;
        }
    }

    if (!found) {
        printf("A sinister grin distort its face\n");
        printf("' The answer was %d. Now, prepare to die. '\n", secretNumber);
        printf("  \n");
        printf("  \n");
        
        printf("An excruciating pain suddenly grips you as you fall to your knees.\n");
        printf("You knew it was a shitty day anyway..");
        printf("  \n");
    }

    return 0;
}
    