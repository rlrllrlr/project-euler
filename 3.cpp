#include <iostream>
using namespace std;

int main(void) {

    //generate the prime sieve (false - untouched)
    bool sieve[775146] = {false};
    for(int i = 2; i < 775146; ++i) {
        if(!sieve[i]) {
            for(int j = 2; j*i < 775146; ++j) {
                sieve[i*j] = true;
            }
        }
    }

    //find the largest prime factor from the sieve
    for(int i = 775145; i > 1; --i) {
        if(!sieve[i]) {
            if(600851475143%i == 0) {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}
