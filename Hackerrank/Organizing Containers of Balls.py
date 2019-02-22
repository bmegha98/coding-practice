'''
David has several containers, each with a number of balls in it. He has just enough containers to sort each type of ball he has into its 
own container. David wants to sort the balls using his sort method.
In a single operation, David can swap two balls located in different containers.
David wants to perform some number of swap operations such that:

Each container contains only balls of the same type.
No two balls of the same type are located in different containers.
You must perform q queries where each query is in the form of a matrix, M. For each query, print 'Possible' on a new line if David can 
satisfy the conditions above for the given matrix. Otherwise, print 'Impossible'.
'''
// Matrix should be symmetric i.e M = transpose(M).

def organizingContainers(container):
    string='Impossible'
    containercapacity=[sum(ele) for ele in container]
    containercapacity.sort()
    ballnumber=[]
    for i in range(len(container)):
        lst=[]
        for j in range(len(container)):
            lst.append(container[j][i])
        ballnumber.append(sum(lst))
    ballnumber.sort()
    if ballnumber == containercapacity:
        string='Possible'
    return string

if __name__ == '__main__':
    q = int(input())

    for q_itr in range(q):
        n = int(input())

        container = []

        for _ in range(n):
            container.append(list(map(int, input().rstrip().split())))

        result = organizingContainers(container)
        print(result)
