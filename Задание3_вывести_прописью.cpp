#include<iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cin >> a;
	int size = 0;
	int i = a;
	int v;
	while (i > 0) {
		size++;
		i = i / 10;

	}
	




	while (size > 0) {
		v = (a / pow(10, size - 1));
		v = v % 10;

		if (size == 8 || size == 5 || size == 2) {
			if (v == 1) {
				size--;
				v = (a / pow(10, size - 1));
				v = v % 10;

				if (v == 0) cout << "десять ";
				if (v == 1) cout << "одинадцать ";
				if (v == 2) cout << "двенадцать ";
				if (v == 3) cout << "тринадцать ";
				if (v == 4) cout << "четырнадцать ";
				if (v == 5) cout << "пятнадцать ";
				if (v == 6) cout << "шестнадцать ";
				if (v == 7) cout << "семнадцать ";
				if (v == 8) cout << "восемнадцать ";
				if (v == 9) cout << "девятнадцать ";

			
			}
			else {
				if (v == 2) cout << "двадцать ";
				if (v == 3) cout << "тридцать ";
				if (v == 4) cout << "сорок ";
				if (v == 5) cout << "пятьдесят ";
				if (v == 6) cout << "шестьдесят ";
				if (v == 7) cout << "семьдесят ";
				if (v == 8) cout << "восемьдесят ";
				if (v == 9) cout << "девяносто ";

			}
		}
		else {

			if (size == 7 || size == 4 || size == 1) {
				v = (a / pow(10, size - 1));
				v = v % 10;
				if (v == 1) cout << "один ";
				if (v == 2) cout << "две ";
				if (v == 3) cout << "три ";
				if (v == 4) cout << "четыре ";
				if (v == 5) cout << "пять ";
				if (v == 6) cout << "шесть ";
				if (v == 7) cout << "семь ";
				if (v == 8) cout << "восемь ";
				if (v == 9) cout << "девять ";
				if (v == 0) cout << " ";


			}else{

				if (size == 6 || size == 3) {


					if (v == 1) cout << "сто ";
					if (v == 2) cout << "двести ";
					if (v == 3) cout << "триста ";
					if (v == 4) cout << "четыреста ";
					if (v == 5) cout << "пятьсот ";
					if (v == 6) cout << "шестьсот ";
					if (v == 7) cout << "семьсот ";
					if (v == 8) cout << "восемьсот ";
					if (v == 9) cout << "девятьсот ";
					if (v == 0) cout << " ";
				}

			}
		}
			if (size == 7) cout << "миллионов ";
			else if (size == 4) cout << "тысяч ";
			size--;

	}
}
