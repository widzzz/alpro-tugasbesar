//header
#include<iostream> // Di gunakan untuk menjalankan perintah input dan output. seperti cin, cout.
#include<conio.h> // Di gunakan untuk membuat antarmuka dengan pengguna. seperti getch
#include<string> // Di gunakan untuk membaca String
#include<iomanip> // Digunakan untuk ngerapihin spasi membuat table
#include<cstdlib> // Header yang berisi fungsi-fungsi umum termasuk manajemen pengelolaan memori, pembuatan angka acak, berkomunikasi dengan environment, aritmatika, pencarian, pengurutan, dan konversi.
#include<algorithm>
using namespace std;

struct buku //membuat struktur buku
{
	int kodeB,stock;
	string judul;
	int b;
} buku[100]; //deklarasikan

struct pinjam //membuat struktur pinjam
{
	int kodepinjam,d,kB,tglpin,tglbalik,dipinjem;
	string namap;
	string alamat;
	char status;
} pinjembuku[100]; //deklarasikan

struct cari
{
    int kodeB,stock;
    string judul;
    int b;
}result[100];

void mainMenu(char& yn,char& temp, int& b, int& jmlbuk, int& a, int& c, int& e, int& f, int& g,
int& h, int& jmlpin, int& hs, int& lp, int& kodepin, int& stok, int& d, char& ch);

void inputBuku(char& yn,char& temp, int& b, int& jmlbuk, int& a, int& c, int& e, int& f, int& g,
int& h, int& jmlpin, int& hs, int& lp, int& kodepin, int& stok, int& d, char& ch);

void daftarBuku
(char& yn,char& temp, int& b, int& jmlbuk, int& a, int& c, int& e, int& f, int& g,
int& h, int& jmlpin, int& hs, int& lp, int& kodepin, int& stok, int& d, char& ch);

void pinjamBuku(char& yn,char& temp, int& b, int& jmlbuk, int& a, int& c, int& e, int& f, int& g,
int& h, int& jmlpin, int& hs, int& lp, int& kodepin, int& stok, int& d, char& ch);

void kembaliBuku(char& yn,char& temp, int& b, int& jmlbuk, int& a, int& c, int& e, int& f, int& g,
int& h, int& jmlpin, int& hs, int& lp, int& kodepin, int& stok, int& d, char& ch);

void laporanBuku(char& yn,char& temp, int& b, int& jmlbuk, int& a, int& c, int& e, int& f, int& g,
int& h, int& jmlpin, int& hs, int& lp, int& kodepin, int& stok, int& d, char& ch);

void exitProgram(char& yn,char& temp, int& b, int& jmlbuk, int& a, int& c, int& e, int& f, int& g,
int& h, int& jmlpin, int& hs, int& lp, int& kodepin, int& stok, int& d, char& ch);

void errorHandle(char& yn,char& temp, int& b, int& jmlbuk, int& a, int& c, int& e, int& f, int& g,
int& h, int& jmlpin, int& hs, int& lp, int& kodepin, int& stok, int& d, char& ch);

//body
int main(){
	system("cls"); //di gunakan untuk membersihkan layar output, karena setelah kita menjalankan isi program (program 1,2,3)

	int jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok;
	int b =-1;
	int d =-1;
	char yn,ch,temp;

	mainMenu(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);
}

void mainMenu(char& yn,char& temp, int& b, int& jmlbuk, int& a, int& c, int& e, int& f, int& g,
int& h, int& jmlpin, int& hs, int& lp, int& kodepin, int& stok, int& d, char& ch){
	char pilihan;
	cout << "---- Aplikasi Perpustakaan ----\n";
    cout << "-------- Menu ----------\n";
    cout << " 1. Input Buku        \n";
    cout << " 2. Daftar Buku       \n";
    cout << " 3. Peminjaman      \n";
    cout << " 4. Pengembalian    \n";
    cout << " 5. Laporan   \n";
    cout << " 6. Exit                \n";
    cout << "----------------------\n";
    cout << "Masukan Pilihan anda[ 1 s.d. 6 ] = ";
	cin >> pilihan;

	switch(pilihan)
	{
	case '1':
		inputBuku(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);
	case '2':
		daftarBuku(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);
	case '3':
		pinjamBuku(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);
	case '4':
		kembaliBuku(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);
	case '5':
		laporanBuku(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);
	case '6' :
		exitProgram(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);
	default:
		errorHandle(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);
	}
}

void inputBuku(char& yn,char& temp, int& b, int& jmlbuk, int& a, int& c, int& e, int& f, int& g,
int& h, int& jmlpin, int& hs, int& lp, int& kodepin, int& stok, int& d, char& ch)
{
	system("cls");
		cout<<"\n"<<endl;
		cout<<"\t\t\tInput Buku : \n"; //input buku berdasarkan jumlah  buku yang mau di input
		cout<<"\t\t\t____________________\n"<<endl;
		cout<<endl;
		b++;
			cout<<" Masukan data buku Ke \t: "<<b+1<<endl;
			cout<<" Kode Buku \t\t:";scanf("%d%c", &buku[b].kodeB, &temp);
			cout<<" judul Buku\t\t:";
			getline(cin,buku[b].judul);
			cout<<" Jumlah Buku\t\t:";scanf("%d%c", &buku[b].stock, &temp);
			cout<<endl;
			cout<<"Apakah Anda Ingin Menambahkan Data Lagi ? (y/n) :";cin>>yn;
			switch(yn)
			{
				case 'y':
					return inputBuku(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);
				default:
					cout << "\n\n Data Berhasil Disimpan \n" << endl;
					system("pause");
					system("cls");
					return mainMenu(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);
			}
		{
			cout << "\n\n Data Berhasil Disimpan \n" << endl;
			system("pause");
			system("cls");
			return mainMenu(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);
		}
}

void daftarBuku
(char& yn,char& temp, int& b, int& jmlbuk, int& a, int& c, int& e, int& f, int& g,
int& h, int& jmlpin, int& hs, int& lp, int& kodepin, int& stok, int& d, char& ch)
{
    int tempsearch;
    char searchConfirm;
	string keywords;

	system("cls");
	cout<<"\n"<<endl;
	cout<<"\t\t\tDaftar Buku"<<endl;
	cout<<"\t\t\t___________\n"<<endl;
	cout<<"------------------------------------------------------------------\n";
	cout<<" No  Kode Buku     Judul Buku        Jumlah Buku     Buku Keluar \n";
	cout<<"------------------------------------------------------------------\n";
	for(c=0;c<=b;c++){
		stok = buku[c].stock-pinjembuku[c].dipinjem;
		cout<<setw(2)<<c+1<<setw(8)<<buku[c].kodeB<<setw(22)<<buku[c].judul<<setw(14)<<stok<<setw(12)<<pinjembuku[c].dipinjem;
		cout<<endl;
	}
	cout<<endl;
	cout << "Cari judul buku\t[s]\n";
	cout << "Keluar\t[y]\n";
	cin >> searchConfirm;
	switch (searchConfirm){
    case 's':
        system("cls");
        cout << "Masukkan judul yang ingin dicari...";
        cin >> keywords;
        for(tempsearch=0;c<=b;c++){
            cari.judul[tempsearch]=find(buku.judul[tempsearch],buku.judul[100],keywords);

        }

        if (tempsearch != 100){
            std::cout << "Element found in myints: " << *p << '\n';
        } else{
            cout << "Element not found in myints\n";
        }
        cout << endl;
    default:
        break;
    }
	system("pause");
	system("cls");
	return mainMenu(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);
}

void pinjamBuku(char& yn,char& temp, int& b, int& jmlbuk, int& a, int& c, int& e, int& f, int& g,
int& h, int& jmlpin, int& hs, int& lp, int& kodepin, int& stok, int& d, char& ch)
{
	d++;
	system("cls");
	cout<<"\n"<<endl;
	cout<<"\t\t\t Transaksi Peminjaman : \n";
	cout<<"\t\t\t____________________\n"<<endl;
	cout<<endl;
	cout<<" Masukan data Pinjaman Ke \t: "<<d+1<<endl;
	cout<<" Kode Pinjaman \t\t\t:";scanf("%d%c", &pinjembuku[d].kodepinjam, &temp);
	cout<<" Kode Buku \t\t\t:";scanf("%d%c", &pinjembuku[d].kB, &temp);

	/*for(c=0;c<=b;c++){
		if(buku[c].kodeB == pinjembuku[d].kB){
			cout<<" Judul Buku \t\t\t:"<<buku[c].judul<<endl;
		}else{
			cout<<"\n Data buku Tidak Ditemukan \n";
			system("pause");
			system("cls");
			goto transaksipinjem;
		}
	}*/

	cout<<" Nama Penyewa Buku \t\t:";
	cin >> pinjembuku[d].namap;
    cin.ignore();
	cout<<" Alamat Penyewa \t\t:";
	getline(cin,pinjembuku[d].alamat);
	cout<<" Tanggal Pinjam (DDMMYYYY)\t:";scanf("%d%c", &pinjembuku[d].tglpin, &temp);
	cout<<" Tanggal Balik (DDMMYYYY)\t:";scanf("%d%c", &pinjembuku[d].tglbalik, &temp);
	lp = (pinjembuku[d].tglbalik-pinjembuku[d].tglpin)/1000000;
	cout<<" Lama Pinjaman \t\t\t:"<<lp<<" Hari"<<endl;
	cout<<" banyak buku yang di pinjam  \t:";scanf("%d%c", &pinjembuku[d].dipinjem, &temp);

	cout<<endl;
	cout<<" Status dipinjam (y) ? \t\t:";cin>>pinjembuku[d].status;
	cout<<endl;
	cout<<"Apakah Anda Ingin Menambahkan Data Lagi ? (y/n) :";cin>>yn;

	if(yn=='y'||yn=='Y'){
		return pinjamBuku(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);
	}else{
		cout << "\n\n Data Berhasil Disimpan \n" << endl;
		system("pause");
		system("cls");
		return mainMenu(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);
	}
}

void kembaliBuku(char& yn,char& temp, int& b, int& jmlbuk, int& a, int& c, int& e, int& f, int& g,
int& h, int& jmlpin, int& hs, int& lp, int& kodepin, int& stok, int& d, char& ch)
{
	system("cls");
	cout<<"\n"<<endl;
	cout<<"\t\t\tMasukan kode Peminjaman :";cin>>kodepin; //memasukan kode peminjaman
	cout<<"\t\t\t____________________\n"<<endl;
	cout<<endl;
	for(f=0;f<=d;f++){
		if(pinjembuku[f].kodepinjam==kodepin){
			cout<<" Nama Penyewa Buku \t\t:"<<pinjembuku[f].namap;
			cout<<endl;
			cout<<" Alamat Penyewa \t\t:"<<pinjembuku[f].alamat;
			cout<<endl;
			if(buku[f].kodeB==pinjembuku[f].kB){
				cout<<" Judul Buku \t\t\t:"<<buku[f].judul<<endl;
			}
			cout<<" Tanggal Pinjam (DDMMYYYY)\t:"<<pinjembuku[f].tglpin;
			cout<<endl;
			cout<<" Tanggal Balik (DDMMYYYY)\t:"<<pinjembuku[f].tglbalik;
			cout<<endl;
			lp = (pinjembuku[f].tglbalik-pinjembuku[f].tglpin)/1000000;
			cout<<" Lama Pinjaman \t\t\t:"<<lp<<" Hari"<<endl;
			cout<<endl;
			cout<<" banyak buku yang di pinjam  \t:"<<pinjembuku[f].dipinjem;
			cout<<endl;
			cout<<" Status : "<<pinjembuku[f].status;
			if((pinjembuku[f].status == 'y') || (pinjembuku[f].status == 'Y')){
				cout<<" (di Pinjam) "<<endl;
			} else{
				cout<<" (di kembalikan) "<<endl;
			}
			cout<<endl;
			cout<<" Sudah di kembalikan ? (y/n) : ";cin>>yn;
			if((yn == 'Y') || (yn == 'y')){
				cout<<" ganti status ( input n ) :";
				cin>>pinjembuku[f].status;
				cout << "\n\n Data Berhasil Disimpan \n" << endl;
				system("pause");
				system("cls");
				return mainMenu(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);
			} else{
				cout << "\n\n Data Berhasil Disimpan \n" << endl;
				system("pause");
				system("cls");
				return mainMenu(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);
			}
		} else{
			cout << "\n\n Data Tidak Di temukan \n" << endl;
			cout<<" Apakah ingin mengulang kembali ? (y/n) : ";cin>>yn;
			if(yn == 'Y' || yn == 'y'){
				system("cls");
				return kembaliBuku(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);
			}else{
				system("cls");
				return mainMenu(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);;
			}
		}
	}
}

void laporanBuku(char& yn,char& temp, int& b, int& jmlbuk, int& a, int& c, int& e, int& f, int& g,
int& h, int& jmlpin, int& hs, int& lp, int& kodepin, int& stok, int& d, char& ch)
{
	system("cls");
	cout<<"\n"<<endl;
	cout<<"\t\t\t laporan Perpustakaan\n";
	cout<<"\t\t\t____________________\n"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------\n";
	cout<<" No  Kode Peminjam  Judul Buku  Nama Peminjam    Alamat           Tanggal Pinjam  Tanggal Balik   Status   Buku Keluar \n";
	cout<<"-----------------------------------------------------------------------------------------------------------------------\n";
	for(g=0;g<=b;g++){
		if(pinjembuku[g].kB==buku[g].kodeB){
			cout<<setw(2)<<g+1<<setw(10)<<pinjembuku[g].kodepinjam<<setw(13)<<buku[g].judul<<setw(12)<<pinjembuku[g].namap<<setw(14)<<pinjembuku[g].alamat<<setw(20)<<pinjembuku[g].tglpin<<setw(10)<<pinjembuku[g].tglbalik<<setw(12)<<pinjembuku[g].status;
			if((pinjembuku[g].status == 'y') || (pinjembuku[g].status == 'Y')){
				cout<<" (di Pinjam) "<<endl;
			} else{
				cout<<" (di kembalikan) "<<endl;
			}
			cout<<setw(12)<<pinjembuku[g].dipinjem;
			cout<<endl;
		}
	}
	system("pause");
	system("cls");
	return mainMenu(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);
}

void exitProgram(char& yn,char& temp, int& b, int& jmlbuk, int& a, int& c, int& e, int& f, int& g,
int& h, int& jmlpin, int& hs, int& lp, int& kodepin, int& stok, int& d, char& ch)
{
	char exitConfirm;
	cout << "Apakah anda yakin ingin keluar?(y/n)...";
	cin >> exitConfirm;

	switch(exitConfirm){
		case 'y':
			exit(0);
		case 'n':
			return mainMenu(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);
		default:
			return exitProgram(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);
	}
}

void errorHandle(char& yn,char& temp, int& b, int& jmlbuk, int& a, int& c, int& e, int& f, int& g,
int& h, int& jmlpin, int& hs, int& lp, int& kodepin, int& stok, int& d, char& ch)
{
	char errorConfirm;
	cout << "Error! Masukkan (y) untuk melanjutkan...";
	cin >> errorConfirm;

	switch(errorConfirm)
	{
	case 'y':
		return mainMenu(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);
	default:
		return errorHandle(yn,temp,b,jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,d,ch);
	}
}
