#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char **argv) {

    double convergence;
    if (argc < 2) {
        convergence = 100;
    }
    else {
        convergence = atof(argv[1]);
    }
    double step = 20.0 / convergence;
    double x = -10.0;
    double y = x*x;
    for (int i = 0; i <= convergence; i++) {
        printf("%f  %f\n",x, y);
        x = x + step;
        y = x*x;
    }
    return 0;
}
