import math
def MERGE(A,p,q,r):
    n1 = q-p+1
    n2 = r-q
    L = [None]*n1
    R = [None]*n2
    for i in range(n1):
        L[i] = A[p+i-1]
    for j in range(n2):
        R[j] = A[q+j]
    L[n1] = 9999999999
    R[n2] = 9999999999
    i = 0
    j = 0
    for k in range(p, r+1):
        if(L[i] <= R[j]):
            A[k] = L[i]
            i = i+1
        else:
            A[k] = R[j]
            j = j+1


def MERGE_SORT(A,p,r):
    if(p<r):
        q = int((p+r)/2)
        MERGE_SORT(A,p,q)
        MERGE_SORT(A,q+1,r)
        MERGE(A,p,q,r)

a =  input("Enter your numbers: ").split(" ")
a = [int(i) for i in a]
MERGE_SORT(a,0,len(a))
