print("Enter number of times and total weight: ",end="")
n, total_weight = map(int, input().split())

print("Enter %d items' value and weight in separeate lines."%n)
item = []
for i in range(n):
    value,weight = map(int, input().split())
    item.append((value,weight,value*1.0/weight))
    #this will create a list of tuples. [[value_0,weight_0,ratio_0],[value_1]
sorted_item = sorted(item, key=lambda x: x[2], reverse=True)
profit = 0
for element in sorted_item:
    if(total_weight>=element[1]):
        total_weight -= element[1]
        profit +=element[0]
    else:
        profit += total_weight * 1.0/element[1]*element[0]
        break
print("{:.3f}".format(profit))