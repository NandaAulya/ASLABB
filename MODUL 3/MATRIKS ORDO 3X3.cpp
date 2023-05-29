#include <iostream>
using namespace std;

int main () {
	int Matriks1[3][3], Matriks2[3][3], K[3][3],i,j;
	
	cout << "=== Program Perkalian Matriks === \n\n";
	cout << "Masukan Ordo Matriks : ";
	cin>> i;
	cout << "\n\n";
	
	// matriks 1
	
	cout << "Matriks 1 \n";
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cout << "Angka ["<< i + 0 << "]["<< j + 0 << "] : ";
			cin >> Matriks1[i][j];
		}
		
		cout << "\n";
	}
	
	// matriks 2
	
	cout << "Matriks 2 \n";
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cout << "Angka ["<< i + 0 << "]["<< j + 0 << "] : ";
			cin >> Matriks2[i][j];
		}
		
		cout << "\n";
	}
	
	// cetak isi matriks 1
	
	cout << "Matriks 1 \n";
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cout << " " << Matriks1[i][j];
		}
		
		cout << "\n";
	}
	
	// cetak isi matriks 2
	
	cout << "Matriks 2 \n";
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cout << " " << Matriks2 [i][j];
		}
		
		cout << "\n";
	}
	
	// proses penjumlahan matriks
	
	for (i = 0; i < 3; i++) { 
		for (j = 0; j < 3; j++) {
			K[i][j] = Matriks1[i][j] + Matriks2 [i][j];
		}
		
		cout << "\n";
	}
	
	// hasil penjumlahan matriks 1 dan matriks 2
	
	cout << "Hasil Penjumlahan Matriks : \n"; 
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cout << " " << K[i][j];
		}
		
		cout << "\n";
	}
	
	// proses pengurangan matriks
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			K[i][j] = Matriks1[i][j] - Matriks2 [i][j];
		}
		
		cout << "\n";
	}
	
	// hasil pengurangan matriks 1 dan matriks 2
	
	cout << "Hasil Pengurangan Matriks : \n";
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cout << " " << K[i][j];
		}
		
		cout << "\n";
	}
	
	// proses perkalian matriks
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			K[i][j] = Matriks1[i][j] * Matriks2 [i][j];
		}
		
		cout << "\n";
	}
	
	// hasil perkalian matriks 1 dan matriks 2
	
	cout << "Hasil Perkalian Matriks : \n";
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cout << " " << K[i][j];
		}
		
		cout << "\n";
	}
	
	// proses pembagian matriks
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			K[i][j] = Matriks1[i][j] / Matriks2 [i][j];
		}
		
		cout << "\n";
	}
	
	// hasil pembagian matriks 1 dan matriks 2
	
	cout << "Hasil Pembagian Matriks : \n";
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cout << " " << K[i][j];
		}
		
		cout << "\n";
	}
	
	return 0;
}