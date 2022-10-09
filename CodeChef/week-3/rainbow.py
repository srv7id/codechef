t=int(input())
while(t):
    t-=1
    n=int(input())
    lst=list(map(int, input().split()))
    i=0
    j=n-1
    prev=0
    flag=1
    # k=1
    # cnt=0
    if not 7 in lst:
        print('no')
        continue
    while i<=j:
        if(lst[i]!=lst[j]) :
            flag=0
            break
        if(lst[i]!=prev and lst[i]!=prev+1):
            flag=0
            break
        # if(lst[i]>=8):
        #     flag=0
        #     break
        # if(lst[i]==k):
        #     k+=1
        #     cnt+=1
        prev=lst[i]
        i+=1
        j-=1
        
    if(flag):
        print('yes')
    else:
        print('no')

# t=int(input())
# while(t):
#     t-=1
#     n=int(input())
#     lst=list(map(int, input().split()))
#     if lst != lst[::-1]:
#         print('no')
#         continue
#     s = set(lst)
#     for i in range(1,8):
#         if i not in s:
#             print('no')
#             break
#     else:
#         print('yes')