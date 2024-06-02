#include "header.h"
#include <iostream>
using namespace std;

int main() {
    graph g1;
    g1.addvertex('A');
    g1.addvertex('B');
    g1.addvertex('C');
    g1.addvertex('D');

    g1.addedge('A','B',1);
    g1.addedge('A','C',1);
    g1.addedge('A','D',1);

    bool a= g1.foundedge('A','B');
    bool b=g1.foundedge('B','C');
    cout<<a<<"   "<<b<<endl;
    int c=g1.indegree('B');
    int d=g1.outdegree('A');
    cout<<c<<"    "<<d<<endl;

    g1.bfs('A');
    cout<<endl;
    g1.dfs('A');

    return 0;
}
