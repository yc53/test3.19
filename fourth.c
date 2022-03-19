#include <stdio.h>
//相传韩信才智过人，从不直接清点自己军队的人数，只要让士兵先后以三人一排、五人一排、七人一排地变换队形，
//而他每次只掠一眼队伍的排尾就知道总人数了。输入3个非负整数a,b,c ，表示每种队形排尾的人数（a<3,b<5,c<7），
//输出总人数的最小值（或报告无解）。已知总人数不小于10，不超过100 。
int main() {
    int a;
    int b;
    int c;
    int i;

    scanf("%d%d%d", &a, &b, &c);

    for (i = 10; i <= 100; i++) {
        if (i % 3 == a && i % 5 == b && i % 7 == c) {
            printf("%d\n", i);
            break;
        }
    }

    if (i == 101)
        printf("No answer\n");


    return 0;
}
