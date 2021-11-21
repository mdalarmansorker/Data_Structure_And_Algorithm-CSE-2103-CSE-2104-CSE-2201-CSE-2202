# adj = {'A':['B','C','D'],'B':['A','D'],'C':['A']}
n = int(input("How many nodes?: "))
e = int(input("How many edges?: "))

# adj = {}
adj = defaultdict(list)

print("Edges' information.")
for i in range(e):
    u,v = input("Edge %d: " %(i+1)).split()
    adj[u].append(v)
    adj[v].append(u)
    # if(u not in adj):
    #     adj[u] = [v]
    # else:
    #     adj[u].append(v)
    # if(v not in adj):
    #     adj[v] = [u]
    # else:
    #     adj[v].append(u)

print(adj)
