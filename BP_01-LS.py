# n= int(input("HOw many number? "))
# a=[]
# for i in range(n):
#     a.append(int(input()))
# print(a)
a=input("Please enter numbers: ").split(' ')
a= [int(i) for i in a]
key=int(input("Please enter key value: "))
# if key in a:
#     print('Found')
a.insert(0,key)
i=len(a) - 1

while(a[i]!=key):
    i=i-1
if(i==0):
    print("Not Found")
else:
    print("Found at position",i-1)
