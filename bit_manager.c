#include <stdio.h> 

void verify(unsigned char data, unsigned char bit){
    unsigned char mask = 1<<bit;

    if ((mask & data) == mask) {
        printf("o bit %dº está ligado\n", bit);
    } 
    else {
        printf("o bit %dº está desligado\n", bit);      
    }
}

unsigned char set_bit(unsigned char data, unsigned char bit){

    unsigned char mask = 1<<bit;

    if ((data & mask) == mask) {
        printf("The bit is already turned on.\n");
        return data;
    }

    data = data | mask;    

    printf("The bit is now turned on.\n");
    return data;    
} 

unsigned char clear_bit(unsigned char data, unsigned char bit){

    unsigned char mask = 1<<bit;

    if ((data & mask) == 0) {
    printf("The bit is already turned off.\n");
    return data;
    }
    data = ~mask & data;

    printf("The bit is now turned off.\n");
    return data;
}

int main(){
    unsigned char i = 0, j = 0, data = 0, bit = 0, instruction = 0;

    while (i == 0) {

        if (j == 0) {
            printf("Olá ziqui,\nDiz um número: ");
            scanf("%hhu", &data);
            j = 1;
        }

        printf("Qual é a operaçao que queres fazer?:\n"
        "_________________________________________\n\n"
        "1 - Verify\n"
        "2 - Turn On\n"
        "3 - Turn off\n"
        "4 - Choose another number\n"
        "5 - Exit\n"
        "_________________________________________\n");

        scanf("%hhu", &instruction);

        switch (instruction) {
        case 1 :
            printf("Qual é o bit que queres ver?: \n");
            scanf("%hhu", &bit);
            verify(data, bit);
            break;
        case 2 :            
            printf("What's the bit that you want to turn on?: \n");
            scanf("%hhu", &bit);
            data = set_bit(data,  bit);
            break;
        case 3 :
            printf("What's the bit that you want to turn off?: \n");                
            scanf("%hhu", &bit);
            data = clear_bit(data, bit);
            break;
        case 4 :    
            j = 0;
            break;
        case 5 :
            i = 1;
            break;
        default:
            printf("incorrect instruction\n");
            break;
        }
    
    }

    return 0;

}
