#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y = 1;
    int z;
    int suma;
    
    for(y = 1; y <= 4000000; y++) {

          z = x + y;
          x = y;
          y = z;
            if(y % 2 == 0) {
                 suma += y;
                 }
            }
    cout << suma;
    cin.get();
}