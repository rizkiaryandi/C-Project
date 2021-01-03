#include <iostream>
#include <conio.h>

using namespace std;

//Nama, Stok, Harga
string namaBarang[]={"Xiaomi Redmi Note 9", "Advan G9 Pro"};
int stokBarang[]={10, 12};
int hargaBarang[]={2000000, 1500000};

int kode, uangMasuk, uangKembali;

void header(), listBarang(), pembayaran(), transaksi(), struk();


main(){
	for(int ul = 0; ul<9999999999; ul++){
		listBarang();
		cout<<"\n\nTekan Enter untuk kembali";
		getch();
	}
}

void header(){
	system("cls");
	cout<<"====================\n";
	cout<<"Toko Hape\n";
	cout<<"====================\n";
}

void listBarang(){
	header();
	uangMasuk = 0;
	for(int i=0; i<2; i++){
			cout<<"["<<i+1<<"]"<<namaBarang[i]<<endl;
			cout<<"Stok: "<<stokBarang[i]<<endl;
			cout<<"Harga: "<<hargaBarang[i]<<endl<<endl;
		}
		
		cout<<"Pilih kode barang[]: "; cin>>kode;
		pembayaran();
}

void pembayaran(){
	header();
	if(stokBarang[kode-1]>0){
		cout<<"Choose: \n";
		cout<<"["<<kode<<"]"<<namaBarang[kode-1]<<endl;
		cout<<"Stok: "<<stokBarang[kode-1]<<endl;
		cout<<"Harga: "<<hargaBarang[kode-1]<<endl<<endl;
		
		char tin;
		cout<<"y = lanjut pembayaran \nt = Kembali ke Menu\n___________\nTindakan[y/t]: "; cin>>tin;
		if(tin == 'y'){
			cout<<"Masukan Uang: Rp."; cin>>uangMasuk;
			transaksi();
		}		
	}
	else{
		cout<<"Barang Tidak tersedia";
	}
}

void transaksi(){
	if(uangMasuk >= hargaBarang[kode-1]){
		uangKembali = uangMasuk-hargaBarang[kode-1];
		struk();
	}
	else{
		cout<<"Uang yang anda input kurang";
	}
}

void struk(){
	header();
	cout<<"Struk Pembelian\n";
	cout<<"["<<kode<<"]"<<namaBarang[kode-1]<<endl;
	cout<<"Harga: "<<hargaBarang[kode-1]<<endl<<endl;
	cout<<"Pembayaran: "<<uangMasuk<<endl;
	cout<<"Kembalian: "<<uangKembali<<endl<<endl;
	cout<<"Terima kasih sudah berbelanja\n\n";
}
