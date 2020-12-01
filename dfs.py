visited=set()
def dfs(graph,visited,src):
    if src not in visited:
        visited.add(src)
        print(src)
        for i in graph[src]:
            dfs(graph,visited,i)
            
        
graph = {
    'A' : ['B','C'],
    'B' : ['D', 'E'],
    'C' : ['F'],
    'D' : [],
    'E' : ['F'],
    'F' : []
}


dfs(graph,visited,'A')
