
// Number of vertices in the graph
#define V 6

namespace graph {
  void dijkstra(int [V][V], int);
}

int main () {

  // cost Θ(V*V) space
  // reprenset the graph by adjacency matrice.
  // 0 means there is no path between two vertice.
  // for an undirected graph, the matrice is symmetric.
  // see the Dijkstra_Animation.gif for a visualize view.
  int graph[V][V] = {
    {0, 7, 9, 0, 0, 14},
    {7, 0, 10, 15, 0, 0},
    {9, 10, 0, 11, 0, 2},
    {0, 15, 11, 0, 7, 0},
    {0, 0, 0, 6, 0, 9},
    {14, 0, 2, 0, 9, 0}
  };

  int start = 0;

  // will print out the paths
  graph::dijkstra(graph, start);
}
