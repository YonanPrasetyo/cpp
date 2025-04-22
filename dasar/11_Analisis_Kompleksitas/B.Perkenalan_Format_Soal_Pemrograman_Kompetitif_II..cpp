#include <iostream>
#include <vector>
using namespace std;

int main(){
	long long n;
	cin >> n;

	vector<long long> data;
	long long total = 0;
	for (int i = 0; i < n; i++) {
		long long x;
		cin >> x;
		data.push_back(x);
	}

	for (int i = 0; i < n; i++ ) {
		total += data[i];	
	}

	for (int i = 0; i < n; i++){
		long long cur = total - data[i];
		cout << cur << endl;
	}
}