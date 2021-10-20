n = int(input())
l = []
for i in range(1,n+1):
    a, b = input().split()
    a = int(a)
    b = int(b)
    s = []
    s = set(s)
    for i in range(a,b):
        s.add(i)
    l.append(s)
print(l)
c = 0
for i in range(n):
    for j in range(i+1,n):
        if(l[i].intersection(l[j])!=set()):
            print(l[i],l[j])
            c += 1
print(c)