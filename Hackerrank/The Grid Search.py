def gridSearch(G, P):
    flag=0
    for i in range(0,len(G)):
        if G[i].count(P[0])==1:
            index=G[i].find(P[0])
            #print(index)
            k,j=1,i+1
            while j<i+len(P) and k<len(P):
                if G[j].count(P[k])==1:
                    index2=G[j].find(P[k])
                    #print(index2)
                    if index2==index:
                        flag=0
                    else:
                        flag=1
                        break
                else:
                    flag=1
                    break
                j+=1
                k+=1
            break
            
        
        
    if flag==0:
        return 'YES'
    return 'NO'

if __name__ == '__main__':

    t = int(input())

    for t_itr in range(t):
        RC = input().split()
        R = int(RC[0])
        C = int(RC[1])
        G = []
        for _ in range(R):
            G_item = input()
            G.append(G_item)

        rc = input().split()
        r = int(rc[0])
        c = int(rc[1])
        P = []
        for _ in range(r):
            P_item = input()
            P.append(P_item)

        result = gridSearch(G, P)
        print(result)
