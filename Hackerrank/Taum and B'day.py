def taumBday(b, w, bc, wc, z):
    if bc>wc and wc+z<bc:
        return w*wc+b*(wc+z)
    elif wc>bc and bc+z<wc:
        return b*bc+w*(bc+z)
    return b*bc+w*wc

if __name__ == '__main__':
    t = int(input())
    for t_itr in range(t):
        bw = input().split()

        b = int(bw[0])

        w = int(bw[1])

        bcWcz = input().split()

        bc = int(bcWcz[0])

        wc = int(bcWcz[1])

        z = int(bcWcz[2])

        result = taumBday(b, w, bc, wc, z)
        print(result)
        
