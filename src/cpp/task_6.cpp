#include <iostream>
#include <vector>
#include <queue>
#include <climits>

class Problem6 {
public:
    static int networkDelayTime(std::vector<std::vector<int>>& times, int n, int k) {
        // Create a graph representation
        std::vector<std::vector<std::pair<int, int>>> graph(n + 1);
        for (const auto& time : times) {
            graph[time[0]].emplace_back(time[1], time[2]);
        }

        // Dijkstra's algorithm
        std::vector<int> dist(n + 1, INT_MAX);
        dist[k] = 0;
        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<>> pq;
        pq.emplace(0, k);

        while (!pq.empty()) {
            int u = pq.top().second;
            int d = pq.top().first;
            pq.pop();

            if (d > dist[u]) continue;

            for (const auto& edge : graph[u]) {
                int v = edge.first;
                int w = edge.second;
                if (dist[u] + w < dist[v]) {
                    dist[v] = dist[u] + w;
                    pq.emplace(dist[v], v);
                }
            }
        }

        // Find the maximum distance from the starting node
        int maxTime = 0;
        for (int i = 1; i <= n; ++i) {
            if (dist[i] == INT_MAX) return -1; // Some nodes are not reachable
            maxTime = std::max(maxTime, dist[i]);
        }

        return maxTime;
    }
};