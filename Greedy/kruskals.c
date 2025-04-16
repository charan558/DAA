#include <stdio.h>
#include <limits.h>

#define INF INT_MAX

int adj[100][100];
int parent[100];

int find(int k) {
    while (k != parent[k]) {
        k = parent[k];
    }
    return k;
}

int findminedge(int *u, int *v, int n) {
    int min = INF;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (adj[i][j] != -1 && adj[i][j] < min) {
                min = adj[i][j];
                *u = i;
                *v = j;
            }
        }
    }
    return min;
}

int checkloop(int u, int v) {
    int pu = find(u);
    int pv = find(v);
    if (pu == pv) {
        return 0;
    } else {
        parent[pv] = pu;
        return 1;
    }
}

void kruskals(int n) {
    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }

    int k = n;
    while (k > 1) {
        int u, v;
        int minEdge = findminedge(&u, &v, n);
        int l = checkloop(u, v);
        if (l == 1) {
            printf("Edge: (%d, %d) with weight %d\n", u, v, minEdge);
            k--;
        }
       adj[u][v] = -1;
        adj[v][u] = -1;  
    }
}

int main() {
    int n;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix (-1 for no edge):\n");
    for (int i = 0;  i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    kruskals(n);

    return 0;
}
