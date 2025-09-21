#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T>
T mymax(const vector<T>& vec) {
	T maxn = vec[0];
	for (int i = 1; i < vec.size(); i++) {
		if (vec[i] > maxn) {
			maxn = vec[i];
		}
	}
	return maxn;
}
template <typename T>
T mymin(const vector<T>& vec) {
	T minn = vec[0];
	for (int i = 1; i < vec.size(); i++) {
		if (vec[i] < minn) {
			minn = vec[i];
		}
	}
	return minn;
}
template <typename T>
void mysort(vector<T>& vec) {
	int n = vec.size();
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (vec[j] > vec[j + 1]) {
				T temp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = temp;
			}
		}
	}
}


int main()
{
	vector<int> numbers = { 5, 2, 9, 1, 5, 6 };

	cout << "Max: " << mymax(numbers) << endl;
	cout << "Min: " << mymin(numbers) << endl;

	mysort(numbers);

	cout << "Sorted: ";
	for (int num : numbers)
		cout << num << " ";
	cout << endl;

	return 0;
}


