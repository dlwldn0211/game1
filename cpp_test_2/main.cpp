//// objective: add two numbers together
//#include <iostream>
//
//using namespace std;
//
//int add(int n1, int n2);
//
//int main() {
//	int num1, num2;
//
//	cout << "insert a number: ";
//	cin >> num1;
//
//	cout << "insert another number: ";
//	cin >> num2;
//
//	//
//	int result;
//	result = add(num1, num2);
//	cout << "result: " << num1 << " + " << num2 << " = " << result << endl;
//	return 0;
//}
//
//int add(int n1, int n2) {
//	int result;
//	result = n1 + n2;
//	return result;
//}


//double avgArray(int arr[], int size);
//
//#include <iostream>
//
//using namespace std;
//
//double avgArray(int arr[], int size);
//
//int main() {
//	int arr[5];
//
//	for (int i = 0; i < 5; i++) {
//		cout << "arr[" << i << "]: ";
//		cin >> arr[i];
//	}
//
//	cout << avgArray(arr, 5);
//
//	return 0;
//}
//
//double avgArray(int arr[], int size) {
//	double result = 0.0;
//
//	for (int i = 0; i < size; i++) {
//		result += arr[i];
//	}
//	return result / size;
//}

//bool contains(int arr[], int size, int numToFind);
//
//#include <iostream>
//
//using namespace std;
//
//bool contains(int arr[], int size, int numToFind);
//
//int main() {
//	int arr[5];
//	int numToFind;
//
//	for (int i = 0; i < 5; i++) {
//		cout << "arr[" << i << "]: ";
//		cin >> arr[i];
//	}
//
//	cout << "number to find: ";
//	cin >> numToFind;
//
//	cout << contains(arr, 5, numToFind);
//
//	return 0;
//}
//
//bool contains(int arr[], int size, int numToFind) {
//
//	for (int i = 0; i < size; i++) {
//		if (arr[i] == numToFind) {
//			return true;
//		}
//	}
//	return false;
//}

//int indexOf(int arr[], int size, int numToFind);
//  
//#include <iostream>
//
//using namespace std;
//
//int indexOf(int arr[], int size, int numToFind);
//
//int main() {
//	int arr[5];
//	int numToFind;
//
//	for (int i = 0; i < 5; i++) {
//		cout << "arr[" << i << "]: ";
//		cin >> arr[i];
//	}
//
//	cout << "number to find: ";
//	cin >> numToFind;
//
//	cout << indexOf(arr, 5, numToFind);
//
//	return 0;
//}
//
//int indexOf(int arr[], int size, int numToFind) {
//	for (int i = 0; i < size; i++) {
//		if (arr[i] == numToFind) {
//			return i;
//		}
//	}
//	return -1;
//}


//void replace(int arr[], int size, int numToFind, int numToReplace);
// 
//#include <iostream>
//
//using namespace std;
//
//void replace(int arr[], int size, int numToFind, int numToReplace);
//
//int main() {
//	int arr[5] = { 1, 2, 3, 3, 5 };
//	int numToFind;
//	int numToReplace;
//
//	cout << "number to find: ";
//	cin >> numToFind;
//
//	cout << "number to replace: ";
//	cin >> numToReplace;
//
//	replace(arr, 5, numToFind, numToReplace);
//
//	for (int i = 0; i < 5; i++) {
//		cout << arr[i] << " ";
//	}
//	return 0;
//}
//
//void replace(int arr[], int size, int numToFind, int numToReplace) {
//	for (int i = 0; i < size; i++) {
//		if (arr[i] == numToFind) {
//			arr[i] = numToReplace;
//		}
//	}
//}
 

//int countArray(int arr[], int size, int numToFind);
// 
//#include <iostream>
//
//using namespace std;
//
//#define CAPACITY 10
//
//int countArray(int arr[], int size, int numToFind);
//
//int main() {
//	int arr[CAPACITY];
//	int numToFind = 0;
//
//	for (int i = 0; i < CAPACITY; i++) {
//		cout << "arr[" << i << "]: ";
//		cin >> arr[i];
//	}
//
//	cout << "number to find: ";
//	cin >> numToFind;
//
//	int count = countArray(arr, CAPACITY, numToFind);
//	cout << count;
//
//	return 0;
//}
//
//int countArray(int arr[], int size, int numToFind) {
//	int count = 0;
//
//	for (int i = 0; i < size; i++) {
//		if (arr[i] == numToFind) {
//			count++;
//		}
//	}
//	return count;
//}


//int indexOfFirstOccur(int arr[], int size, int numToFind);
//
//#include <iostream>
//
//using namespace std;
//
//int indexOfFirstOccur(int arr[], int size, int numToFind);
//
//#define CAPACITY 10
//
//int main() {
//	int arr[CAPACITY];
//	int numToFind = 0;
//
//	for (int i = 0; i < CAPACITY; i++) {
//		cout << "arr[" << i << "]: ";
//		cin >> arr[i];
//	}
//
//	cout << "number to find: ";
//	cin >> numToFind;
//
//	int index = indexOfFirstOccur(arr, CAPACITY, numToFind);
//
//	cout << index;
//
//	return 0;
//}
//
//int indexOfFirstOccur(int arr[], int size, int numToFind) {
//	for (int i = 0; i < size; i++) {
//		if (arr[i] == numToFind) {
//			return i;
//		}
//	}
//	return -1;
//}

//int indexOfLastOccur(int arr[], int size, int numToFind);
//
//#include <iostream>
//
//using namespace std;
//
//int indexOfLastOccur(int arr[], int size, int numToFind);
//
//#define CAPACITY 10
//
//int main() {
//	int arr[CAPACITY];
//	int numToFind = 0;
//
//	for (int i = 0; i < CAPACITY; i++) {
//		cout << "arr[" << i << "]: ";
//		cin >> arr[i];
//	}
//
//	cout << "number to find: ";
//	cin >> numToFind;
//
//	int index = indexOfLastOccur(arr, CAPACITY, numToFind);
//
//	cout << index;
//
//	return 0;
//}
//
//int indexOfLastOccur(int arr[], int size, int numToFind) {
//	for (int i = size - 1; i >= 0; i--) {
//		if (arr[i] == numToFind) {
//			return i;
//		}
//	}
//	return -1;
//}

//void replaceAll(int arr[], int size, int numToFind, int numToReplace); 
// 
//#include <iostream>
//
//using namespace std;
//
//#define CAPACITY 5
//
//void replaceAll(int arr[], int size, int numToFind, int numToReplace);
//
//int main() {
//	int arr[CAPACITY];
//	int numToFind;
//	int numToReplace;
//
//	for (int i = 0; i < CAPACITY; i++) {
//		cout << "arr[" << i << "]: ";
//		cin >> arr[i];
//	}
//
//	cout << "number to find: ";
//	cin >> numToFind;
//
//	cout << "number to replace: ";
//	cin >> numToReplace;
//
//	replaceAll(arr, CAPACITY, numToFind, numToReplace);
//
//	cout << "{ ";
//	for (int i = 0; i < CAPACITY; i++) {
//		cout << arr[i];
//		if (i < CAPACITY - 1) {
//			cout << ", ";
//		}
//	}
//	cout << " }";
//
//	return 0;
//}
//
//void replaceAll(int arr[], int size, int numToFind, int numToReplace) {
//	for (int i = 0; i < size; i++) {
//		if (arr[i] == numToFind) {
//			arr[i] = numToReplace;
//		}
//	}
//	return;
//}


//void insertAfter(int arr[], int size, int numToFind, int numToInsert);
//pre-condition: numToFind != numToInsert
//int arr[10]  = 10 20 30 40 50               = 10 20 30 100 40, 50
//int size = 5;
//arr, 5, 30 100
//Run-Time Check Failure #2 - Stack around the variable 'arr' was corrupted. (fixed but confused)
//
// todo: when numToFind == numToInsert it should probably print an error message or something
// code runs but it's a little weird
//
//#include <iostream>
//
//using namespace std;
//
//#define CAPACITY 5
//
//int insertAfter(int arr[], int size, int numToFind, int numToInsert);
//
//int main() {
//	int arr[80] = { 1, 2, 3, 4, 2 };
//	int numToFind = 0;
//	int numToInsert = 0;
//	int size = 5;
//
//	cout << "number to find: ";
//	cin >> numToFind;
//
//	cout << "number to insert: ";
//	cin >> numToInsert;
//
//	size += insertAfter(arr, size, numToFind, numToInsert);
//	for (int i = 0; i < size; i++) {
//		cout << arr[i] << " ";
//	}
//	return 0;
//}
//
//int insertAfter(int arr[], int size, int numToFind, int numToInsert) {
//	int newSize = size;
//
//	for (int i = 0; i < newSize; i++) {
//		if (arr[i] == numToFind) {
//			for (int j = newSize - 1; j > i; j--) {
//				arr[j + 1] = arr[j];
//			}
//			arr[i + 1] = numToInsert;
//			newSize++;
//			i++;
//		}
//	}
//
//	return newSize - size;
//}



//bool isIncreasingOrder(int arr[], int size);
//increasing = ascending
//non-decreasing = includes same numbers
//positive does not include 0
// tested: 1, 2, 3, 4, 5 -> true v
//         1, 2, 3, 3, 5
//		   5, 4, 3, 2, 1 v
//		   4, 5, 4, 5, 4 v
// 		   5, 5, 5, 5, 5 v
// 
// non decreasing
// 
//#include <iostream>
//
//using namespace std;
//
//bool isIncreasingOrder(int arr[], int size);
//
//int main() {
//	int arr[5];
//
//	for (int i = 0; i < 5; i++) {
//		cout << "arr[" << i << "]: ";
//		cin >> arr[i];
//	}
//
//	bool result = isIncreasingOrder(arr, 5);
//	cout << result;
//
//	return 0;
//}
//
//bool isIncreasingOrder(int arr[], int size) {
//	for (int i = 1; i < size; i++) {
//		if (arr[i - 1] > arr[i]) {
//			return false;
//		}
//	}
//	return true;
//}


//bool isDecreasingOrder(int arr[], int size);
//decreasing = descending
//non-increasing = includes same numbers
// tested: 1, 2, 3, 4, 5 v
//		   5, 4, 3, 2, 1 v
//		   4, 5, 4, 5, 4 v
// 		   5, 5, 5, 5, 5 v
// 
// non increasing
//
//#include <iostream>
//
//using namespace std;
//
//bool isDecreasingOrder(int arr[], int size);
//
//int main() {
//	int arr[5];
//
//	for (int i = 0; i < 5; i++) {
//		cout << "arr[" << i << "]: ";
//		cin >> arr[i];
//	}
//
//	bool result = isDecreasingOrder(arr, 5);
//	cout << result;
//
//	return 0;
//}
//
//bool isDecreasingOrder(int arr[], int size) {
//	for (int i = 1; i < size; i++) {
//		if (arr[i - 1] < arr[i]) {
//			return false;
//		}
//	}
//	return true;
//}


// pre-conditioner: size > 0
//int getMax(int arr[], int size) {
//{ 50, 10, 40, 60, 20}
//
// 
//#include <iostream>
//
//using namespace std;
//
//int getMax(int arr[], int size);
//
//int main() {
//	int arr[10] = { 1, 2, 5, 20, 50, 2, 34, 2, 45, 9 };
//
//	int maxNum = getMax(arr, 10);
//	cout << maxNum;
//
//	return 0;
//}
//
//int getMax(int arr[], int size) {
//	int maxNum = arr[0];
//
//	for (int i = 0; i < size; i++) {
//		if (maxNum < arr[i]) {
//			maxNum = arr[i];
//		}
//	}
//	return maxNum;
//}

//// pre-conditioner: size > 0
//int getIndexOfMax(int arr[], int size) {
// 
//#include <iostream>
//
//using namespace std;
//
//int getIndexOfMax(int arr[], int size);
//
//int main() {
//	int arr[10] = { 1, 2, 5, 20, 50, 2, 34, 2, 45, 9 };
//
//	int maxNumIndex = getIndexOfMax(arr, 10);
//	cout << maxNumIndex;
//
//	return 0;
//}
//
//int getIndexOfMax(int arr[], int size) {
//	int maxNumIndex = 0;
//	for (int i = 0; i < size; i++) {
//		if (arr[maxNumIndex] < arr[i]) {
//			maxNumIndex = i;
//		}
//	}
//	return maxNumIndex;
//}





//int longestRally(int arr[], int size); // hint: nested for-loop 
//rally: https://www.ig.com/en-ch/glossary-trading-terms/rally-definition // ctrl + leftclick
//longest chain of non-decreasing sequence
//ex. { 1, 2, 3, 4, 1 } returns 4
//	  { 1, 2, 3, 2, 3, 4, 5, 6, 4, 10 } returns 5
// crying

//{ 1, 2, 3, 4, 1 } returns 4
//
//#include <iostream>
//
//using namespace std;
//
//int longestRally(int arr[], int size);
//
//int main() {
//	int arr[10] = { 1, 2, 3, 2, 3, 4, 5, 6, 4, 10 };
//
//	//for (int i = 0; i < 8; i++) {
//	//	cout << "arr[" << i << "]: ";
//	//	cin >> arr[i];
//	//}
//
//	int rally = longestRally(arr, 10);
//	cout << rally;
//	 
//	return 0;
//}
//
//int longestRally(int arr[], int size) {
//	int count = 1;
//	int highestCount = 0;
//	for (int i = 0; i < size; i++) {
//		if (i == size) {
//
//		for (int j = 0; j < size; j++) {
//			if (j + 1 != size && arr[j + 1] - arr[j] >= 0) {
//				count++;
//			}
//			if (count > highestCount) {
//				highestCount = count;
//			}
//		}
//	}
//	return highestCount;
//}
// 
////int longestRally(int arr[], int size) {
////	int count = 1;
////	int highestCount = 0;
////	for (int i = 0; i < size; i++) {
////		if (arr[i + 1] - arr[i] >= 0) {
////			count++;
////			for (int j = 0; j < size; j++) {
////				if (count > highestCount) {
////					highestCount = count;
////				}
////			}
////		}
////	}
////	return highestCount;
////}
//
////int longestRally(int arr[], int size) {
////	int count = 1;
////	int highestCount = 1;
////	for (int i = 0; i < size; i++) {
////		if (arr[i] <= arr[i + 1]) {
////			count++;
////			for (int j = 0; j < size; j++) { // save count numbers? then return highest number?
////				if (count > highestCount) {
////					highestCount = count;
////					count = 0;
////				}
////			}
////		}
////	}
////	return highestCount;
////}

// { 1, 2, 3, 2, 3, 4, 5, 6, 4, 10 } 
// i=0  1  2  3  4  5  6  7  8  9
// count=2
// highestCount=5
//int longestRally(int arr[], int size) {
//	int curCount = 1;
//	int highestCount = 0;
//	for (int i = 0; i < size; i++) {
//		if (i + 1 >= size) {
//			if (highestCount < curCount) {
//				highestCount = curCount;
//			}
//		}
//		else {
//			if (arr[i] <= arr[i + 1]) {
//				curCount++;
//			}
//			else {
//				if (highestCount < curCount) {
//					highestCount = curCount;
//				}
//				curCount = 1;
//			}
//		}
//	}
//
//	return highestCount;
//}

// int coins[] = { 1,  5, 10, 25, 100, 200 }
// int numCoins[6] = {0, 0, 0, 0, 0, 0}
//  1  5 10 25 100 200
// double numCoinsPerc[6] = {0, 0, 0, 0, 0, 0}
//int countCoins(int numCoins[], double numCoinsPerc[], int coins[], int size) {
//	for (int i = 0; i < 6; i++) {
//		numCoins[i] = 0;
//	}
//
//	for (int i = 0; i < size; i++) {
//		if (coins[i] == 1) {
//			numCoins[0]++;
//		}
//		else if (coins[i] == 5) {
//			numCoins[1]++;
//		}
//		else if (coins[i] == 10) {
//			numCoins[2]++;
//		}
//		else if (coins[i] == 25) {
//			numCoins[3]++;
//		}
//		else if (coins[i] == 100) {
//			numCoins[4]++;
//		}
//		else if (coins[i] == 200) {
//			numCoins[5]++;
//		}
//		else {
//			cout << "error: no such coin" << endl;
//			exit(1);
//		}
//	}
//
//	for (int i = 0; i < 6; i++) {
//		numCoinsPerc[i] = numCoins[i] / (double)size; // prevent truncated number by casting to (double)
//	}
//}

// count population (similar to coin + range)
// 
// each container in array has number of people in each age range
//		ex. 0-10, 11-20, 21-30, ... up to 120
//         { 0,     0,     0, ...}
//
// (double/float) calculate percentage of each age group 

//#include <iostream>
//
//using namespace std;
//
//void countPopulation(int numPopulation[], double numPopulationPerc[], int numGroups, int population[], double size);
//
//int main() {
//	int population[10000];
//	int size = 10000;
//
//	int numPopulation[12];
//	double numPopulationPerc[12];
//	int numGroups = 12;
//
//	//for (int i = 0; i < size; i++) {
//	//	cout << "population[" << i << "]: ";
//	//	cin >> population[i];
//	//}
//
//	for (int i = 0; i < size; i++) {
//		population[i] = rand() % 120;
//	}
//
//	countPopulation(numPopulation, numPopulationPerc, numGroups, population, size);
//
//	for (int i = 0; i < numGroups; i++) {
//		cout << numPopulationPerc[i] << endl;
//	}
//}
//
//void countPopulation(int numPopulation[], double numPopulationPerc[], int numGroups, int population[], double size) {
//	for (int i = 0; i < numGroups; i++) {
//		numPopulation[i] = 0;
//		numPopulationPerc[i] = 0.0;
//	}
//
//	for (int i = 0; i < size; i++) {
//		if (population[i] >= 0 && population[i] <= 10) {
//			numPopulation[0]++;
//		}
//		else if (population[i] > 10 && population[i] <= 20) {
//			numPopulation[1]++;
//		}
//		else if (population[i] > 20 && population[i] <= 30) {
//			numPopulation[2]++;
//		}
//		else if (population[i] > 30 && population[i] <= 40) {
//			numPopulation[3]++;
//		}
//		else if (population[i] > 40 && population[i] <= 50) {
//			numPopulation[4]++;
//		}
//		else if (population[i] > 50 && population[i] <= 60) {
//			numPopulation[5]++;
//		}
//		else if (population[i] > 60 && population[i] <= 70) {
//			numPopulation[6]++;
//		}
//		else if (population[i] > 70 && population[i] <= 80) {
//			numPopulation[7]++;
//		}
//		else if (population[i] > 80 && population[i] <= 90) {
//			numPopulation[8]++;
//		}
//		else if (population[i] > 90 && population[i] <= 100) {
//			numPopulation[9]++;
//		}
//		else if (population[i] > 100 && population[i] <= 110) {
//			numPopulation[10]++;
//		}
//		else if (population[i] > 110 && population[i] <= 120) {
//			numPopulation[11]++;
//		}
//		else {
//			cout << "error: enter a valid number";
//		}
//	}
//
//	for (int i = 0; i < numGroups; i++) {
//		numPopulationPerc[i] = numPopulation[i] / size;
//	}
//}

//void insertAfter

//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int arr[5] = { 1, 2, 3, 3, 4 };
//	int numToFind;
//	int numToInsert;
//
//
//	return 0;
//}
//
//void insertAfter(int arr[], int size, int numToFind, int numToInsert) {
//
//}


//int getMedian
// need help making test cases
//
//#include <iostream>
//
//using namespace std;
//
//double getMedian(int arr[], int size);
//
//#define NUM_TESTS 5
//
//int main() {
//	//int arr[40] = { 1, 2, 3, 6, 10 };
//	//int	arr[40] = { 1, 3, 4, 7, 10, 200 };
//
//	
//	int test_cases[][40] = {
//		// odd size
//		{ 1, 2, 3, 4, 5 },
//		{ 3, 6, 10, 29, 55 },
//
//		// even size
//		{ 1, 2, 3, 4, 5, 6 },
//		{ 1, 2, 4, 7, 15, 26 },
//		{ 1, 3, 4, 8, 10, 200 },
//	};
// 
//	int test_cases_size[] = {
//		// odd size
//		5,
//		5,
//
//		// even size
//		6,
//		6,
//		6,
//	};
//
//	double results[] = {
//		3,
//		10,
//
//		3.5,
//		5.5,
//		6,
//	};
//	
//	bool passed = true;
//	int errTestCase = -1;
//
//	for (int i = 0; i < NUM_TESTS && passed; i++) {
//		if (getMedian(test_cases[i], test_cases_size[i]) != results[i]) {
//			passed = false;
//			errTestCase = 1;
//		}
//	}
//
//	if (passed) {
//		cout << "passed" << endl;
//	}
//	else {
//		cout << "failed " << errTestCase << endl;
//	}
//
//
//	//cout << getMedian(arr, 6);
//
//	return 0;
//}
//
//double getMedian(int arr[], int size) {
//	int newSize = size;
//	
//	//for (int i = 0; i < newSize; i++) {
//
//		if (newSize % 2 == 1) { // odd size
//			return arr[newSize / 2];
//		}
//		else { // even size
//			double mid1 = arr[newSize / 2];
//			double mid2 = arr[newSize / 2 - 1];
//
//			double addMid = mid1 + mid2;
//			return addMid / 2;
//
//		}
//}

// GARBAGE
//double getMedian(int arr[], int size) {
//	
//	for (int i = 0; i < size; i++) {
//
//		if (size % 2 == 1) { // odd size
//			return arr[size / 2];
//		}
//		else { // even size
//			double addMid = arr[size / 2] + arr[size / 2 - 1];
//			return addMid / 2;
//
//		}
//	}
//}


//int longestRepeat()


