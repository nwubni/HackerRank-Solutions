def fibonacciModified(t1, t2, n):
    # Write your code here
    for i in range(3, n + 1):
        k = t2
        t2 = t1 + t2**2
        t1 = k

    return t2


print(fibonacciModified(0, 1, 6))
