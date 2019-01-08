import bisect
if __name__=='__main__':
    n=int(input())
    d=[]
    scores=list(set(map(int,input().split())))
    scores=sorted(scores)
    #print(scores)
    l=len(scores)
    m=int(input())
    alice=list(map(int,input().split()))
    for ch in alice:
        print(l-bisect.bisect_right(scores,ch)+1)
        
