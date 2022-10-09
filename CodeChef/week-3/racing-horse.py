import sys
t=int(input())
while(t):
    t-=1
    n=int(input())
    lst=list(map(int, input().split()))
    lst.sort()
    m=sys.maxsize
    for i in range(0,n-1):
        m=min(m,abs(lst[i]-lst[i+1]))
    print(m)