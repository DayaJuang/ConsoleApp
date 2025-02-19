#include <iostream>

using namespace std;

int main()
{
	int numbers[] = { 1,2,3 };
	int* num_ptr = numbers;

	cout << num_ptr << endl;
	cout << num_ptr + 1 << endl;
	cout << num_ptr + 2 << endl;

	return 0;
}