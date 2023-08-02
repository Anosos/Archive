//sami
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    //program a
   int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int x, N;
        cin >> x >> N;
        int result = pow(x, N);
        cout << result << endl;
    }
}
