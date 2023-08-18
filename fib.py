import time

def fibonacci(n):
    if n <= 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

def benchmark_fibonacci(n):
    start_time = time.time()
    result = fibonacci(n)
    end_time = time.time()
    execution_time = end_time - start_time
    return result, execution_time

n = 39  # Número para calcular o fibonacci
result, execution_time = benchmark_fibonacci(n)
print("Resultado do Fibonacci para n = {}: {}".format(n, result))
print("Tempo de execução: {:.6f} segundos".format(execution_time))
