D = []
def dfs(u):
    # print(u, end=' ')
    D.append(u)
    color[u] = 'gray'

    for element in adj[u]:
        # if color[element] == 'gray':
        #     print("Cycle Detected")
        #     exit()
        if color[element] == 'white':
            dfs(element)
        
    color[u] = 'black'
    

nodes =  input("Enter nodes' name: ").split()
e = int(input("Number of edges: "))
isCycle = False

adj = {}
color = {}

for element in nodes:
    adj[element] = []
    color[element] = 'white'
#input the adjancy list
for i in range(e):
    u,v = input("Edge %d: " %(i+1)).split()
    adj[u].append(v)
    #for undriected
    #adj[v].append(u)

print("DFS: ", end=" ")
for member in nodes:
    if color[member] == 'white':
        # print(member)
        dfs(member)
    
print(D)
print(adj)
print(color)