
from bisect import bisect
from math import sqrt

LIMIT = 2_000_000

sieve = [True] * LIMIT
primes = []
sums = [0]
for number in range(2, int(sqrt(LIMIT))):
    if sieve[number]:
        primes.append(number)
        sums.append(sums[-1] + number)
        for multiple in range(number * number, LIMIT, number):
            sieve[multiple] = False
for number in range(int(sqrt(LIMIT)), LIMIT):
    if sieve[number]:
        primes.append(number)
        sums.append(sums[-1] + number)

T = int(input())
for _ in range(T):
    N = int(input())
    index = bisect(primes, N)
    print(sums[index])
