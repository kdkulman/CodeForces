#https://codeforces.com/problemset/problem/1927/B
import sys
import heapq
from collections import defaultdict
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
    n = single_int()
    nums = list_int()
    res = []
    mapp = defaultdict(int)
    for j in range(97, 123):
        mapp[j] = 0

    for j in range(n):
        for key in mapp.keys():
            if mapp[key] == nums[j]:
                res.append(chr(key))
                mapp[key] += 1
                break
        
    print("".join(res))

    
#     res_list.append(res)

# for i in res_list:
#     print(i)
    
