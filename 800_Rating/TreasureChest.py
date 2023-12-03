#Problem 1895
#https://codeforces.com/problemset/problem/1895/A

import sys
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
    chest, key, k = invr()
    if chest >= key:
        print(chest)
    else:
        if key - chest < k:
            print(key)
        else:
            print(key+(key-chest-k))

