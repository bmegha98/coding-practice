from collections import Counter
if __name__=='__main__':
    n=int(input())
    arr=list(map(int,input().split()))
    c=Counter(arr)
    l=list(c.values())
    print(len(arr)-max(l))
