import queue

def dfs(u):
    color[u] = 'gray'

    for element in adj[u]:
        if color[element] == 'white':
            dfs(element)
        
    color[u] = 'black'
    stack.put(u)
    

nodes =  input("Enter nodes' name: ").split()
e = int(input("Number of edges: "))
isCycle = False

adj = {}
color = {}
stack = queue.LifoQueue(maxsize=(len(nodes)))
for element in nodes:
    adj[element] = []
    color[element] = 'white'

for i in range(e):
    u,v = input("Edge %d: " %(i+1)).split()
    adj[u].append(v)
    #for undriected
    # adj[v].append(u)

print("DFS: ", end=" ")
for member in nodes:
    if color[member] == 'white':
        dfs(member)

print("Topoological sort: ")
while not stack.empty():
    x = stack.get()
    print(x,end=' ')