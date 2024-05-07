#https://codeforces.com/problemset/problem/1860/A
import sys
import heapq
from collections import Counter

############ ---- Input Functions ---- ############
def single_string():
    return(input().strip())
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
    s = single_string()
    if ")(" in s:
        res = "YES"
        pattern = "(" * (len(s)) + ")" * (len(s))
    elif "(()" in s:
        res = "YES"
        pattern = "()" * (len(s))
    elif "())" in s:
        res = "YES"
        pattern = "()" * (len(s))
    elif ")" * len(s) in s or "(" * len(s) in s:
        res = "YES"
        pattern = "()" * (len(s))
    else:
        res = "NO"

    if res == "YES":
        print(res)
        print(pattern)
    else:
        print(res)

#     res_list.append(res)

# for i in res_list:
#     print(i)
    
