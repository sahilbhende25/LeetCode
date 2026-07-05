bool isLoop(int node, int visi[], int adj[]) {
    queue<pair<int,int>>q;
    q.push({node,-1});
    visi[node] = 1;
    while(!q.empty()) {
        int currNode = q.front().first;
        int parentNode = q.front().second;
        q.pop();
        for(auto & neighbors : adj[currNode]) {
            if(!visi[currNode]) {
                q.push({neighbor,currNode});
            }
            else if(parentNode != currNode) {
                return true;
            }
        }
    }
    return false;
}

bool isCycle(int V, int[] adj) {
    int visi[V] = {0};
    for(int i = 1 ; i <= V ; i++) {
        if(!visi[i])) {
            if(isLoop(i,visi,adj)) {
                return true;
            }
        }
    }
    return false;
}