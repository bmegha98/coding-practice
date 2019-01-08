if __name__=='__main__':
    p=list(map(int,input().split()))
    n,k=p[0],p[1]
    num=list(set(map(int,input().split())))
    c=[0]*k
    for ch in num:
        c[ch%k]+=1
    #print(c)
    ans=min(c[0],1)
    for i in range(1,(k+1)//2):
        ans+=max(c[i],c[k-i])
    if k%2==0:
        ans+=min(1,c[k//2])
    print(ans)
