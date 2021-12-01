def make_set(x):
    parent[x] = x
    rank[x] = 0

def find_set(x):
    if parent[x] is not x:
        parent[x] = find_set(parent[x])
    
    return parent[x]

def union_set(x, y):
    if rank[x] > rank[y]:
        parent[y] = x
    else:
        parent[x] = parent[y]
        if rank[x] == rank[y]:
            rank[y] += 1

def kruskal():
    mst_weight = 0
    selected_edge = []
    for node in nodes_name:
        make_set(node)

    sorted_edge = sorted(edges, key = lambda x: x[2])
    for edge in sorted_edge:
        u, v, w = edge[0], edge[1], edge[2]
        parent_u = find_set(u)
        parent_v = find_set(v)

        if parent_u != parent_v:
            selected_edge.append(edge)
            mst_weight += w
            union_set(parent_u, parent_v)

    print("MST Weight: ", mst_weight)
    for element in selected_edge:
        print(element)

parent = {} #{'a': 'h'}
rank = {} #{'a': 0}
edges = [] #[u, v, w]

n = int(input("How many nodes? "))
nodes_name = input("Enter nodes' name: ").split()

e = int(input("How many edges? "))
for i in range(e):
    u, v, w = input("Edge %d: " %(i+1)).split()
    edges.append([u,v,int(w)])

kruskal()
