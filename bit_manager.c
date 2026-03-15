#include <stdio.h> 

int main(){
    unsigned char data = 0, mask = 1, bit = 0, instruction = 0;

    printf("Olá ziqui,\nDiz um número: ");
    scanf("%hhu", &data);

    printf("Qual é a operaçao que queres fazer?:\n"
    "_________________________________________\n"
    "\n1 - verify\n"
    "2 - Turn On\n"
    "3 - Turn off\n"
    "_________________________________________\n");

    scanf("%hhu", &instruction);

    if (instruction == 1) {
     
        printf("Qual é o bit que queres ver?: \n");
        scanf("%hhu", &bit);
        mask = mask<<bit;
    
        if ((mask & data&mask) == mask) {
            printf("o bit %dº está ligado", bit);
            return 0;
        } 
        else {
            printf("o bit %dº está desligado", bit);      
            return 0;  
        }

    }


    if (instruction == 2) {
        printf("What's the bit that you want to turn on?: \n");
        scanf("%hhu", &bit);
        
        mask = mask<<bit;
    
        if ((data & mask) == mask) {
            printf("The bit is already turned on.\n");
            return 0;
        }

        data = data | mask;    

        printf("The bit is now turned on.\n");            
        
    }    

    if (instruction == 3) {
        printf("What's the bit that you want to turn off?: \n");                
        scanf("%hhu", &bit);

        mask = mask<<bit;

        if ((data & mask) == 0) {
           printf("The bit is already turned off.\n");
           return 0;
        }
        data = ~mask & data;

        printf("The bit is now turned off.\n");
    }

    return 0;

}
