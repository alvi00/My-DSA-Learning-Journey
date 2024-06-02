#include "header.h"
#include <iostream>
using namespace std;

graph::graph()
{
    numvertices=0;
}

int graph::indexis(char a)
{
    for(int i=0; i<numvertices; i++)
        if(vertices[i]==a)
        {
            return i;
        }
    return -1;
}
void graph::addvertex(char a)
{
    vertices[numvertices]=a;
    for(int i=0; i<numvertices; i++)
    {
        edges[i][numvertices]=NULL_EDGE;
        edges[numvertices][i]=NULL_EDGE;
    }
    numvertices++;
}

void graph::addedge(char from,char to,int a)
{
    int row=indexis(from);
    int col=indexis(to);
    edges[row][col]=a;
}

int graph::weightis(char from,char to)
{
    int row=indexis(from);
    int col=indexis(to);
    return edges[row][col];
}

bool graph::foundedge(char from,char to)
{
    int row=indexis(from);
    int col=indexis(to);
    if(edges[row][col]!=NULL_EDGE)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int graph::outdegree(char a)
{
    int n=0;
    int col=indexis(a);
    for(int i=0; i<numvertices; i++)
    {
        if(edges[col][i]!=NULL_EDGE)
        {
            n++;
        }
    }
    return n;
}


int graph::indegree(char a)
{
    int n=0;
    int row=indexis(a);
    for(int i=0; i<numvertices; i++)
    {
        if(edges[i][row]!=NULL_EDGE)
        {
            n++;
        }
    }
    return n;
}

void graph::bfs(char a){
    vector<bool>visited(numvertices,false);
    queue<int>q;
    int n=indexis(a);
    visited[n]=true;
    q.push(n);
   while(!q.empty()){
    int c=q.front();
    q.pop();
    cout<<vertices[c]<<"   ";
    for(int i=0;i<numvertices;i++){
        if(edges[c][i]!=NULL_EDGE && visited[i]==false){
            visited[i]=true;
            q.push(i);
        }
    }

   }
}

void graph::dfs(char a){
  vector<bool>visited(numvertices,false);
  stack<int>s;
  int n=indexis(a);
  s.push(n);
  while(!s.empty()){
    int x=s.top();
    s.pop();
    if(visited[x]==false){
        cout<<vertices[x]<<"   ";
        visited[x]=true;
    }
    for(int i=numvertices-1;i>=0;i--){
       if(edges[x][i]!=NULL_EDGE && visited[i]==false){
        s.push(i);
       }
    }
  }
  cout << endl;
}
