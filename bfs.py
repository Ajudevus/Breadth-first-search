visited=set()
queue=[]
def bfs(graph,visited,src):
    if src not in visited:
        visited.add(src)
        queue.append(src)
    while queue:
        element=queue.pop(0)
        print(element,end=" ,")
        for i in graph[element]:
            if i not in visited:
                visited.add(i)
                queue.append(i)

 
        
graph = {
    'A' : ['B','C'],
    'B' : ['D', 'E'],
    'C' : ['F'],
    'D' : [],
    'E' : ['F'],
    'F' : []
}


bfs(graph,visited,'A')
