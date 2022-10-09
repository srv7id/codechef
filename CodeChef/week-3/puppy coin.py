t = int(input())
while(t):
    t-=1
    n,k=map(int,input().split())
    big=int(0)
    while(k):
        if(n%k>big):
            big=n%k
        k-=1
    print(big)