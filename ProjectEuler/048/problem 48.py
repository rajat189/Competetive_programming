def func():
    return sum(i**i for i in range(1, 1001)) % 10**10

print func()