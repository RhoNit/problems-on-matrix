#include <bits/stdc++.h>
using namespace std;

int matrixTsum(int n, vector<vector<int> > matrix) {
	int sum = 0;
	for(int i = 0; i < n; ++i) {
		sum += matrix[0][i] + matrix[i][n/2];
	}
	return sum - matrix[0][n/2];
}

int main() {
	int n;
	cin >> n;
	vector<vector<int> > v(n,vector<int>(n));
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			cin >> v[i][j];
		}
	}

	int result = matrixTsum(n, v);
	cout << result << endl;
	return 0;
}
