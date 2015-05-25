#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

template<typename T>
void sort( T*array, int size)
{
	T hold;
	int k = 1;
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size-k; ++j) // do one less comparison after the outer for loop has iterated once
		{
			if (array[j] > array[j + 1])
			{
				hold = array[j + 1];
				array[j + 1] = array[j];
				array[j] = hold;
			}
		}
		++k;
	}
}

template<typename T>
void printarray(T*array, int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << array[i] << ' ';
	}
}
int main()
{
	int intSize = 7, doubleSize = 5, charSize = 5;
	int intArray[7] = { 65, 98, 43, 90, 54, 1, 4 };
	float doubleArray[5] = { 1.0, 2.8, 4.3, 3.3, 5.1 };
	string charArray[5] = { "kage", "yondaime", "rinbo:hengoku" };

	sort(intArray, intSize);
	sort(doubleArray, doubleSize);
	sort(charArray, charSize);

	printarray(intArray, intSize);
	cout << "\n";
	printarray(doubleArray, doubleSize);
	cout << "\n";
	printarray(charArray, charSize);

}