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

EMSCRIPTEN_KEEPALIVE
int fibo(int base){
    if(base <= 1){
        return base;
    }
    return fibo(base-1) + fibo(base-2);

}