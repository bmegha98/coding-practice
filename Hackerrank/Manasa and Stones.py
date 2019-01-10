def stones(n, a, b):
    first=(n-1)*min(a,b)
    l=[first]
    sum=0
    while sum+first<(n-1)*max(a,b):
        sum+=abs(b-a)
        l.append(sum+first)
    return l


if __name__ == '__main__':
    T = int(input())

    for T_itr in range(T):
        n = int(input())

        a = int(input())

        b = int(input())

        result = stones(n, a, b)
        print(' '.join(str(x) for x in result))
