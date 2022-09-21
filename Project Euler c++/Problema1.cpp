#include <iostream>
using namespace std;

int main()
{
	int suma = 0;
	int x = 1000;

	for(int i = 0; i < x; i++)
	{
		if(3*i < x)
			suma += 3*i;
		if(5*i < x && (5*i) % 3 != 0)
			suma += 5*i;
	}
	cout << "Suma: " << suma << endl;
	system("pause");
}
