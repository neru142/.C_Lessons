#include <stdio.h>

/*
変数の有効期限
*/


void f(void) {
    int a = 0; //ローカル変数(自動変数)
    static int b = 0; //静的変数
    a++;
    b++;
    printf("a:%d\n",a);
    printf("b:%d\n",b);
}

int main(void){
    f();
    f();
    f();

    return 0;
}