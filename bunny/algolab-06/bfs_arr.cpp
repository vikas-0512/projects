#include<bits/stdc++.h>
using namespace std;
#define NIL 0
#include<chrono>
#define INF INT_MAX
class Bipatrite_Graph
{
	
	int left, right;
	int **adj;
	int *left_parent, *right_parent, *dist;

public:
	Bipatrite_Graph(int left, int right); 
	void addEdge(int u, int v);
	bool augmenting_path();
	bool set_matching(int u);

	int hopcroftKarp();
};

int Bipatrite_Graph::hopcroftKarp()
{
	
	left_parent = new int[left+1];


	right_parent = new int[right+1];


	dist = new int[left+1];

	for (int u=0; u<=left; u++)
		left_parent[u] = NIL;
	for (int v=0; v<=right; v++)
		right_parent[v] = NIL;

	int result = 0;


	while (augmenting_path())
	{
		for (int u=1; u<=left; u++)


			if (left_parent[u]==NIL && set_matching(u))
				result++;
	}
    cout<<"Maximal Matching Edges:\n";
	for(int i=1;i<=left;i++){
       if(left_parent[i]>0){
        cout<<i<<"--"<<left_parent[i]<<endl;
	   }
	}
	return result;
}


bool Bipatrite_Graph::augmenting_path()
{
	queue<int> Q; 

	for (int u=1; u<=right; u++)
	{
		if (left_parent[u]==NIL)
		{
			dist[u] = 0;
			Q.push(u);
		}

	
		else dist[u] = INF;
	}

	dist[NIL] = INF;

	while (!Q.empty())
	{
		int u = Q.front();
		Q.pop();

		if (dist[u] < dist[NIL])
		{
            	list<int>::iterator i;
			for (int i=1; i<=right; ++i)
			{
                if(adj[u][i]==0)continue;
			int v = i;

				
				if (dist[right_parent[v]] == INF)
				{
					dist[right_parent[v]] = dist[u] + 1;
					Q.push(right_parent[v]);
				}
			}
		}
	}


	return (dist[NIL] != INF);
}

bool Bipatrite_Graph::set_matching(int u)
{
	if (u != NIL)
	{
		list<int>::iterator i;
		for (int i=1; i<=right; ++i)
			{
                if(adj[u][i]==0)continue;
			int v = i;

			if (dist[right_parent[v]] == dist[u]+1)
			{
				
				if (set_matching(right_parent[v]) == true)
				{
					right_parent[v] = u;
					left_parent[u] = v;
					return true;
				}
			}
		}

		dist[u] = INF;
		return false;
	}
	return true;
}


Bipatrite_Graph::Bipatrite_Graph(int left, int right)
{
	this->left = left;
	this->right = right;
	adj = (int**)new int*[left+1];
    for(int i=0;i<=left;i++){
        adj[i]=(int*)new int[right+1];
    }
    for(int i=0;i<=left;i++){
        for(int j=0;j<=right;j++){
            adj[i][j]=0;
        }
    }
    
}

void Bipatrite_Graph::addEdge(int u, int v)
{
	adj[u][v]=1; 
}

int main()
{
	int n,m;
	cout<<"Enter Bipatrite Vertex set sizes :";
	cin>>n>>m;
	Bipatrite_Graph g(n,m);
	cout<<"Enter Number of Edges:";
	int p,u,v;
	cin>>p;	
	for(int i=0;i<p;i++){
		cin>>u>>v;
		g.addEdge(u,v);
	}

     auto start=chrono::high_resolution_clock().now();
    int x= g.hopcroftKarp();
    auto end=chrono::high_resolution_clock().now();
    double timetaken=chrono::duration_cast<chrono::microseconds>(end-start).count();
	cout << "Size of maximum matching is "<<x<<endl;
    cout<<"Time Taken :"<<timetaken<<" microseconds"<<endl;

	return 0;
}