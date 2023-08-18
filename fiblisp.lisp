(defun fibonacci (n)
  (if (<= n 0)
      0
      (if (= n 1)
          1
          (+ (fibonacci (- n 1)) (fibonacci (- n 2))))))

(let ((n 39)) 
  (let ((start-time (get-internal-run-time)))
    (let ((result (fibonacci n)))
      (let ((end-time (get-internal-run-time)))
        (let ((execution-time (/ (- end-time start-time) internal-time-units-per-second)))
          (format t "Resultado do Fibonacci para n = ~a: ~a~%" n result)
          (format t "Tempo de execução: ~,6F segundos~%" execution-time))))))
