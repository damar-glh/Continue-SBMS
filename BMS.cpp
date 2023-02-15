#include <iostream>
using namespace std;


/*
         Informasi Tentang Project
Nama Project       : Lanjutan Sistem Manajemen Toko Buku Sederhana
DIbuat Oleh        : Damar Galih
Jurusan            : Informatika
Kelas              : IF-11
Tanggal Pembuatan  : Mulai 17/01/2023
Tentang Project    : Project ini bertujuan untuk meengerjakan UAS Algoritma dan Pemrograman Semester 1
*/


// struct menyimpan data buku
struct buku {
	int no;
    string judul, penulis;
    int harga;
    int total;
};


// function merubah warna
void warna(){
     system("color 06");
}
 

int main(){
	int choice, choice1, choice2, out = 1, harga, jml, noBook;
	string name, map, email, nameBook, no;
	
	// array untuk menyimpan menu awal
	string menu[4] = {
    " 1. Membuat Akun ",
    " 2. Buku Terbaru ",
    " 3. Beli Buku    ",
    " 4. Keluar       "
	};
	
	// array menyimpan data buku terbaru
    const int jumlah_buku = 15;
	buku bk [jumlah_buku] = {
	{1, "Hujann Soree", "Tere Liye", 95000},
    {2, "Bumi Manusia", "Pramoedya P. ", 45000},
    {3, "Fihi Ma Fihi", "J. AR-Rumi", 80000},
    {4, "Si Putih", "Tere Liye", 78000},
	{5,"Majnun   ", "Anton Kurnia",80000},
	{6,"Melangkah", "Js. Khairen", 93000},
	{7,"Sagaras", "Sagaras ", 96000},
    {8, "Laskar Pelangi", "Andrea Hirata", 84150},
    {9, "Harry PotterCC", "Jhack Thorne", 102400},
    {10, "Black Showman", "Keigo Higashi", 117450},
    {11, "Peradaban","Noah Harari", 116000},
    {12, "Lukacita", "Valerie P.",125000},
	{13,"Laut Bercerita", "Leila S.",115000},
	{14,"Terpikat", "Ghefira Zakh.", 100000},
	{15,"172 Days", "Nadzira Shafa", 100000},
	}; 
	
    menu:
    warna();
    cout << " https://bookshop.com/" << name << endl;
    cout << "\n\n\t +------------------------ Menu Pilihan -----------------------+ \n";
    for (int a = 0; a < 4; a++) {
	cout << "\t |                     " << menu[a] << "                       |" << endl;
	};
    cout << "\t +-------------------------------------------------------------+ \n\n";
    cout << "\t Pilihan Anda : ";
    cin >> choice;
    system("cls");
   
   switch (choice){
   	
    case 1 :
   		profil:
        cout << " \t\t\t\tProfil Akun " << endl;
        cout << " _________________________________________________________________________\n\n";
   		cout << "   Masukan Nama Anda       : https://bookshop.com/"; 
   		cin.ignore();
   		getline(cin, name); 
   		cout << "   Masukan Alamat Anda     : ";
   		getline(cin, map);
   		cout << "   Masukan Email Anda      : ";
   		cin >> email;
   		cout << "   Masukan No Telepon Anda : ";
   		cin >> no;
   		cout << " +-----------------------------------------------------------------------+ \n\n";
   		cout << "   Menu Pilihan : " << endl;
        cout << "   1. Lihat Buku Terbaru  " << endl;
        cout << "   2. Kembali Ke Menu \n\n";
		cout << "   Pilihan Anda : ";
		cin >> choice1;
		system("cls");
		
		if (choice1==1){
			goto daftarBuku;
		} else if (choice1 == 2){
			goto menu;
		} 	
		break;
		
	case 2 :
   	    daftarBuku:
   	    cout << " https://bookshop.com/" << name << endl;
   	    cout << " +---------------------------------------------------------------------------------------+ \n";
        cout << " \t\t\t\t  Buku TerBaru \n";
        cout << " _________________________________________________________________________________________ \n";
        cout << "       No Buku    Nama Buku            Penulis Buku             Harga            \n" ; 
        cout << " +---------------------------------------------------------------------------------------+ \n";
        for (int i = 0; i < jumlah_buku; i++) {
		cout << "\t" << bk[i].no << "\t " << bk[i].judul << "\t\t" << bk[i].penulis << "\t\t" << bk[i].harga << endl;
		};
		
        // langsung ke beliBuku
        goto beliBuku;
		
	case 3 :
		// menu 3
   	    beliBuku:
        cout << " +---------------------------------------------------------------------------------------+" << endl;
        cout << " \t\t\t\t  Beli Buku " << endl;
        cout << " _________________________________________________________________________________________ \n\n ";
        cout << " Masukan No Buku       : ";
        cin >> noBook;
        cout << "  Masukan Nama Buku     : ";
        cin.ignore();
        getline(cin, nameBook);
        cout << "  Harga Buku            : ";
        cin >> harga;
        cout << "  Jumlah Yang Dibeli    : ";
        cin >> jml;
        cout << "  Jadi Jumlah Yang Harus DiBayarkan : "<< harga * jml << endl;
        cout << " _________________________________________________________________________________________ \n";
        cout << "  1. Selesai " << endl;
        cout << "  2. Kembali Ke Menu " << endl;
        cout << "  Pilihan Anda : ";
        cin >> choice2;
        if (choice2 == 1){
        	goto keluar;
		} else if (choice2 == 2){
			goto menu;
		} 
		
	case 4 :
    	// menu 4
    	keluar:
    	system("cls");
    	cout << " https://bookshop.com/" << name << "\n\n";
		cout << " Terima Kasih Sudah Mengunjungi Toko Buku Sederhana Created By @damar.glh__ . " << endl;
        break;
    	
    default :
    	cout << " Pilihan Yang Anda Pilih Tidak Tersedia !!! " << endl;
    	break;
    	
   }
    
}
