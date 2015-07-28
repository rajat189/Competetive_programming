#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
void printways(vector<vector<int64_t>>& solvec, const vector<int>& coinvec, const
int sum) {
	
	for(int i=1; i<=coinvec.size(); i++) {
		for(int j=1; j<=sum; j++) {
			if(coinvec[i-1] <= j)
            {
				int64_t ways = solvec[i-1][j] + solvec[i][j-coinvec[i-1]];
				solvec.at(i).push_back(ways);
			}
			else {
				int64_t ways = solvec[i-1][j];
				solvec.at(i).push_back(ways);
			}
		}
	}
	cout << solvec[coinvec.size()][sum] << endl;
}
int main() {
	int numcoins, sum;
	vector<int> coinvec;
	vector<vector<int64_t>> solvec;
	cin >> sum >> numcoins;
	while(numcoins--) {
		int c;
		cin >> c;
		coinvec.push_back(c);
	}
	for(int i=0; i<=coinvec.size(); i++) {
		solvec.push_back(vector<int64_t>());
		solvec.at(i).push_back(1);
	}

	for(int i=1; i<=sum; i++)
		solvec.at(0).push_back(0);

	printways(solvec, coinvec, sum);
}