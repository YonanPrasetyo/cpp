#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> gambar_pegunungan(int N) {
    if (N == 1)
    {
        return {"*"};
    }
    
    vector<string> hasil;

    string baris = string(N, '*');

    vector<string> bagian = gambar_pegunungan(N - 1);

    hasil.insert(hasil.end(), bagian.begin(), bagian.end());
    hasil.push_back(baris);
    hasil.insert(hasil.end(), bagian.begin(), bagian.end());

    return hasil;
}

int main() {
    int N;
    cin >> N;

    vector<string> hasil = gambar_pegunungan(N);

    for (string s : hasil) {
        cout << s << endl;
    }
}