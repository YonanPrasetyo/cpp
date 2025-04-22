#include <iostream>
using namespace std;

int main(){
    long long N;
    cin >> N;
    
    long long best_c = N;
    long long best_r = 1;
    for (long long r = 1; r * r <= N; r++){
        if (N % r == 0){
            long long c = N / r;
            if (r > best_r && r <= c){
                best_r = r;
                best_c = c;
            }
        }
    }
    
    cout << best_r << " " << best_c << endl;
}