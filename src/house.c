#include "house.h"

#include <stdio.h>

/* Практика приводит к совершенству */

int main() {
    int n, k, h, dep, surcharge;

    input(&n, &k, &h, &dep);

    surcharge = calculate(n, k, h, dep);

    output(surcharge);

    return 0;
}

void input(int *n, int *k, int *h, int *dep) { scanf("%d %d %d %d", n, k, h, dep); }

int calculate(int n, int k, int h, int dep) {
    int basement, walls, roof, cost, surcharge;

    basement = n * k * 1000;
    walls = ((n * h * 500) * 2) + ((k * h * 500) * 2);
    roof = (n * k * 700) + h * 100;

    cost = basement + walls + roof;

    if (dep - cost >= 0) {
        surcharge = 0;
    } else {
        surcharge = -1 * (dep - cost);
    }
    return surcharge;
}

void output(int surcharge) {
    if (surcharge == 0) {
        printf("YES");
    } else {
        printf("NO %d", surcharge);
    }
}