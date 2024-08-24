#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        for(int k = 2; k <= 10e9; k++){
            int p = pow(2, k) - 1;
            if(n%p == 0){
                cout << n / p << endl;
                break;
            }
        }

    }
}
