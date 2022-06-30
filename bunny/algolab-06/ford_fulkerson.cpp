#include <iostream>
#include <string.h>
#include<vector>
#include<chrono>
using namespace std;
int M,N;
bool dfs(vector<vector<int>>&bpg, int u,
		vector<bool>seen, vector<int>&applicant_assigned)
{
	for (int v = 0; v < N; v++)
	{
		if (bpg[u][v] && !seen[v])
		{
			seen[v] = true;

			if (applicant_assigned[v] < 0 || dfs(bpg, applicant_assigned[v],
									seen, applicant_assigned))
			{
				applicant_assigned[v] = u;
				return true;
			}
		}
	}
	return false;
}

int MaxMatch(vector<vector<int>>&bpg)
{

	vector<int>applicant_assigned(N,-1);

	int result = 0;
	for (int u = 0; u < M; u++)
	{

		vector<bool>seen(N,0);


		if (dfs(bpg, u, seen, applicant_assigned))
			result++;
	}
	return result;
}

int main()
{

cin>>N>>M;

vector<vector<int>>bpg(M,vector<int>(N));
for(int i=0;i<M;i++){
    for(int j=0;j<N;j++)
    cin>>bpg[i][j];
}
for(int i=0;i<M;i++){
    for(int j=0;j<N;j++)
    cout<<bpg[i][j]<<" ";
    cout<<endl;
}
    auto start=chrono::high_resolution_clock().now();
		int x= MaxMatch(bpg);
     auto end=chrono::high_resolution_clock().now();
    double timetaken=chrono::duration_cast<chrono::microseconds>(end-start).count();
	cout << "Maximum number of applicants that can get job is "<<x<<endl;
    cout<<"Time Taken :"<<timetaken<<" microseconds"<<endl;
	return 0;
}