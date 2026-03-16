#include <stdio.h> 

void verify(unsigned char data, unsigned char bit){
    unsigned char mask = 1<<bit;

    if ((mask & data) == mask) {
        printf("The %d bit is ON\n", bit);
    } 
    else {
        printf("The %d bit is OFF\n", bit);      
    }
}

unsigned char set_bit(unsigned char data, unsigned char bit){

    unsigned char mask = 1<<bit;

    if ((data & mask) == mask) {
        printf("The bit is already turned ON.\n");
        return data;
    }

    data = data | mask;    

    printf("The bit is now turned ON.\n");
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

unsigned char toggle_bit(unsigned char data, unsigned char bit){

    unsigned char mask = 1<<bit;

    data = data ^ mask;
    
    printf("The bit was successfully toggled.\n");
    return data;

}

int main(){
    unsigned char i = 0, j = 0, data = 0, bit = 0, instruction = 0;

    while (i == 0) {

        if (j == 0) {
            printf("Hey, what's up?\nEnter a number:");
            scanf("%hhu", &data);
            j = 1;
        }

        printf("Choose an operation to do?:\n"
        "_________________________________________\n\n"
        "1 - Verify\n"
        "2 - Turn ON\n"
        "3 - Turn OFF\n"
        "4 - Toggle bit\n"
        "5 - Choose another number\n"
        "6 - Exit\n"
        "_________________________________________\n");

        scanf("%hhu", &instruction);

        switch (instruction) {
        case 1 :
            printf("which bit do you want to see?: \n");
            scanf("%hhu", &bit);
            verify(data, bit);
            break;
        case 2 :            
            printf("which bit you want to turn on?: \n");
            scanf("%hhu", &bit);
            data = set_bit(data,  bit);
            break;
        case 3 :
            printf("which bit you want to turn off?: \n");                
            scanf("%hhu", &bit);
            data = clear_bit(data, bit);
            break;
        case 4:
            printf("which bit do you want to toggle?: \n");
            scanf("%hhu", &bit);
            data = toggle_bit(data, bit);
            break;
        case 5 :    
            j = 0;
            break;
        case 6 :
            i = 1;
            break;
        default:
            printf("Incorrect instruction\n");
            break;
        }
    
    }

    return 0;

}
