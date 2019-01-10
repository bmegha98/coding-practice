if __name__=='__main__':
    string=list(map(int,input().split()))
    n,m=string[0],string[1]
    maxi=0
    count=0
    inp=[input() for _ in range(n)]
    for i in range(n):
        for j in range(i+1,n):
            setmaxi=bin(int(inp[i],2) | (int(inp[j],2))).count('1')
            if setmaxi>maxi:
                maxi=setmaxi
                count=1
            elif setmaxi==maxi:
                count+=1
    print(maxi)
    print(count)
