// Copyright (c) 2015, Towry Wang (http://towry.me)
// All rights reserved.
// Use of this source code is governed by a MIT license that can be
// found in the LICENSE file.

#include <climits>

#define V 6

namespace graph {

  void dijkstra (int graph[V][V], int start) {
    int dist[V];

    for (int i = 0; i < V; i++) {
      dist[i] = INT_MAX;
    }

    // from source to itself is 0
    dist[start] = 0;

    for (int count = 0; count < V - 1; count++) {
      
    }
  }
}
