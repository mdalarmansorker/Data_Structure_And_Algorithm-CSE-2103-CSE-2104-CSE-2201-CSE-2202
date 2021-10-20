from math import inf
S = int(input("Enter the Coin you want to count: "))
v = list(map(int,input("Enter the coins: ").split(' ')))
s = [float('inf')] *(S+1)
s[0] = 0
item = []
for i in range(S+1):
    temp = []
    for j in range(len(v)):
        if(v[j] <= i):
            current_value = s[i]
            possible_option = s[i-v[j]] + 1
            if(possible_option < current_value):
                s[i] = possible_option
                temp.append(v[j])       
    item.append(temp)
# print(item)
coin = []
def choosencoin(S):
    size = len(item[S])
    n = S - item[S][size-1]
    coin.insert(0,item[S][size-1])
    if(n == 0):
        return
    choosencoin(n)
print(s[S])
choosencoin(S)
print(coin)