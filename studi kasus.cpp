#include <iostream>
#include <conio.h>
#include <windows.h>
#include<stdio.h>
using namespace std;

struct daerah
{
       char kel[50];
       char kec[50];
       char kota[50];
};

struct data
{
       int nomor;
       char nama[50];
       char agama[20];
       char status[20];
       char pekerjaan[20];
       char tempat[20];
       char tanggal[20];
       char almt[20];
       daerah alamat;
};

main()
{
 
    int menu;
    int nik=-1,i,j;
    int pilih;
    int namedit;
    data ktp[20];
    char get[1];
    bool ketemu;
   
    menuutama:
    system("cls");
    system ("color f3");
 cout<<" ---------------- Aplikasi Data KTP ---------------";
    cout <<" \nMENU UTAMA :\n\n";
    cout<<" 1.Menambah Data Penduduk\n\n";
    cout<<" 2.Mencari Data Penduduk\n\n";
    cout<<" 3.Menghapus Data Penduduk\n\n";
    cout<<" 4.Menampilkan Data Penduduk\n\n";
    cout<<" 5.Keluar\n\n";
    cout<<" _____________________________\n\n";
    cout<<" Masukan Pilihan Anda : "; cin>>menu;
   
    if(menu==1)
 {
  system("cls");
     nik++;
     cout<<"\n PENAMBAHAN DATABASE KTP\n";
     cout<<" ____________________________\n\n";
     cout<<" NIK (max 16 karakter)       : "; cin>>ktp[nik].nomor; cin.getline(get,1);
     cout<< endl;
     cout<<" Nama Lengkap               : "; cin.getline(ktp[nik].nama,50);
     cout<< endl;
        cout<<" Agama                      : "; cin.getline(ktp[nik].agama,20);
     cout<< endl;
        cout<<" Status Perkawinan          : "; cin.getline(ktp[nik].status,20);
     cout<< endl;
        cout<<" Pekerjaan                  : "; cin.getline(ktp[nik].pekerjaan,20);
     cout<< endl;
        cout<<" Tempat Lahir               : "; cin.getline(ktp[nik].tempat,20);
     cout<< endl;
        cout<<" Tanggal Lahir (DD MM YYYY) : "; cin.getline(ktp[nik].tanggal,20);
     cout<< endl;
        cout<<" Alamat                     : "; cin.getline(ktp[nik].almt,20);
     cout<< endl;
        cout<<" Kelurahan                  : "; cin.getline(ktp[nik].alamat.kel,20);
     cout<< endl;
        cout<<" Kecamatan                  : "; cin.getline(ktp[nik].alamat.kec,20);
     cout<< endl;
        cout<<" Kota                       : "; cin.getline(ktp[nik].alamat.kota,20);
     cout<<" _________________________________________________________________\n\n";
        cout<<" 1.Kembali ke Menu Utama\n\n";
     cout<<" 2.Keluar dari program\n";
     cout<<" _____________________________\n\n";
        cout<<" Masukan Pilihan Anda : "; cin>>pilih;
     cout<<endl;
     if(pilih==1)
  {
      goto menuutama;
     }
     else if(pilih==2)
  {
      goto keluar;
     }
    }
   
    else if(menu==2)
 {
  system ("cls");
     cout<<"\n PENCARIAN DATA PENDUDUK\n";
     cout<<" ____________________________\n\n";
     cout<<" Masukan NIK : "; cin>>namedit;
     cout<<endl;
     
     for(i=0;i<=nik;i++)
  {
      if(namedit==ktp[i].nomor)
   {
       cout<<" Data di temukan pada registrasi ktp ke-"<<i<<endl<<endl;
       cout<<" Nama Lengkap      : "<<ktp[i].nama<<endl;
    cout<<endl;
                cout<<" Agama             : "<<ktp[i].agama<<endl;
    cout<<endl;
                cout<<" Status perkawinan : "<<ktp[i].status<<endl;
       cout<<endl;
                cout<<" Pekerjaan         : "<<ktp[i].pekerjaan<<endl;
       cout<<endl;
                cout<<" Tempat Lahir      : "<<ktp[i].tempat<<endl;
       cout<<endl;
                cout<<" Tanggal Lahir     : "<<ktp[i].tanggal<<endl;
       cout<<endl;
                cout<<" Alamat            : "<<ktp[i].almt<<endl;
       cout<<endl;
                cout<<" Kelurahan         : "<<ktp[i].alamat.kel<<endl;
       cout<<endl;
                cout<<" Kecamatan         : "<<ktp[i].alamat.kec<<endl;
       cout<<endl;
                cout<<" Kota              : "<<ktp[i].alamat.kota<<endl<<endl;
                cout<<" _____________________________________________________\n\n";
       
                goto menu0;
      }
     }
     cout<<" DATA YANG ANDA CARI TIDAK DI TEMUKAN !!!\n\n";
     cout<<" ________________________________________\n\n";
        menu0:
     cout<<" 1.Kembali ke Menu Utama\n\n";
     cout<<" 2.Keluar dari program\n";
     cout<<" _____________________________\n\n";
        cout<<" Masukan Pilihan Anda : "; cin>>pilih;
     
        if(pilih==1)
  {
      goto menuutama;
     }
     else if(pilih==2)
  {
      goto keluar;
     }
 }

 else if(menu==3)
 {
  system ("cls");
  cout<<"\n PENGHAPUSAN DATA PADA DATABASE KTP\n";
  cout<<" ____________________________________\n\n";
  cout<<" NIK : "; cin>>namedit;
     cout<<endl;
     
        for(i=0;i<=nik;i++)
  {
      if(namedit==ktp[i].nomor)
   {
    ketemu=true;
    if(ketemu)
    {
     for(j=i;j<=nik+1;j++)
     {
      ktp[j]=ktp[j+1];
     }
     cout<<" DATA BERHASIL DI HAPUS\n\n";
     nik--;
     goto menu;
    }
   }
  }
  cout<<" DATA YANG AKAN DI HAPUS TIDAK DITEMUKAN !!!\n";
  cout<<" ____________________________________________\n\n";
        menu:
     cout<<" 1.Kembali ke Menu Utama\n\n";
     cout<<" 2.Keluar dari program\n";
     cout<<" _____________________________\n\n";
        cout<<" Masukan Pilihan Anda : "; cin>>pilih;
        if(pilih==1)
  {
      goto menuutama;
     }
     else if(pilih==2)
        {
      goto keluar;
     }
 }

 else if(menu==4)
 {
  system ("cls");
  cout<<"\n MENAMPILKAN DATA PENDUDUK (KTP)\n";
  cout<<" _________________________________\n\n";
        for(i=0;i<=nik;i++)
  {
      cout<<" Database Data KTP ke-"<<i<<endl<<endl;
            cout<<" NIK : "<<ktp[i].nomor<<endl<<endl;
   cout<<" Nama : "<<ktp[i].nama<<endl<<endl;
   cout<<" Agama : "<<ktp[i].agama<<endl<<endl;
   cout<<" Status perkawinan : "<<ktp[i].status<<endl<<endl;
      cout<<" Pekerjaan : "<<ktp[i].pekerjaan<<endl<<endl;
      cout<<" Tempat Lahir : "<<ktp[i].tempat<<endl<<endl;
      cout<<" Tanggal Lahir : "<<ktp[i].tanggal<<endl<<endl;
      cout<<" Alamat : "<<ktp[i].almt<<endl<<endl;
      cout<<" Kelurahan : "<<ktp[i].alamat.kel<<endl<<endl;
      cout<<" Kecamatan : "<<ktp[i].alamat.kec<<endl<<endl;
      cout<<" Kota : "<<ktp[i].alamat.kota<<endl<<endl;
  }
  cout<<" _____________________________________________\n\n";
  cout<<" 1.Kembali ke menu awal\n\n";
     cout<<" 2.keluar dari program\n";
     cout<<" _____________________________\n\n";
        cout<<" Masukan Pilihan Anda : "; cin>>pilih;
        if(pilih==1)
  {
      goto menuutama;
     }
     else if(pilih==2)
  {
      goto keluar;
     }
  
 keluar:
    system("cls");
    cout<<"\n TERIMA KASIH\n";
    getch();
    return 0;
    }
}
