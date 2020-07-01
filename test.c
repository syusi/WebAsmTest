#include <stdio.h>

int counter;

void pluscount(){
    counter++;
    printf("counter : %d",counter);
}

int getcount(){
    return counter;
}
void setcount(int val){
    counter = val;
}

int main(void){
    
    printf("Hell wild Web Asm!!");

    return 0;
}