n = int(input("Enter a number: "))
a = 0
b = 1
for i in range(n):
    print(a+b, end = "")
    if(i<n-1):
        print(end=" ")
    t = a+b
    a = b
    b = t
print()