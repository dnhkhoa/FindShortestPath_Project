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

void printMap(int a[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
}


void findShortestPath(vector<int> path, int a[][SIZE], int start, int end) {

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
    findShortestPath(shortestPath, map, start, end);
    cout << "The shortest path" << shortestPath;
    cout << "The total cost is: " << computeTotalCost();
}


int main() {
    init_map(map);
    printMap(map);
    UI();
}