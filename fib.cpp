#include <iostream>
#include <chrono>

using namespace std;

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

pair<int, double> benchmark_fibonacci(int n) {
    auto start_time = chrono::high_resolution_clock::now();
    int result = fibonacci(n);
    auto end_time = chrono::high_resolution_clock::now();
    double execution_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count() / 1000000.0;
    return make_pair(result, execution_time);
}

int main() {
    int n = 39;  // Número para calcular o Fibonacci
    pair<int, double> result = benchmark_fibonacci(n);
    cout << "Resultado do Fibonacci para n = " << n << ": " << result.first << endl;
    cout << "Tempo de execução: " << result.second << " segundos" << endl;

    return 0;
}
