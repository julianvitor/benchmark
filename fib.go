package main

import (
	"fmt"
	"time"
)

func fibonacci(n int) int {
	if n <= 0 {
		return 0
	} else if n == 1 {
		return 1
	} else {
		return fibonacci(n-1) + fibonacci(n-2)
	}
}

func benchmarkFibonacci(n int) (int, time.Duration) {
	startTime := time.Now()
	result := fibonacci(n)
	endTime := time.Now()
	executionTime := endTime.Sub(startTime)
	return result, executionTime
}

func main() {
	n := 39
	result, executionTime := benchmarkFibonacci(n)
	fmt.Printf("Resultado do Fibonacci para n = %d: %d\n", n, result)
	fmt.Printf("Tempo de execução: %s\n", executionTime)
}
