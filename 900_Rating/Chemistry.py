#Problem 1883B
#https://codeforces.com/problemset/problem/1883/B
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
    input = sys.stdin.readline
    n, k = invr()
    s = insr()
    count_map = Counter(s)
    odds, evens = 0, 0
    for count in count_map.values():
        odds += (count % 2 == 1)
        evens += (count % 2 == 0)

    if  k < odds - 1: print("NO")
    else: print("YES")
"""
"""


