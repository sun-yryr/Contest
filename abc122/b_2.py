# -*- coding: utf-8 -*-
n,q = [int(i) for i in input().split()]
s = input()
l = []
r = []
memo = [0] * 100001
for i in range(q):
    x,y=[int(i) for i in input().split()]
    l.append(x)
    r.append(y)
#カウントの処理は1回
for i in range(len(s)):
    if i==0:
        continue
    else:
        memo[i] = memo[i-1] + s[i-1:i+1].count("AC")

for i in range(q):
    print(memo[r[i]-1]-memo[l[i]-1])