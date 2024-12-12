#include<stdio.h>
#define MAX_NODES 10
#define INF 999999

void dijkstra(int graph[MAX_NODES][MAX_NODES], int source, int num_nodes){
    int dist[MAX_NODES],visited[MAX_NODES]={0};
    for(int i=0;i<num_nodes;i++){
        dist[i] = INF;

    }
    dist[source] = 0;
    for(int i=0;i<num_nodes;i++){
        int m =-1;
        for(int j=0;j<num_nodes;j++){
            if(!visited[j]&&(m==-1||dist[j]<dist[m])){
                m=j;
                }

        }
        visited[m] = 1;

        for(int v=0;v<num_nodes;v++){
            if(graph[m][v]!=0&&dist[m]+graph[m][v]<dist[v]){
                dist[v]=dist[m]+graph[m][v];
            }
        }
    }
    
    printf("Short distance from source %d:\n",source);
    for(int i=0;i<num_nodes;i++){
        if(dist[i]==INF){
            printf("%d: INF\n",i);
        }
        else{
            printf("%d: %d\n",i,dist[i]);
        }
    }
}
int main(){
    int graph[MAX_NODES][MAX_NODES]={
        {0,7,9,0,0,0},
        {7,0,10,15,0,0},
        {9,10,0,11,0,0},
        {0,15,11,0,6,0},
        {0,0,0,6,0,9},
        {0,0,0,0,9,0}
    };
    int source = 0;
    int num_nodes = 6;
    dijkstra(graph, source, num_nodes);
    return 0;
}
