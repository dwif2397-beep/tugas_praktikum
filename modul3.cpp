#include <iostream>

using namespace std;

int main()
{
	double harga, diskon, jumlahdiskon, hargasetelahdiskon;

	cout << "Masukkan harga barang: ";
	cout << "Rp. ";
	cin >> harga;

	cout << "Masukkan diskon (dalam persen): ";
	cin >> diskon;

	jumlahdiskon = harga * (diskon / 100);
	hargasetelahdiskon = harga - jumlahdiskon;

	cout << "\nHasil : " << endl;
	cout << "Harga sebelum diskon: Rp. " << harga << endl;
	cout << "Jumlah diskon: Rp. " << jumlahdiskon << endl;
	cout << "Harga setelah diskon: Rp. " << hargasetelahdiskon << endl;



	return 0;
}


