#include <iostream>
using namespace std;

void penjumlahan(int matriks1[2][2], int matriks2[2][2]){
	int hasil[2][2];
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			hasil[i][j]=matriks1[i][j]+matriks2[i][j];
		}
	}
	cout << "Hasil Penjumlahan : \n";
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			cout << " " << hasil[i][j];
		}
		cout << "\n";
	}
}

void pengurangan(int matriks1[2][2], int matriks2[2][2]){
	int hasil[2][2];
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			hasil[i][j]=matriks1[i][j]-matriks2[i][j];
		}
	}
	cout << "Hasil Pengurangan : \n";
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			cout << " " << hasil[i][j];
		}
		cout << "\n";
	}
}

void perkalian(int matriks1[2][2], int matriks2[2][2]){
	int hasil[2][2];
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			for (int k = 0; k < 2; k++){
				hasil[i][j]=matriks1[i][j]*matriks2[i][j];
			}
		}
	}
	cout << "Hasil Perkalian : \n";
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			cout << " " << hasil[i][j];
		}
		cout << "\n";
	}
}

void pembagian(int matriks1[2][2], int matriks2[2][2]){
	int hasil[2][2];
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			for (int k = 0; k < 2; k++){
				hasil[i][j]=matriks1[i][j]/matriks2[i][j];
			}
		}
	}
	cout << "Hasil Pembagian : \n";
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			cout << " " << hasil[i][j];
		}
		cout << "\n";
	}
}

int main () {
	int matriks1[2][2], matriks2[2][2];
	// Matriks 1
	cout << "Matriks 1\n";
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			cout << "Angka[" << i + 0 << "][" << j + 0 << "]: ";
			cin >> matriks1[i][j];
		}
		cout << "\n";
	}
	// Matriks 2
	cout << "Matriks 2\n";
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			cout << "Aangka[" << i + 0 << "][" << j + 0 << "]: ";
			cin >> matriks2[i][j];
		}
		cout << "\n";
	}
	// Cetak isi matriks 1
	cout << "Matriks 1\n";
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			cout << " " << matriks1[i][j];
		}
		cout << "\n";
	}
	// Cetak isi matriks 2
	cout << "Matriks 2\n";
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			cout << " " << matriks2[i][j];
		}
		cout << "\n";
	}
	penjumlahan(matriks1, matriks2);
	pengurangan(matriks1, matriks2);
	perkalian(matriks1, matriks2);
	pembagian(matriks1, matriks2);
}
