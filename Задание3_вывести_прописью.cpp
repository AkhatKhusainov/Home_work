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

				if (v == 0) cout << "������ ";
				if (v == 1) cout << "���������� ";
				if (v == 2) cout << "���������� ";
				if (v == 3) cout << "���������� ";
				if (v == 4) cout << "������������ ";
				if (v == 5) cout << "���������� ";
				if (v == 6) cout << "����������� ";
				if (v == 7) cout << "���������� ";
				if (v == 8) cout << "������������ ";
				if (v == 9) cout << "������������ ";


			}
			else {
				if (v == 2) cout << "�������� ";
				if (v == 3) cout << "�������� ";
				if (v == 4) cout << "����� ";
				if (v == 5) cout << "��������� ";
				if (v == 6) cout << "���������� ";
				if (v == 7) cout << "��������� ";
				if (v == 8) cout << "����������� ";
				if (v == 9) cout << "��������� ";


			}
		}
		if (size == 7 || size == 4 || size == 1) {
			v = (a / pow(10, size - 1));
			v = v % 10;
			if (v == 1) cout << "���� ";
			if (v == 2) cout << "��� ";
			if (v == 3) cout << "��� ";
			if (v == 4) cout << "������ ";
			if (v == 5) cout << "���� ";
			if (v == 6) cout << "����� ";
			if (v == 7) cout << "���� ";
			if (v == 8) cout << "������ ";
			if (v == 9) cout << "������ ";
			if (v == 0) cout << " ";


		}
		if (size == 6 || size == 3) {


			if (v == 1) cout << "��� ";
			if (v == 2) cout << "������ ";
			if (v == 3) cout << "������ ";
			if (v == 4) cout << "��������� ";
			if (v == 5) cout << "������� ";
			if (v == 6) cout << "�������� ";
			if (v == 7) cout << "������� ";
			if (v == 8) cout << "��������� ";
			if (v == 9) cout << "��������� ";
			if (v == 0) cout << " ";

		}
		if (size == 7) cout << "��������� ";
		else if (size == 4) cout << "����� ";
		size--;

	}
}