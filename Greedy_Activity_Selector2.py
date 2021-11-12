n = int(input("Number of activity: "))
print("Enter activities' start and finish time.")
act = []

for i in range(n):
    sf = list(map(int, input("Activitiy %d: " %i).split()))
    act.append(sf)

sorted_act = sorted(act, key = lambda x: x[1])
# act.sort()
A = [0]
i = 0
for m in range(1,n):
    if(sorted_act[m][0] >= sorted_act[i][1]):
        A.append(m)
        i = m

print(A)
for item in A:
    print(sorted_act[item],end=" ")


