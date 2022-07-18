#include <stdio.h>

/* 

ポインタ: アドレスを格納するための変数

メモリ（記憶領域）

& : アドレス演算子  ○のアドレスを引っ張ってきなさい

* : 間接演算子 このポインタ変数が指し示しているアドレスの値を間接的に取ってきなさい

データ型
int(整数) %d
float(実数) %f
char(文字) %c
*/

int main(void) {

    int a;
    a = 10;

    int *pa; //ポインタ変数宣言
    pa = &a; //aのアドレスを引っ張ってきなさい
    
    printf("%d\n", *pa);
    
    return 0;
}