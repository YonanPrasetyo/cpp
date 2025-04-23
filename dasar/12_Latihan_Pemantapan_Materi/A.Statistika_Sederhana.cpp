#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int terbesar = -100001;
    int terkecil = 100001;

    for (int i = 0; i < N; i++) {
        if (A[i] > terbesar) {
            terbesar = A[i];
        }
        if (A[i] < terkecil) {
            terkecil = A[i];
        }
    }

    cout << terbesar << " " << terkecil << endl;
}