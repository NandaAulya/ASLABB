#include <iostream>
using namespace std;

int main () {
	int Matriks1 [2][2], Matriks2 [2][2], N [2][2],i,j;
	
	cout << "=== Program Perkalian Matriks === \n\n";
	cout << "Masukan Matriks Ordo : ";
	cin >> i;
	cout << "\n\n";
	
	// Matriks 1
	
	cout << "Matriks 1 \n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << "Angka ["<< i + 0 << "]["<< j + 0 << "] : ";
			cin >> Matriks1[i][j];
		}
		
		cout << "\n";
	}
	
	// Matiks 2
	
	cout << "Matriks 2 \n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout <<"Angka ["<< i + 0 << "]["<< j + 0 << "] : ";
			cin >> Matriks2[i][j];
	   }
	   
	   cout << "\n";
	}
	   
	// cetak isi matriks 1
		
		cout << "Matriks 1 \n";
		for (i = 0; i < 2; i++) {
			for (j = 0; j < 2; j++) {
				cout << " " << Matriks1[i][j];
			}
			
			cout << "\n";
		}
		 
	// cetak isi Matriks 2
	   
	   cout << "Matriks 2" << endl;
	   for (i = 0; i < 2; i++) {
	   	for (j = 0; j < 2; j++) {
	   		cout << " " << Matriks2[i][j];
		   }
		   
		   cout << "\n";
	   }
	   
	   // proses penjumlahan	
	   
	   for (i = 0; i < 2; i++) {
	   	for (j = 0; j < 2; j++){
	   		N[i][j] = Matriks1[i][j] + Matriks2[i][j];
		   }
		   
		   cout << "\n";
	   }
	
	
	// hasil penjumlahan matriks 1 dan matriks 2
	
	cout << "Hasil Penjumlahan Matriks : \n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << " " << N[i][j];
		}
		
		cout << "\n";
	}
	
	//proses pengurangan matriks
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			N[i][j] = Matriks1[i][j] - Matriks2 [i][j];
		}
		
		cout << "\n";
	}
	
	// hasil pengurangan matriks 1 dan matriks 2
	
	cout << "Hasil Pengurangan Matriks : " << endl;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << " " << N[i][j];
		}
		
		cout << "\n";
	}
	//proses perkalian matriks
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			N[i][j] = Matriks1[i][j] * Matriks2 [i][j];
		}
		
		cout << "\n";
	}
	
	// hasil perkalian matriks 1 dan matriks 2
	
	cout << "Hasil Perkalian Matriks : " << endl;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << " " << N[i][j];
		}
		
		cout << "\n";
	}
	
	// proses pembagian matriks
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			N[i][j] = Matriks1[i][j] / Matriks2[i][j];
		}
		
		cout << "\n";
	}
	
	// hasil pembagian matriks 1 dan matriks 2
	
	cout << "Hasil Pembagian Matriks : " << endl;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << " " << N[i][j];
		}
		
		cout << "\n";
	}
	
	return 0;
}
	