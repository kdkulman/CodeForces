#https://codeforces.com/problemset/problem/1904/A
import sys
import heapq
from collections import Counter

############ ---- Input Functions ---- ############
def single_int():
    return(int(input().strip()))
def multi_int():
    return(list(map(int,input().split())))
def insr():
    s = input()
    return(list(s[:len(s) - 1]))
def invr():
    return(map(int,input().split()))

input = sys.stdin.readline
test_cases = int(input().strip())
res = []
for i in range(test_cases):
    a, b = multi_int()
    xk, yk = multi_int()
    xq, yq = multi_int()

    d = {(a, b), (-a, b), (a, -b), (-a, -b), (b, a), (-b, a), (b, -a), (-b, -a)}
    king_set = set()
    for dd in d:
        king_set.add((xk+dd[0], yk+dd[1]))
    res2 = 0
    for dd in d:
        tuple = (xq+dd[0], yq+dd[1])
        if tuple in king_set: res2 += 1

    res.append(res2)
for i in res:
    print(i)
    
