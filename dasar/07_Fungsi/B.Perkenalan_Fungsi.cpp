#include <iostream>
using namespace std;

int biaya(int bebek) {
    if (bebek < 10) {
        return 100000 * bebek;
    } else if (bebek <= 50) {
        return 75000 * bebek;
    } else {
        return 50000 * bebek;
    }
}

int main() {
    int jantan[4] = {0, 10, 50, 60};
    int betina[4] = {7, 80, 9, 40};

    for (int i = 0; i < 4; i++) {
        int biaya_jantan = biaya(jantan[i]);
        int biaya_betina = biaya(betina[i]);

        cout << biaya_jantan + biaya_betina << endl;
    }
}
