#include <stdio.h>
#include <time.h>

long long fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void benchmark_fibonacci(int n) {
    clock_t start_time = clock();
    long long result = fibonacci(n);
    clock_t end_time = clock();
    double execution_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Resultado do Fibonacci para n = %d: %lld\n", n, result);
    printf("Tempo de execução: %.6f segundos\n", execution_time);
}

int main() {
    int n = 39;  // Número para calcular o fibonacci
    benchmark_fibonacci(n);
    return 0;
}
