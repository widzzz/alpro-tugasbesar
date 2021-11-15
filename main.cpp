#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

struct buku {
	int kodeBuku, hargaSewa, jumlahBuku, stokBuku, jumlahList;
	string judulBuku;
};

struct pinjam {
    int kodePinjam, tanggalPinjam, tanggalBalik, bukuDipinjam;
	string namaPinjam, alamatPinjam;
	char statusPinjam;
};

void clearScreen() {
    int n;
    for (n = 0; n < 10; n++)
        printf( "\n\n\n\n\n\n\n\n\n\n" );
}

int main (){
    int menu;
    cout << "█░░ █ █▄▄ █▀█ ▄▀█ █▀█ █▄█   ▄▀█ █▀█ █▀█\n";
    cout << "█▄▄ █ █▄█ █▀▄ █▀█ █▀▄ ░█░   █▀█ █▀▀ █▀▀" << endl;
    cout << "============== Main Menu ==============\n";
    cout << "1. Input Buku\n";
    cout << "2. Daftar Buku\n";
    cout << "3. Peminjaman\n";
    cout << "4. Pengembalian\n";
    cout << "5. Laporan\n";
    cout << "6. Log Out dan Keluar\n";
    cout << "Masukkan Pilihan Anda [1-6] : ";
    cin >> menu;

    struct buku b[100];
    int a1;

    switch (menu) {
    case 1:
        clearScreen();
        a1++;

        cout << "\n"<< endl;	
		cout << "============= Input Buku ===============\n";
		cout << "\n" << endl;

		cout << " Masukan data buku Ke \t :" << b[a1].jumlahList << "\n";
		cout << " Kode Buku\t\t: ";
        cin  >> b[a1].kodeBuku;
        cout << "Judul buku\t\t:";
        cin  >> b[a1].judulBuku;
        cout << "Jumlah Buku\t\t";
        cin  >> b[a1].jumlahBuku;
        

        break;
    case 2:
        clearScreen();
        cout << "\n"<< endl;	
		cout << "============= Daftar Buku ===============\n";
		cout << "\n" << endl;
    default:
        break;
    }
}