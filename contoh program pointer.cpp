#include <iostream>
using namespace std;

int main()
{
	// declare variables
	int x;
	int *a;
	x=7;
	a=&x;
	
	cout << " alamat x adalah " << x << endl;
	cout << " nilai x adalah " << x << endl;
	cout << " alamat a adalah " << &a << endl;
	cout << " nilai a adalah " << a << endl;
	cout << " nilain *a adalah " << *a << endl;
	
}
