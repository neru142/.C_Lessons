#include <stdio.h>

/*

配列:複数のデータを 1 つの変数名で管理したい時に使える方法

*/

int main(void) {
    
    int sales[3];

    sales[0] = 200;
    sales[1] = 400;
    sales[2] = 300;
    /* sales[2] = 300; 絶対やらないように*/

    int sales2[] = {200,400,300};

    printf("%d\n",sales[1]);

    return 0;
}