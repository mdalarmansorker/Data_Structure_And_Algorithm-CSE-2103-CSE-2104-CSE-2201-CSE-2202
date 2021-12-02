from math import inf
from queue import PriorityQueue

class Node:
    def __init__(self,name):
        self.name = name
        self.key = inf
        self.parent = None
        self.adj = [] #[[b,4],[h,8],[v,w]]
        self.visited = False

    def __lt__(self, other):
        return self.key < other.key

def dijkstra(source, nodes):
    q = PriorityQueue()

    nodes[source].key = 0
    nodes[source].parent = source
    q.put(nodes[source])

    while not q.empty():
        u = q.get()
        u.visited = True
        for element in u.adj:
            v, w = element[0], element[1]
            if(nodes[v].visited is False and nodes[v].key >(u.key + w)):
                nodes[v].key = u.key + w
                nodes[v].parent = u.name
                q.put(nodes[v])

def path_print(x,nodes):
    if nodes[x].parent in x:
        print(x, end=' ')
    if nodes[x].parent is not x:
        path_print(nodes[x].parent, nodes)
        print(x, end=' ')

def main():
    n = int(input("How many Nodes? "))
    node_name = input("Enter nodes' name: ").split()
    nodes = {}
    #nodes = {'a': name, key, parent, adj = [], visited }
    for element in node_name:
        nodes[element] = Node(element)
    
    e = int(input("How many edges? "))
    for i in range(e):
        u, v, w = input("Edge %d: " %(i+1)).split()
        nodes[u].adj.append([v,int(w)])

    s = input("Enter source vertex: ")
    dijkstra(s,nodes)
    print("Name, Key, Parent")
    for element in node_name:
        print("Vertex %s: " %nodes[element].name)
        print("Cost %d " %nodes[element].key)
        print("Path:",end = " ")
        path_print(element, nodes)
        print()

if __name__=="__main__":
    main()