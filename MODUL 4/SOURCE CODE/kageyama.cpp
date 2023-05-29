#ifndef kageyama_h_include
#define kageyama_h_include

#include <iostream>
using namespace std;

void penjumlahan(int matriks1[3][3], int matriks2[3][3]){
	int hasil[3][3];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			hasil[i][j]=matriks1[i][j]+matriks2[i][j];
		}
	}
	cout << "Hasil Penjumlahan : \n";
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << " " << hasil[i][j];
		}
		cout << "\n";
	}
}

void pengurangan(int matriks1[3][3], int matriks2[3][3]){
	int hasil[3][3];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			hasil[i][j]=matriks1[i][j]-matriks2[i][j];
		}
	}
	cout << "Hasil Pengurangan : \n";
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << " " << hasil[i][j];
		}
		cout << "\n";
	}
}

void perkalian(int matriks1[3][3], int matriks2[3][3]){
	int hasil[3][3];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			for (int k = 0; k < 3; k++){
				hasil[i][j]+=matriks1[i][k]*matriks2[k][j];
			}
		}
	}
	cout << "Hasil Perkalian : \n";
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << " " << hasil[i][j];
		}
		cout << "\n";
	}
}

void pembagian(int matriks1[3][3], int matriks2[3][3]){
	int hasil[3][3];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			for (int k = 0; k < 3; k++){
				hasil[i][j]=matriks1[i][j]/matriks2[i][j];
			}
		}
	}
	cout << "Hasil Pembagian : \n";
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << " " << hasil[i][j];
		}
		cout << "\n";
	}
}

int main () {
	int matriks1[3][3], matriks2[3][3];
	cout << "Matriks Ordo 3" << endl;
	// Matriks 1
	cout << "Matriks 1\n";
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
                for (int k = 0; k < 3; k++){
                    cout << "Angka[" << i + 0 << "][" << j + 0 << "]: ";
                    cin >> matriks1[i][j];

                }
					}
		cout << "\n";
	}
	// Matriks 2
	cout << "Matriks 2\n";
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << "Aangka[" << i + 0 << "][" << j + 0 << "]: ";
			cin >> matriks2[i][j];
		}
		cout << "\n";
	}
	// Cetak isi matriks 1
	cout << "Matriks 1\n";
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << " " << matriks1[i][j];
		}
		cout << "\n";
	}
	// Cetak isi matriks 2
	cout << "Matriks 2\n";
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << " " << matriks2[i][j];
		}
		cout << "\n";
	}
	penjumlahan(matriks1, matriks2);
	pengurangan(matriks1, matriks2);
	perkalian(matriks1, matriks2);
	pembagian(matriks1, matriks2);
}


#endif // kageyama_h_include
