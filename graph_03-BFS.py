from collections import defaultdict
import queue
n = int(input("n: "))
e = int(input("e: "))

adj = defaultdict(list)

for i in range(e):
    u,v = input("Edge %d: " %(i+1)).split()
    adj[u].append(v)
    adj[v].append(u)

visited = set()
q = queue.Queue(maxsize=len(adj))
s = input("Enter the source: ")
q.put(s)
visited.add(s)

print("BFS: ", end=' ')
while(not q.empty()):
    u = q.get()
    print(u, end=' ')
    for element in adj[u]:
        if(element not in visited):
            visited.add(element)
            q.put(element)

print()