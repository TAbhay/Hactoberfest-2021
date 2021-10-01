#My Solution to codeforces round 744 div 3.
#Link: https://codeforces.com/contest/1579/problem/E1
import sys
import math
import heapq
from collections import defaultdict as dd
from collections import OrderedDict as od
from collections import deque
from itertools import permutations as pp
from itertools import combinations as cc
from sys import stdin
from functools import cmp_to_key as ctk
from functools import lru_cache
from bisect import bisect_left as bs_l
from bisect import bisect_right as bs_r
input = sys.stdin.readline
mod=10**9+7
sys.setrecursionlimit(10**5)
def comparator(x,y):
    if x[0]==y[0]:
        return x[1]-y[1]
    return True
def ncr(n, r):
    if n < r: return 0
    return fc[n] * pow(fc[r] * fc[n - r] % mod, mod - 2, mod) % mod
T=int(input())
for _ in range(T):
    n=int(input())
    arr=list(map(int,input().split()))
    qu=deque([])
    f=1
    for i in arr:
        if f:
            qu.append(i)
            f=0
        else:
            tp=qu[0]
            if i<tp:
                qu.appendleft(i)
            else:
                qu.append(i)
    print(*qu)
