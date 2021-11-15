#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

struct buku {
	int kodeBuku, jumlahBuku, jumlahList;
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
    cout << " █░░ █ █▄▄ █▀█ ▄▀█ █▀█ █▄█   ▄▀█ █▀█ █▀█\n";
    cout << " █▄▄ █ █▄█ █▀▄ █▀█ █▀▄ ░█░   █▀█ █▀▀ █▀▀" << endl;
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
    struct pinjam p[100];
    int a1 = 0;
    
    char ynd;

    switch (menu) {
    case 1:
        clearScreen();

        cout << "\n"<< endl;	
		cout << "============= Input Buku ===============\n";
		cout << "\n" << endl;

		cout << "Masukan data buku ke " << a1+1 << "\n ";

		cout << "Kode Buku\t\t: ";
        cin  >> b[a1].kodeBuku;
        cout << "Judul buku\t\t: ";
        cin  >> b[a1].judulBuku;
        cout << "Jumlah Buku\t\t: ";
        cin  >> b[a1].jumlahBuku;
        cout << endl;

        clearScreen();
        break;

    case 2:
        clearScreen();

        cout << "\n"<< endl;	
		cout << "============= Daftar Buku ==============\n";
		cout << "\n" << endl;
        cout<<"--------------------------------------------------------------------\n";
		cout<<" No\tKode Buku\tJudul Buku\tJumlah Buku\tBuku Keluar\n";
		cout<<"--------------------------------------------------------------------\n";

        for(int c = 0; c <= a1; c++){
			int stok = b[c].jumlahBuku - p[c].bukuDipinjam;
			cout << " " << c+1 << "\t" << b[c].kodeBuku << "\t" << b[c].judulBuku << "\t" << stok << "\t" << p[c].bukuDipinjam;
			cout << endl;
		}

        char yn2;
        cout << "Kembali ke main menu (y) : ";
        cin  >> yn2;
        if (yn2 == 'y') {
            clearScreen();
        }
        break;

    case 3:
        cout << "belum jadi";
        break;
    case 4:

    case 5:

    case 6:
        clearScreen();

        char yn6;
        cout << "Apakah anda yakin ingin keluar? (y/n) ";
        cin >> yn6;

        switch (yn6) {
            case 'y':
                return 0;
            default:
                return main();
        }

    default:
        clearScreen();

        cout << "Input Error!! Tekan Huruf apapun lalu enter untuk melanjutkan: ";
        cin  >> ynd;
        if (ynd =! 0) {
            clearScreen();
            break;
        }

    } return main();
}