#include <iostream>
#include <vector>
#include <limits>
#include <cmath>
using namespace std;

int kedekatan(int D, int xi, int xj, int yi, int yj){
    return pow(abs(xj - xi), D) + pow(abs(yj - yi), D);
}

int main() {
    int N, D;
    cin >> N >> D;

    vector<int> x(N);
    vector<int> y(N);

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    int terkecil = numeric_limits<int>::max();
    int terbesar = 0;
    int nilai_kedekatan;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            nilai_kedekatan = kedekatan(D, x[i], x[j], y[i], y[j]);
            if (nilai_kedekatan < terkecil) {
                terkecil = nilai_kedekatan;
            }
            if (nilai_kedekatan > terbesar) {
                terbesar = nilai_kedekatan;
            }
        }
    }

    cout << terkecil << " " << terbesar << endl;
}