#include <stdio.h>

/*
変数の有効範囲
*/

int a = 0; //グローバル変数 あんまり使わない方がいい

void f(void) {
    //int a = 0; //ローカル変数
    a++;
    printf("a:%d\n",a);
}

int main(void){
    f();

    printf("[main] a:%d\n",a);
    return 0;
}