#include <iostream>

using namespace std;

int main() {
    int x = 1, y = 1, t;
    int result = 0;

    while (t <= 4000000) {
        t = x + y;
        x = y;
        y = t;

        if (t % 2 == 0)
            result += t;
    }

    cout << result << endl;

    return 0;
}