import sys
input = sys.stdin.readline

############ ---- Input Functions ---- ############
def input_int():
    return(int(input()))
def inlt():
    return(list(map(int,input().split())))
def insr():
    s = input()
    return(list(s[:len(s) - 1]))
def input_int_list():
    input = sys.stdin.readline
    return(map(int,input().split()))

#https://codeforces.com/problemset/problem/1876/A

test_cases = input_int()

while test_cases > 0:
    n, p = input_int_list()
    a = list(input_int_list())
    b = list(input_int_list())
    print(a)
    print(b)

