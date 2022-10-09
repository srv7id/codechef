t=int(input())
while(t):
    t-=1
    n,x,y=map(int,input().split())
    lst=list(map(int, input().split()))
    # lst.append(100)
    # lst.append(1)
    lst.sort()
    k=x*y
    safe=0
    if(lst[0]-1>k):
            safe+=lst[0]-k-1
            # print(safe)
    if(100-lst[n-1]>k):
            safe+=100-lst[n-1]-k
            # print(safe)
            
    k*=2
    for i in range (n-1):
        if(lst[i+1]-1-lst[i]>k):
            safe+=lst[i+1]-lst[i]-k-1
    
    print(safe)

