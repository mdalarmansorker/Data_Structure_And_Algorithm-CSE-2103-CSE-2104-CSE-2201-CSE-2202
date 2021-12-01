#import Arman
def DFS(Nodes, Adjacent_list, Color):
    result_dfs = []
    for element in Nodes:
        Color[element] = 'WHITE'
    for node in Nodes:
        if(Color[node] == 'WHITE'):
            DFS_VISIT(Nodes, Adjacent_list,Color, result_dfs, node)
    return result_dfs

def DFS_VISIT(Nodes, Adjacent_list, Color,result_dfs,u):
    result_dfs.append(u)
    Color[u] = 'GRAY'
    for element in Adjacent_list[u]:
        if(Color[element] == 'WHITE'):
            DFS_VISIT(Nodes, Adjacent_list,Color, result_dfs,element)
    Color[u] = 'BLACK'
    
        
def main():
    print("DFS Algorithm Code - Directed Graph")
    nodes = input("Enter nodes' name: ").split()
    e = int(input("Number of edges: "))
    isCycle = False

    adj = {}
    color = {}
    for element in nodes:
        adj[element] = []
    for i in range(e):
        u,v = input("Edge %d: " %(i+1)).split()
        adj[u].append(v)
        #for undriected
        # adj[v].append(u)
    result = DFS(nodes,adj,color)
    print("DFS:",result)
    print(color)

if __name__=="__main__":
    main()