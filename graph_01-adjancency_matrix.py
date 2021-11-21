n = int(input("How many nodes? "))
e = int(input("How many Edges? "))

adj = [[0 for i in range(n)] for i in range(n)]

print("Enter edges' information in separate lines. ")
for i in range(e):
    u, v = map(int, input("Edge %d: " %(i+1)).split())
    adj[u][v] = 1
    adj[v][u] = 1

for line in adj:
    for element in line:
        print(element, end=' ')
    print()