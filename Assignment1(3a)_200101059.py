n = int(input())
l = []
for i in range(n):
		a,b = input().split()
		a = int(a)
		b = int(b)
		l1 = [a,b]
		l.append(l1)
c = 0
for i in range(n):
		for j in range(i+1,n):
				if(l[i][0] <= l[j][0]):
						if(l[j][0] < l[i][1]):
								c += 1
								#print("(",i+1,",",j+1,")")
				else:
						if(l[j][1] > l[i][0] and l[i][0] < l[j][1]):
								c += 1
								#print("(",i+1,",",j+1,")")
print(c)
