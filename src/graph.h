//construct a graph class, reading values from csv files and store them 
//we store data in adjacency lists
#pragma once

#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <fstream>
#include <sstream>
#include <set>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <utility>

Struct Node {
    //the school number is based on the order we read data
    unsigned school_number;
    std::string name;
    unsigned cited_times;
};

Class Graph {
    public:
    //use BFS to do the traversal. The input will be a list of nodes and the output will
    //be a matrix representing the connected components while each line refers to 
    //one connected component. The time complexity will be O(V+E),
    //and the space complexity will be O(V).
    void BFS();

    private:
    void ReadSchools();
    void ReadRelations();
    void ReadEdges();
    void ReadVertices(); 
    void RefineLists();
    std::vector<Node> nodes_;
    std::vector<std::vector<Node> > adjacency_lists_;
    //raw data of universities stored in pairs
    std::vector<std::pair<std::string, int> > schools;
    std::vector<std::pair<std::string, string>> relations;

    //data after BFS for searching for connected components
    std::vector<std::vector<Node> > connected_components;
};