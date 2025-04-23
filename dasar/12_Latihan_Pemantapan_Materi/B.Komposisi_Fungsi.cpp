#include <iostream>
using namespace std;

int fungsi(int x, int A, int B) {
    return abs(A * x + B);
}

int main() {
    int A, B, K, x;
    cin >> A >> B >> K >> x;

    for (int i = 0; i < K; i++) {
        x = fungsi(x, A, B);
    }

    cout << x << endl;
}