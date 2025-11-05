#create adjaceny list to create this graph 

def store_list(edges):
    make_list = {}

    for edge in edges:
        u, v = edge
        if u not in make_list:
            make_list[u] =[]
        if v not in make_list:
            make_list[v]=[]
        make_list[u].append(v)
        make_list[v].append(u)
        
    return make_list

#print(store_list([[1,2] , [1,3], [2,3] , [3,4] , [3,5] , [4,5]]))
print(store_list([["a","b"],["a","c"],["b","c"],["c","d"],["c","f"],["d","e"],["e","f"],]))