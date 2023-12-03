#Problem 1582B
#https://codeforces.com/problemset/problem/1582/B
import sys
import heapq
from collections import Counter

input = sys.stdin.readline
############ ---- Input Functions ---- ############
def inp():
    return(int(input()))
def inlt():
    return(list(map(int,input().split())))

def intList():
    return [int(x) for x in input().split()]

def insr():
    s = input()
    return(list(s[:len(s) - 1]))
def invr():
    return(map(int,input().split()))

test_cases = inp()


def sum(n):
    #return (n * (n + 1) ) // 2
    return int(pow(2, n)) - 1

for i in range(test_cases):
    n = inp()
    array = intList()
    ones = 0
    zeroes = 0

    for a in array:
        if a == 1: ones += 1
        if a == 0: zeroes += 1
    if ones == 0:
        print("0")
        continue
    if zeroes == 0:
        print(str(ones))
        continue
    res = ones + ones*sum(zeroes)
    print(str(res))

'''

5
5
1 2 3 4 5
2
1000 1000
2
1 0
5
3 0 2 1 1
5
2 1 0 3 0
4
1 0 0 0
'''



