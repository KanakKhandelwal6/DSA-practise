#include <stdio.h>
#include <stdbool.h>

#define MAX_NODES 5

void bfs(int graph[MAX_NODES][MAX_NODES], int start, int num_nodes) {
    bool visited[MAX_NODES] = {false};
    int queue[MAX_NODES], front = 0, rear = 0;

    queue[rear++] = start;
    visited[start] = true;

    while (front < rear) {
        int node = queue[front++];
        printf("%d ", node);

        for (int i = 0; i < num_nodes; i++) {
            if (graph[node][i] && !visited[i]) {
                queue[rear++] = i;
                visited[i] = true;
            }
        }
    }
}

void dfsUtil(int graph[MAX_NODES][MAX_NODES], int node, bool visited[], int num_nodes) {
    visited[node] = true;
    printf("%d ", node);

    for (int i = 0; i < num_nodes; i++) {
        if (graph[node][i] && !visited[i]) {
            dfsUtil(graph, i, visited, num_nodes);
        }
    }
}

void dfs(int graph[MAX_NODES][MAX_NODES], int start, int num_nodes) {
    bool visited[MAX_NODES] = {false};
    dfsUtil(graph, start, visited, num_nodes);
}

int main() {
    int graph[MAX_NODES][MAX_NODES] = {
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 1},
        {1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 0, 0, 0}
    };

    printf("BFS: ");
    bfs(graph, 0, MAX_NODES);
    printf("\nDFS: ");
    dfs(graph, 0, MAX_NODES);

    return 0;
}
