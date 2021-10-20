N = int(input("Enter the number of times: "))
value = input("Enter the values of %d item in order: " % N).split(' ')
value = [int(i) for i in value]
weight = input("Enter the values of %d item in order: " % N).split(' ')
weight = [int(i) for i in weight]
value.insert(0,None)
weight.insert(0,None)
W = int(input("Enter total capacity: "))
#int table[N][W]
table = [[None for i in range(W+1)] for j in range(N+1)]#[None]*10
for i in range(N+1):
    for w in range(W+1):
        if(i==0 or w==0):
            table[i][w] = 0
        elif(weight[i] > w):
            table[i][w] = table[i-1][w]
        else:
            take = value[i] + table[i-1][w-weight[i]]
            leave = table[i-1][w]
            table[i][w] = max(take,leave)
print(table[N][W])
# for k in table:
#      print(k)
i = N
w = W
item = []
while(i>0 and w>0):
    if(table[i][w] != table[i-1][w]):
        item.insert(0,i)
        w = w - weight[i]
        i = i - 1
    else:
        i = i - 1
print(item)