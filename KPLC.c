#include <stdio.h>
#include <stdlib.h>

int main()
{
char name[15];
signed int consumption;
int amount;
    printf("WELCOME TO KENYA POWER AND LIGHTING COMPANY BILL SYSTEM.:\n\n");
    printf("I'M WELDON KOECH AND WILL BE TAKING YOU THROUGH.:\n\n");
    printf("PLEASE ENTER YOUR LAST NAME AND PRESS ENTER KEY TO CONTINUE.:\n\n");
    scanf("%s",name);
    printf("PLEASE ENTER YOUR FIRST NAME AND PRESS ENTER KEY CONTINUE.:\n\n");
    scanf("%s",name);
    printf("PLEASE ENTER THE NUMBER OF UNITS YOU CONSUMED AND PRESS ENTER KEY TO CONTINUE.:\n\n");
    scanf("%d", &consumption);
   if(consumption>200)
    {
        amount=(consumption*40)+160;
        printf("YOU OWE KPLC KSH:%d",amount);

    }
    if((consumption>=150)&(consumption<=200))
    {
        amount=(consumption*15)+160;
        printf("YOU OWE KPLC KSH:%d",amount);
    }
    if((consumption>0)&(consumption<150))
    {
        amount=(consumption*10)+160;
        printf("YOU OWE KPLC KSH:%d",amount);

    }
    if(consumption<0)
    {
        printf("YOU ARE UNDER ARREST FOR FAKING UNITS");
    }

    {
        printf("\nTHANK YOU FOR CHOOSING KPLC.\n");
    }
    return 0;
}
