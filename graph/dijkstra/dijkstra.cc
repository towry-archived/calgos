// Copyright (c) 2016, Towry Wang (http://towry.me)
// All rights reserved.
// Use of this source code is governed by a MIT license that can be
// found in the LICENSE file.

#include <stdio.h>
#include <climits>

#define V 7
#define DEBUG false

namespace graph {

	int minDistance(int dist[], bool set[]) {
		int min = INT_MAX;
		int min_index;

		for (int v = 0; v < V; v++) {
			if (set[v] == false && dist[v] <= min) {
				min = dist[v], min_index = v;
				if (min <= 0) {
					return min_index;
				}
			}
		}

		return min_index;
	}

	void println(int dist[], int n) {
		printf("vertext distance from source\n");
		for (int i = 0; i < n; i++) {
			printf("%d \t\t %d\n", i, dist[i]);
		}
	}

	void dijkstra(int graph[V][V], int start) {
		int dist[V];
		bool s_set[V];

		// assign a disantce value to all vertices in the graph.
		for (int i = 0; i < V; i++) {
			dist[i] = INT_MAX;
			s_set[i] = false;
		}

		// from source to itself is 0.
		dist[start] = 0;

		for (int index = 0; index < V-1; index++) {
			int u = minDistance(dist, s_set);
			s_set[u] = true;
			for (int v = 0; v < V; v++) {
				if (!s_set[v] && graph[u][v] != 0 &&
					dist[u] != INT_MAX && (dist[u] + graph[u][v]) < dist[v]) {
					dist[v] = dist[u] + graph[u][v];
					DEBUG && printf("set %d - %d = %d\n", u, v, dist[v]);
				}
			}
		}

		println(dist, V);
	}
}
