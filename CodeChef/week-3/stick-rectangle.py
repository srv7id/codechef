t=int(input())
while(t):
    t-=1
    n=int(input())
    lst=list(map(int, input().split()))
    lst.sort()
    lst=lst[::-1]
    x=0
    y=0
    i=0
    while(i<n-1):
        if(lst[i]==lst[i+1]):
            if not(x):
                x=lst[i]
                i+=1
            else:
                y=lst[i]
                break
        i+=1
    print(-1) if not(y) else print(x*y)
