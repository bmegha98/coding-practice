'''
An English text needs to be encrypted using the following encryption scheme. 
First, the spaces are removed from the text. Let L be the length of this text. 
Then, characters are written into a grid, whose rows and columns have the following constraints:
floor(sqrt(L)) <= row <= col <= ceil(sqrt(L))
Ensure that rows x columns >=L
If multiple grids satisfy the above conditions, choose the one with the minimum area, i.e.rows X columns .
The encoded message is obtained by displaying the characters in a column, inserting a space, and then displaying the next column and
inserting a space, and so on. You will be given a message to encode and print.
'''
import math
def encryption(s):
    L=len(s)
    sqrtL= math.sqrt(L)
    x = math.floor(sqrtL)
    y = math.ceil(sqrtL) 
    r,c=1,y
    for i in range(x,y+1):
        if i*y >= L:
            r = i
    j=0
    l=[]
    for i in range(r):
        l.append(s[j:c+j])
        j+=c
        if j>= L:break
 
    for i in range(len(l[0])):
        try:
            for ele in l:
                print(ele[i],end='')
        except IndexError:pass
        print('',end=' ')

if __name__ == '__main__':
    s = input()
    encryption(s)
