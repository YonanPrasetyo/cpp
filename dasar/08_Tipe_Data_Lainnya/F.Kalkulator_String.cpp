#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {
    if (op != '+' && op != '*') {
        return "KESALAHAN";
    }

    vector<int> angka;

    for (string s : data) {
        angka.push_back(stoi(s));
    }

    long long hasil = (op == '+') ? 0 : 1;

    for (int x : angka) {
        if (op == '+') {
            hasil += x;
        } else {
            hasil *= x;
        }
    }

    return to_string(hasil);
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;
}
