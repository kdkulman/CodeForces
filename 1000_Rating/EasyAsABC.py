#https://codeforces.com/problemset/problem/1906/A
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
line1 = single_string()
line2 = single_string()
line3 = single_string()

arr = [list(line1), list(line2), list(line3)]


res = ['C', 'C', 'C']
ans = ['C', 'C', 'C']

d = {(1, 0), (-1, 0), (0, 1), (0, -1), (1, 1), (-1, -1), (1, -1), (-1, 1)}

def dfs(arr, lv, ans):
    if lv >= 3 and "".join(res) > ans:
        ans = res
        return
    for i in range(3):
        for j in range(3):
            for dx, dy in d:
                x, y = i + dx, j + dy
                if 0 <= x < 3 and 0 <= y < 3 and arr[x][y] != '.' and res[lv] > arr[x][y]:
                    temp = arr[x][y]
                    arr[i][j] = '.'
                    dfs(arr, lv+1)
                    arr[i][j] = temp

dfs(arr, 0)

print(ans)







    
