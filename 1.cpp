#include <iostream>
using namespace std;

int main(void) {
    int sum = (int)(999/3)*(3 + 999)/2 +
              (int)(999/5)*(5 + 995)/2 -
              (int)(999/15)*(15 + 990)/2;
    cout << sum << endl;
    return 0;
}
