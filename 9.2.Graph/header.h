#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
const int max_item=100;
const int NULL_EDGE=0;
#include<bits/stdc++.h>
class graph{

private:
    int numvertices;
    char vertices[max_item];
    char edges[max_item][max_item];
    int indexis(char);
public:
    graph();
    void addvertex(char);
    void addedge(char,char,int);
    int weightis(char,char);
    bool foundedge(char,char);
    int outdegree(char);
    int indegree(char);
    void bfs(char);
    void dfs(char);
};

#endif // HEADER_H_INCLUDED
