//
//  Graph.hpp
//  DataStructures
//
//  Created by Ylst, Zachary on 3/19/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <set>
#include <queue>
#include <assert.h>

using namespace std;
template <class Type>
class Graph
{
private:
    static const int MAXIMUM = 20;
    bool adjacencyMatrix [MAXIMUM][MAXIMUM];
    int weightCostMatrix [MAXIMUM][MAXIMUM];
    Type graphData [MAXIMUM];
    int vertexCount;
    void depthFirstTransversal(Graph<Type> & graph, int vertex, bool markedVertices[]);
public:
    graph()
    //Graph Operations
    
    void addVertex(const Type& value);
    
    //Connect Vertices
    void addEdge(int souce, int target);
    void addEdgeUndirected(int source, int target);
    void addEdgeCost(int source, int target, int cost);
    
    //Disconnect Vertices
    void removeEdge(int source, int target);
    void removeEdgeUndirected(int source, int target);
    void removeEdgeCost(int source, int target);
    
    //Accessor Methods
    Type& operator [] (int vertex);
    Type operator [] (int vertex) const;
    int size() const;
    
    //Check Connections
    bool hasUndirectedConnection(int source, int target) const;
    bool areConnected(int source, int target) const;
    std :: set<int> neighbors(int vetex) const;
    
    //Transversals
    void depthFirstTransversal(Graph<Type> & graph, int vertex);
    void breadthFirstTransversal(Graph<Type> & graph, int vertex);
    int costTransversal(Graph<Type> & graph, int vertex);
};

#endif /* Graph_hpp */
