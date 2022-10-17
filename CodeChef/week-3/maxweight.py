from audioop import reverse



# octofest
t=int(input())
while(t):
    t-=1
    n,k=map(int,input().split())
    lst=list(map(int, input().split()))
    # lst.append(100)
    # lst.append(1)
    lst.sort()
    lst=lst[::-1]
    # son=0
    # print(lst)
    s=sum(lst)-2*sum(lst[n-k:])
    ss=sum(lst[0:k])-sum(lst[k:])
    # print(sum(lst[0:k]))
    # print(ss)
    print(max(s,ss))

