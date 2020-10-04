//Author: Chase Brown
//Email: cbrown54@nd.edu

#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include <iostream>
#include <cstdlib>
#include <vector>
#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
#define COUT std::cout
#define ENDL std::endl
#define PAIR std::pair
#define MKPR std::make_pair
#define LST std::list
#define GRT std::greater
#define VECT std::vector
#define PQUE std::priority_queue

typedef PAIR<int, int> iPair;

class Graph {
    int V;

    LST< PAIR<int, int> > *adj;

public:
    Graph(int val) : V(val), adj(new LST<iPair> [V]) {}  // Constructor

    void addEdge(int u, int v, int w) {
        adj[u].push_back(MKPR(v, w));
        adj[v].push_back(MKPR(u, w));
    }

    void shortestPath(int s) {

        PQUE< iPair,  VECT<iPair> , GRT<iPair> > pq;

        VECT<int> dist(V, INF);

        pq.push(MKPR(0, s));
        dist[s] = 0;

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            LST< PAIR<int, int> >::iterator i;
            for (i = adj[u].begin(); i != adj[u].end(); ++i) {
                int v = (*i).first;
                int weight = (*i).second;

                if (dist[v] > dist[u] + weight) {
                    // Updating distance of v
                    dist[v] = dist[u] + weight;
                    pq.push(MKPR(dist[v], v));
                }
            }
        }

        printf("Vertex   Distance from Source\n");
        for (int i = 0; i < V; ++i)
            printf("%d \t\t %d\n", i, dist[i]);
    }
};

#endif
