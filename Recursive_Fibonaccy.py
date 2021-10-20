#function define
def Recursive_Fibonaccy(n):
    if(n==0 or n==1):
        c+=1
        return n
    else:
        a = Recursive_Fibonaccy(n-1)
        b = Recursive_Fibonaccy(n-2)
        c+=1
        return a+b

i = int(input("Enter a number: "))
for j in range(1,i+1):
    print(Recursive_Fibonaccy(j),end = " ",)