
using namespace std;
#include <iostream>
#include <iomanip>

#include <cmath>
#include <math.h>
	void CreateArray(int* a, const int size, const int low, const int high) {
	for (int i = 0; i < size; i++) {
		a[i] = low + rand() % (high - low +1);
	}
	}
	void PrintArray(int* a, const int size) {
		cout <<" a["<<size<<"] = " << "{";
		for (int i = 0; i < size; i++) {
			cout << setw(4) << a[i];
		}
		cout << " }" << endl;
	}
	int Count(int* a, const int size) {
		int coun = 0;
		for (int i = 0; i < size; i++) {
			if (a[i] < 0 || a[i] % 2 != 0) {
				coun++;
			}
		}
		return coun;
	}
	int Sum(int* a, const int size) {
		int s = 0;
		for (int i = 0; i < size; i++) {
			if (a[i] < 0 || a[i] % 2 != 0) {
				s+=a[i];
			}
		}
		return s;
	}

	void Replace(int* a, const int size) {
		cout << "{";
		for (int i = 0; i < size; i++) {
			if (a[i] < 0 || a[i] % 2 != 0) {
				a[i] = 0;
				
			}
			cout << setw(4) << a[i];
		}
		cout << " }" << endl;

	}
int main()
{
	const int  b = 24;
	int a[b];
	int low = -50;
	int high = 15;

	cout << "Array: ";
	CreateArray(a, b, low, high);
	PrintArray(a, b);

	cout << "Numerosity " << Count(a, b)<<endl;
	cout << "Sum " << Sum(a, b) << endl;

	Replace(a, b);
	
	return 0;
}

