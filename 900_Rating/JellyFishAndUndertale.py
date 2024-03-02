#https://codeforces.com/problemset/problem/1875/A
import sys
import heapq
from collections import Counter

############ ---- Input Functions ---- ############
def single_int():
    return(int(input().strip()))
def multi_int():
    return(list(map(int,input().split())))
def list_int():
    return [int(x) for x in list(input().split())]
def invr():
    return(map(int,input().split()))

input = sys.stdin.readline
test_cases = int(input().strip())
res_list = []
for i in range(test_cases):
    a, b, n = multi_int()
    x = list_int()
    res = b
    for j in x:
        res += min(j, a-1)

    res_list.append(res)

for i in res_list:
    print(i)
    
