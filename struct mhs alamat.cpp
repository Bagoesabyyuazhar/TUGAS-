#include <stdio.h>
#include <conio.h>
//struct pertama
struct alamat{
	    char jalan[40]; int norumah;
	    char kota[20];
};
//struct kedua
struct tanggallahir {
        int Tanggal, Bulan, Tahun;   	
};
//struct ketiga
struct mhs {
	    int Nim;
	    char Nama[20];
	    struct alamat address;
	    struct tanggallahir tgllahir;
};
mhs mahasiswa,alamat,address,tanggallahir,tgllahir;

main()
{
	 //proses input
	 printf("input nim           =");scanf("%i",&mahasiswa.Nim);
	 printf("input nama mahasiswa=");fflush(stdin);gets(mahasiswa.Nama);9
	 printf("input Nama Jalan    =");fflush(stdin);gets(alamat.address.jalan);
	 
	 printf("input kota          =");fflush(stdin);gets(alamat.address.kota);
	 printf("input no.Rumah      =");scanf("%i",&alamat.address.norumah);
	 printf("input Tanggal Lahir =");scanf("%i",&tanggallahir.tgllahir.Tanggal);
	 printf("input bulan [1-12]  =");scanf("%I",&tanggallahir.tgllahir.Bulan);
	 printf("input tahun lahir   =");scanf("%I",&tanggallahir.tgllahir.Tahun);
	 
	 //proses output
	 printf("=============================================\n");
	 printf("Nim mahasiswa            =%i",mahasiswa.Nim);
	 printf("\nNama mahasiswa \t      =%i",mahasiswa.Nama);
	 printf("\nNama jalan             =%i",alamat.address.jalan);
	 printf("\nKota                   =%i",alamat.address.kota);
	 printf("\nNo. Rumah \t           =%I",alamat.address.norumah);
	 printf("\ntanggal lahir \t       =%I",tanggallahir.tgllahir.Tanggal);
	 printf("\nBulan [1-12] \t        =%I",tanggallahir.tgllahir.Bulan);
	 printf("\nInput tahun lahir \t     =%I",tanggallahir.tgllahir.Tahun); 
}
