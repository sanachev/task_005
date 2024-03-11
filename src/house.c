#include <stdio.h>
#include "house.h"

/* Практика приводит к совершенству */

int main(){
    int n, k, h, dep, result;

    input(&n, &k, &h, &dep);
    output();
    
    return 0;
}

void input(int *n, int *k, int *h, int *dep){
    scanf("%d %d %d %d", n, k, h, dep);
}


int calculate(int n, int k, int h, int dep, int* result){
    int basement, walls, roof,  cost;

    basement = n * k * 1000;
    walls = ((n * h * 500) * 2) + ((k * h * 500) * 2);
    roof = (n * k * 700) + h * 100;

    cost = basement + walls + roof;

    if (dep - cost >=0){
        *result = 0;
    }
    else {
        *result = -1 * (dep - cost);
    }
}

void output(result){
    if (result == 0){
        printf("YES");
    }
    else {
        printf("NO %d", result);
    }
}