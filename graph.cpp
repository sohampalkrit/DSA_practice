#include <iostream>
#include <vector>
#include <queue>
#include <limits>
#include <list>
#include <unordered_map>

using namespace std;

const int INF = numeric_limits<int>::max();

struct Edge {
    int destination;
    int distance;
    int travelTime;
    int cost;
};

// Graph represented as an adjacency list
class Graph {
public:
    unordered_map<int, vector<Edge>> adjList;

    void addEdge(int src, int dest, int distance, int travelTime, int cost) {
        adjList[src].push_back({dest, distance, travelTime, cost});
        adjList[dest].push_back({src, distance, travelTime, cost}); // Assuming undirected graph
    }

    vector<int> dijkstra(int source, int n, int metric = 0) {
        vector<int> dist(n, INF);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        dist[source] = 0;
        pq.push({0, source});

        while (!pq.empty()) {
            int current = pq.top().second;
            int currentDist = pq.top().first;
            pq.pop();

            if (currentDist > dist[current]) continue;

            for (Edge edge : adjList[current]) {
                int next = edge.destination;
                int weight = (metric == 0) ? edge.distance : (metric == 1) ? edge.travelTime : edge.cost; // Choose metric

                if (dist[current] + weight < dist[next]) {
                    dist[next] = dist[current] + weight;
                    pq.push({dist[next], next});
                }
            }
        }

        return dist;
    }
};

// Taxi Booking System
class TaxiBookingSystem {
public:
    Graph graph;
    list<pair<int, int>> bookingHistory; // Doubly linked list to store booking history (Passenger, Destination)
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> taxiQueue; // Taxis sorted by proximity

    void addLocation(int src, int dest, int distance, int travelTime, int cost) {
        graph.addEdge(src, dest, distance, travelTime, cost);
    }

    void addTaxi(int location, int taxiId) {
        taxiQueue.push({location, taxiId});
    }

    void bookTaxi(int passengerLocation, int destination) {
        if (taxiQueue.empty()) {
            cout << "No taxis available!\n";
            return;
        }

        // Get the closest taxi
        int taxiLocation = taxiQueue.top().first;
        int taxiId = taxiQueue.top().second;
        taxiQueue.pop();

        // Calculate shortest path from taxi to passenger
        vector<int> taxiToPassengerDist = graph.dijkstra(taxiLocation, graph.adjList.size(), 0); // Use distance as metric
        vector<int> passengerToDestDist = graph.dijkstra(passengerLocation, graph.adjList.size(), 0);

        cout << "Taxi " << taxiId << " assigned to passenger at location " << passengerLocation << ".\n";
        cout << "Shortest path to passenger is " << taxiToPassengerDist[passengerLocation] << " units away.\n";
        cout << "Shortest path to destination is " << passengerToDestDist[destination] << " units away.\n";

        // Store booking history in doubly linked list
        bookingHistory.push_back({passengerLocation, destination});
    }

    void showBookingHistory() {
        cout << "Booking History (Passenger Location -> Destination):\n";
        for (auto &booking : bookingHistory) {
            cout << booking.first << " -> " << booking.second << "\n";
        }
    }
};

int main() {
    TaxiBookingSystem system;

    // Add locations and paths between them
    system.addLocation(0, 1, 10, 15, 5);
    system.addLocation(1, 2, 5, 10, 2);
    system.addLocation(0, 2, 20, 25, 10);
    system.addLocation(1, 3, 10, 12, 7);
    system.addLocation(2, 3, 8, 11, 4);

    // Add taxis
    system.addTaxi(0, 101);
    system.addTaxi(2, 102);
    system.addTaxi(1, 103);

    // Passenger requests
    system.bookTaxi(1, 3);  // Taxi assigned to a passenger at location 1
    system.bookTaxi(0, 2);  // Taxi assigned to a passenger at location 0

    // Display booking history
    system.showBookingHistory();

    return 0;
}
