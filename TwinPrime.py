import math

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

start = int(input("Enter start of range: "))
end = int(input("Enter end of range: "))

print("Twin prime pairs:")

for i in range(start, end - 1):
    if is_prime(i) and is_prime(i + 2):
        print(f"({i}, {i+2})")
