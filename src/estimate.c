#include <stdio.h>
#include 'estimate.h'

void input(int *n, int *k, int *h, int *dep){
    scanf("%d %d %d %d", n, k, dep)
}


int calculate(int n, int k, int h, int dep){
    int basement, walls, roof,  cost, result;

    basement = n * k * 1000;
    walls = ((n * h * 500) * 2) + ((k * h * 500) * 2);
    roof = (n * k * 700) + h * 100;

    cost = basement + walls + roof;

    if (dep - cost >=0){
        result = 0;
    }
    else {
        result = -1 * (dep - cost);
    }
}

void output(){
    result = calculate(int n, int k, int h, int dep);
    if (result == 0){
        printf("YES");
    }
    else {
        printf("NO %d", result);
    }
}