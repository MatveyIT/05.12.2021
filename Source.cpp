#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
int main() {
	int k, s, p;
	cin >> k >> p;
	const int n = 6;
	const int m = 8;
	int mas[n][m];
	srand(time(0));
	s = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j]=rand()% 11;
			
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			s += mas[i][j];
		}
	}
	cout << s << endl;
	return 0;
}