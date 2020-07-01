#include <stdio.h>

int counter = 0;

void pluscount(){
    counter++;
    printf("counter : %d\n",counter);
}

int getcount(){
    return counter;
}
void setcount(int val){
    counter = val;
}

int main(void){
    
    printf("Hell wild Web Asm!!\n");
    pluscount();
    return 0;
}