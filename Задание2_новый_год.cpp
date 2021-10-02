#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int d;
	int m;
	int s;
	cout << "введите день" << endl;
	cin >> d;
	cout << "введите месяц" << endl;
	cin >> m;
	if (m <= 12 && d <= 31) {
		if (m == 1) {
			s = d;
		}
		else {
			if (m == 2) {
				s = (m - 1) * 31 + d;
			}if (m > 2 && m <= 8) {
				s = (m - 1) * 31 - 3 - ((m - 3) / 2) + d;
			}if (m > 8) {
				s = (m - 1) * 31 - 3 - ((m - 4) / 2) + d;
			}
		}
		s = 365 - s;
		cout << s;
	}
	else {
		cout << "error";
	}

}
