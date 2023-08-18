fn fibonacci(n: i32) -> i32 {
    if n <= 0 {
        return 0;
    } else if n == 1 {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

fn benchmark_fibonacci(n: i32) -> (i32, f64) {
    let start_time = std::time::Instant::now();
    let result = fibonacci(n);
    let end_time = std::time::Instant::now();
    let execution_time = (end_time - start_time).as_micros() as f64 / 1_000_000.0;
    return (result, execution_time);
}

fn main() {
    let n = 39; // Número para calcular o Fibonacci
    let (result, execution_time) = benchmark_fibonacci(n);
    println!("Resultado do Fibonacci para n = {}: {}", n, result);
    println!("Tempo de execução: {} segundos", execution_time);
}
