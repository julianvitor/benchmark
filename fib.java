public class fib {
    public static long fibonacci(int n) {
        if (n <= 0) {
            return 0;
        } else if (n == 1) {
            return 1;
        } else {
            return fibonacci(n - 1) + fibonacci(n - 2);
        }
    }

    public static void main(String[] args) {
        int n = 39; // Número para calcular o Fibonacci
        long startTime = System.nanoTime();
        long result = fibonacci(n);
        long endTime = System.nanoTime();
        double executionTime = (endTime - startTime) / 1e9; // Converter para segundos

        System.out.println("Resultado do Fibonacci para n = " + n + ": " + result);
        System.out.printf("Tempo de execução: %.6f segundos%n", executionTime);
    }
}
