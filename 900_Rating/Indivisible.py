#Problem 1818B
#https://codeforces.com/problemset/problem/1818/B
import sys
import heapq
from collections import Counter

input = sys.stdin.readline
############ ---- Input Functions ---- ############
def inp():
    return(int(input()))
def inlt():
    return(list(map(int,input().split())))
def insr():
    s = input()
    return(list(s[:len(s) - 1]))
def invr():
    return(map(int,input().split()))

test_cases = inp()

for i in range(test_cases):
    n = inp()
    if n == 1:
        print("1")
        continue
    if n % 2 == 1:
        print("-1")
        continue
    res = []
    for j in range(1, n+1):
        res.append(j)
    for j in range(0, n-1, 2):
        res[j], res[j+1] = res[j+1], res[j]
    for r in res:
        print(str(r) + " ", end="")
    print("")
