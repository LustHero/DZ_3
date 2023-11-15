#include <iostream>
#include <cstring>
#include <math.h>
#include <string>
#include <fstream>
#include <algorithm>
#include <Windows.h>
#include <stdlib.h>
using namespace std;
void Za() {
	float S, p ,n;
	cout << "Введите сумму займа:   ";
	cin >> S;
	cout << "Введите процент:   ";
	cin >> p;
	cout << "Введите срок займа:   ";
	cin >> n;
	p /= 100;
	cout << "Месячная выплата равна:  " << (S * p * (pow((1 + p), n))) / (12 * ((pow((1 + p), n)) - 1));
}
void Ss() {
	float S, m , n, proc=0.1;
	cout << "Введите сумму займа:   ";
	cin >> S;
	cout << "Введите месячную выплату:   ";
	cin >> m;
	cout << "Введите на сколько берут займ:   ";
	cin >> n;
	for (float r = 0; r < 1; r += proc) {
		float Form = (S * r * (pow((1 + r), n))) / (12 * ((pow((1 + r), n)) - 1));
		if ( Form == m) {
			cout << "Процент равен:   " << r * 100;
			break;
		}
		else if ( Form > m) {
			r -= proc;
			proc *= 0.1;
		}
	}
}
void Co() {
	setlocale(0, "");
	string strok;
	ifstream fin("C:\\Users\\semen\\source\\repos\\DZ_3\\F_1.txt");
	while (getline(fin, strok)) {
		getline(fin, strok);
		cout << strok << endl;
	}
	fin.close();
}
void Fi() {
	string strok;
	ifstream fin("C:\\Users\\semen\\source\\repos\\DZ_3\\F_2.txt");
	if (fin.is_open()) {
		fin >> strok;
		fin.close();
	}
	else { cout << "Файла нет."; }
	if (!((strok[0]) >= 48 && (strok[0]) <= 57)) { cout << ""; } else { cout << strok[0]; };
	for (int i = 1; i<size(strok); i++) {
		if (!((strok[i]) >= 48 && (strok[i]) <= 57)) { cout <<""; }
		else { if ((!((strok[i-1]) >= 48 && (strok[i-1]) <= 57))) { cout << " " << strok[i]; } else { cout << strok[i]; } }
	}
}
void So() {
	string strok = "AaQWERTshsdhYUIOasjsfbutGFDSsfjsfjZXCVBNsjdfjgfnvgaaMKJHR";
	string strok2,otvet;
	for (int i = 65; i <= 122; i++) {
		for (int n = 0; n < size(strok); n++) {
			if (int(strok[n]) == i ) {
				strok2 += strok[n];
			}
		}
	}
		for (int i = 65; i <= 90; i++) {
			for (int n = 0; n < size(strok2); n++) {
				if (int(strok2[n]) == i || int(toupper(strok2[n])) == i) {
					otvet += strok2[n];
				}
			}
		}
	cout << otvet;
}
void main() {
	setlocale(LC_ALL, "Russian");
	//Za();
	//Ss();
	//Co();
	Fi();
	//So();
}