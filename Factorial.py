#To write a function to return factorial of a number
def factorial(n):
    result = 1
    for i in range(1, n + 1):
        result *= i
    return result

num = int(input("Enter the number:"))
fact = factorial(num)
print(f"Factorial of {num} = {fact}")