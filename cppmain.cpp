#include<stdio.h>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int main()
{
    printf("f*ck you!!");
    return 99;
}

EMSCRIPTEN_KEEPALIVE
int addnum(int a,int b){
    return a+b;
}