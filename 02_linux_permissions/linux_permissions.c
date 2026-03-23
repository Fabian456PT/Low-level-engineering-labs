#include <stdio.h>

void cmd_process(unsigned char user, unsigned char group, unsigned char others){
    char buffer[9];
    unsigned char mask = 1;

    if ((user & mask<<2) == 4) {
        buffer[0] = 'r';
    }
    else if ((user & mask<<1) == 2) {
        buffer[1] = 'w';
    }
    else if ((user & mask<<1) == 1) {
        buffer[2] = 'x';    
    }
}

int main(){

    unsigned char user = 0, group = 0, others = 0;

    int number;
    printf("Choose a number with 3 digits (0-7): ");
    scanf("%o", &number);

    user = number >> 6;
        if ((user & 7) >= 0){
        printf("The 1st bit is greater than 7");
    }

    //defining the group comand
    group = number;
    group <<= 3;
    group >>= 6;
    if (group > 7 && group >= 0){
        printf("The 2nd bit is greater than 7");
    }

    //defining the others comand
    others = number;
    others <<= 6;   
    others >>= 6;
    if (others > 7 && others >= 0){
        printf("The 3rd bit is greater than 7");
    }

    cmd_process(user,group,others);


    return 0;
}