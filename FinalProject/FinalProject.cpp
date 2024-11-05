#include <iostream>
#include <vector>
#include <fstream>


#define SIZE 4
using namespace std;
int map[SIZE][SIZE];

void init_map(int a[][SIZE]) {
    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        cout << "Error opening the file";
        return;
    }
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter the adjacency list of the vertex " << i << ": ";
        for (int j = 0; j < SIZE; j++) {
            inputFile >> a[i][j];
        }
        cout << endl;
    }
}

int minDistance(int dist[], bool sptSet[], int size) {
    int min = INT_MAX, min_index = -1;

    for (int v = 0; v < size; v++) {
        if (!sptSet[v] && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }

    return min_index;
}

void printMap(int a[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
}


void dijkstra(vector<int>& path, int a[SIZE][SIZE], int source) {
    
}

double computeTotalCost(vector<int> path) {
    double distance = 0;
    for (int x : path) {
        distance += x;
    }
    double parameter = 12000;
    double total = x * parameter;
    return total;
}

void UI() {
    int start, end;
    vector<int> shortestPath;
    cin >> start >> endl;
    cout << "The shortest path" << shortestPath;
    cout << "The total cost is: " << computeTotalCost();
}


int main() {
    init_map(map);
    printMap(map);
    UI();
}