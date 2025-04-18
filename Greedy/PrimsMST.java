

import java.util.*;

public class PrimsMST {
    private static final int V = 6;  // Number of vertices in the graph

    int minKey(int key[], boolean mstSet[]) {
        int min = Integer.MAX_VALUE, minIndex = -1;

        for (int v = 0; v < V; v++) {
            if (!mstSet[v] && key[v] < min) {
                min = key[v];
                minIndex = v;
            }
        }

        return minIndex;
    }

    void printMST(int parent[], int graph[][]) {
        System.out.println("Edge \tWeight");
        for (int i = 1; i < V; i++) {
            System.out.println(parent[i] + " - " + i + "\t" + graph[i][parent[i]]);
        }
    }

    void primMST(int graph[][])
    {
        int parent[] = new int[V]; // Array to store constructed MST
        int key[] = new int[V];    // Key values used to pick minimum weight edge in cut
        boolean mstSet[] = new boolean[V]; // To represent set of vertices included in MST

        Arrays.fill(key, Integer.MAX_VALUE); // Initialize all keys as INFINITE
        key[0] = 0; // Make key 0 so that this vertex is picked as first vertex
        parent[0] = -1; // First node is always root of MST

        for (int count = 0; count < V - 1; count++) {
            int u = minKey(key, mstSet);
            mstSet[u] = true;

            for (int v = 0; v<V; v++) {
                if (graph[u][v] != 0 && !mstSet[v] && graph[u][v] < key[v]) {
                    parent[v] = u;
                    key[v] = graph[u][v];
                }
            }
        }

        printMST(parent, graph);
    }

    public static void main(String[] args) {
        PrimsMST t = new PrimsMST();
        int graph[][] = new int[][] {
            {0, 5, 0, 0, 0, 3},
            {5, 0, 4, 0, 2, 0},
            {0, 4, 0, 3, 0, 4},
            {0, 0, 3, 0, 8, 0},
            {0, 2, 0, 8, 0, 7},
            {3, 0, 4, 0, 7, 0}
        };

        t.primMST(graph);
    }
}


