function fibonacci(n) {
    if (n <= 0) {
        return 0;
    } else if (n === 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

function benchmarkFibonacci(n) {
    const startTime = new Date().getTime();
    const result = fibonacci(n);
    const endTime = new Date().getTime();
    const executionTime = (endTime - startTime) / 1000; // Convertendo para segundos
    return { result, executionTime };
}

const n = 39; // Número para calcular o fibonacci
const { result, executionTime } = benchmarkFibonacci(n);
console.log(`Resultado do Fibonacci para n = ${n}: ${result}`);
console.log(`Tempo de execução: ${executionTime.toFixed(6)} segundos`);
