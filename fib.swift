import Foundation

func fibonacci(_ n: Int) -> Int {
    if n <= 0 {
        return 0
    } else if n == 1 {
        return 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2)
    }
}

func benchmarkFibonacci(_ n: Int) -> (Int, Double) {
    let startTime = DispatchTime.now()
    let result = fibonacci(n)
    let endTime = DispatchTime.now()
    let executionTime = Double(endTime.uptimeNanoseconds - startTime.uptimeNanoseconds) / 1_000_000_000.0
    return (result, executionTime)
}

let n = 39 // Número para calcular o Fibonacci
let (result, executionTime) = benchmarkFibonacci(n)
print("Resultado do Fibonacci para n = \(n): \(result)")
print("Tempo de execução: \(executionTime) segundos")
