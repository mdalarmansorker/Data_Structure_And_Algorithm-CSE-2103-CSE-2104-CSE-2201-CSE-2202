n = int(input())
l = []
for i in range(n):
		a,b = input().split()
		a = int(a)
		b = int(b)
		l1 = [a,b]
		l.append(l1)
c = 0
l.sort()

for i in range(n-2):
    # first = i+1
    # last = n-1
    # while(last>=first):
    #     print("loop")
    #     middle = (first+last)//2
    #     if(l[middle][0]>l[i][1]):
    #         last = middle - 1
    #     elif(l[i][1]>l[middle][0]):
    #         print(l[i],l[middle])
    #         c = c+(middle-first)
    #         first = middle + 1
    #     if(last-first<0):
    #         break
    j = i+1
    while(j<n):
        if(l[i][1]>l[j][0]):
            c += 1
        else:
            break
        j+=1
print(c)