#include <iostream>
#include <vector>
using namespace std;

int cek_prima(int N, int i = 2) {
    if (N <= 2) {
        return (N == 2) ? 1 : 0;
    }
    if (N % i == 0) {
        return 0;
    }
    if (i * i > N) {
        return 1;
    }
    return cek_prima(N, i + 1);
}

int main() {
    int Q;
    cin >> Q;

    vector<int> N(Q);
    for (int i = 0; i < Q; i++)
    {
        cin >> N[i];
    }

    for (int i = 0; i < Q; i++)
    {
        if (cek_prima(N[i]) == 1) {
            cout << "YA" << endl;
        } else {
            cout << "BUKAN" << endl;
        }
    }
    

}