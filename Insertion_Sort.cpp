#include <iostream>
#include <fstream>
//declare functions
void fillArray(int givenArray[], const int size, std::istream& inStream);
//precondition: givenArray is an array of param size indexes, inStream is opened
//postcondition: fills the array with values from inStream
void outputArray(int givenArray[], const int size, std::ostream& outStream);
//precondition: givenArray is an array of param size indexes, outStream is opened
//postcondition: outputs each value in givenArray to outStream
void insertionSort(int unsorted[], int sorted[], const int size);
//precondition: unsorted is filled with values while sorted is empty; both arrays have size indexes
//postcondition: sorts the values from unsorted[] and places them in sorted[]

//main
int main()
{
	using namespace std;
	//initialize variables
	ifstream inStream("numlist.txt");
	int unsorted[20], sorted[20];
	const int ARRAY_SIZE = 20;
	//begin program
	if (inStream.fail())
		exit(1);
	fillArray(unsorted, ARRAY_SIZE, inStream);
	insertionSort(unsorted, sorted, ARRAY_SIZE);
	//output
	cout << "The unsorted values were:\n";
	outputArray(unsorted, ARRAY_SIZE, cout);
	cout << "\nThe sorted values are:\n";
	outputArray(sorted, ARRAY_SIZE, cout);
	cout << endl;
	return 0;
}

//define functions
void fillArray(int givenArray[], const int size, std::istream& inStream)
{
	int next;
	for (int i = 0; i < size && inStream >> next; i++)
	{
		givenArray[i] = next;
	}
	return;
}
//uses iostream/fstream
void outputArray(int givenArray[], const int size, std::ostream& outStream)
{
	for (int i = 0; i < size; i++)
		outStream << givenArray[i] << " ";
	return;
}
void insertionSort(int unsorted[], int sorted[], const int size)
{
	sorted[0] = unsorted[0];
	for (int i = 1; i < size; i++)
	{
		sorted[i] = unsorted[i];
		int j = i;
		while (sorted[j] < sorted[j - 1] && sorted[j - 1] >= 0)
		{
			int temp = sorted[j - 1];
			sorted[j - 1] = sorted[j];
			sorted[j] = temp;
			j--;
		}
	}
	return;
}