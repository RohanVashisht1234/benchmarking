#include <stdio.h>
#include <time.h>

const unsigned int LIMIT = 100000000;

void generate_fibonacci() {
    unsigned long long fib[LIMIT];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 0; i < LIMIT; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

int main() {
    const clock_t startTime = clock();

    // Code block to measure.
    {
        generate_fibonacci();
    }

    const clock_t endTime = clock();
    double elapsedTime = (double)(endTime - startTime) / CLOCKS_PER_SEC;
    printf("C: %.6f nanoseconds.\n", elapsedTime * 1000000000.0);
    return 0;
}
