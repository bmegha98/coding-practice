'''
You will be given a square chess board with one queen and a number of obstacles placed on it. Determine how many squares the queen can 
attack.
A queen is standing on an n x n chessboard. The chess board's rows are numbered from 1 to n, going from bottom to top. Its columns are
numbered from 1 to n , going from left to right. Each square is referenced by a tuple,(r,c) , describing the row, r, and column,c , 
where the square is located.
The queen is standing at position (rq,cq). 
In a single move, she can attack any square in any of the eight directions (left, right, up, down, and the four diagonals).
'''
'''
def queensAttack(n, k, r, c, obstacles):
    #Top
    tmpr=r+1
    cnt=0
    while tmpr!=(n+1):
        if [tmpr,c] in obstacles:
            break
        else:
            cnt+=1
            tmpr+=1
    #print(cnt)
    #Right
    tmpc=c+1
    while tmpc!=(n+1):
        if [r,tmpc] in obstacles:
            break
        else:
            cnt+=1
            tmpc+=1     
    #print(cnt)
    #Bottom
    tmpr=r-1
    while tmpr!=0:
        if [tmpr,c] in obstacles:
            break
        else:
            cnt+=1
            tmpr-=1
    #print(cnt)
    #Left
    tmpc=c-1
    while tmpc!=0:
        if [r,tmpc] in obstacles:
            break
        
        else:
            cnt+=1
            tmpc-=1
    #print(cnt)
    #lower right diagonal
    tmpr=r-1
    tmpc=c+1
    while tmpr!=0 and tmpc!=(n+1):
        if [tmpr,tmpc] in obstacles:
            break
        else:
            cnt+=1
            tmpr-=1
            tmpc+=1
    #print(cnt)
    #upper right diagonal
    tmpr=r+1
    tmpc=c+1
    while tmpr!=(n+1) or tmpc!=(n+1):
        if [tmpr,tmpc] in obstacles:
            break
        else:
            cnt+=1
            tmpr+=1
            tmpc+=1
    #print(cnt)
    #lower left diagonal
    tmpr=r-1
    tmpc=c-1
    while tmpr!=0 or tmpc!=0:
        if [tmpr,tmpc] in obstacles:
            break
        else:
            cnt+=1
            tmpr-=1
            tmpc-=1
    #print(cnt)
    #upper left diagonal
    tmpr=r+1
    tmpc=c-1
    while tmpr!=(n+1) and tmpc!=0:
        if [tmpr,tmpc] in obstacles:
            break
        else:
            cnt+=1
            tmpr+=1
            tmpc-=1
    print(cnt)
'''
def queensAttack(n, k, r, c, obstacles):
    l,R,t,b=c-1,n-c,n-r,r-1
    ll,lr,ul,ur=min(l,b),min(b,R),min(t,l),min(t,R)
    if len(obstacles)!=0:
        for ele in obstacles:
            if c==ele[1]:
                if r>ele[0]:b=min(b,r-1-ele[0])
                else:t=min(t,ele[0]-r-1)

            elif r==ele[0]:
                if c>ele[1]:l=min(l,c-1-ele[1])
                else:R=min(R,ele[1]-1-c)
               
            elif abs(r-ele[0])==abs(c-ele[1]):
                if r<ele[0]:
                    if c<ele[1]:ur=min(ur,ele[1]-c-1)
                    else:ul=min(ul,c-ele[1]-1)
                else:
                    if c<ele[1]:lr=min(lr,ele[1]-c-1)
                    else:ll=min(ll,c-ele[1]-1)
    return l+R+t+b+ll+lr+ul+ur
  
   


   
if __name__ == '__main__':

    nk = input().split()

    n = int(nk[0])

    k = int(nk[1])

    r_qC_q = input().split()

    r_q = int(r_qC_q[0])

    c_q = int(r_qC_q[1])

    obstacles = []

    for _ in range(k):
        obstacles.append(list(map(int, input().rstrip().split())))
    if n==1:print('0')
    else:
        print(queensAttack(n, k, r_q, c_q, obstacles))
        
