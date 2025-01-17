#include <stdio.h>

void main()
    {
        unsigned char pistol;
        printf("Let's play russian rollet.\n");
        do
        {
          printf("Choose a number between 1 and 8.\n");
        scanf("%c", &pistol);
        if (pistol == 6)
        {
            printf("Ako iskarash tolkova na testa po VS si safe.\n");
            return;
        }
        else 
        {
            printf("Brat mi, cooknat si!!\n");
        }
        } 
        while (1);  
    }
