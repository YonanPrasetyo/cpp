#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M, P;
    cin >> N >> M >> P;

    vector<vector<int>> A(N, vector<int>(M));
    vector<vector<int>> B(M, vector<int>(P));

    for (int i = 0; i < N * M; i++) {
        cin >> A[i / M][i % M];
    }

    for (int i = 0; i < M * P; i++) {
        cin >> B[i / P][i % P];
    }

    int hasil;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            hasil = 0;
            for (int k = 0; k < M; k++) {
                hasil += A[i][k] * B[k][j];
            }
            cout << hasil << " ";
        }
        cout << endl;
    }
}