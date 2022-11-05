#include<iostream>
using namespace std;
#include<conio.h>

 int main{
     int void main (String [] args ){
	     Scanner input = new Scanner (System.in);
		 String nama , nim, tgl, kelamin, matkul, absen, grade ;
		 final double n_tugas , n_uts , n_kuis , n_uas , n_akhir;
		 System.out.println("| Program Java Nilai Mahasiswa |");
		 System.out.println("=========By Bagus Abyyu Azhar========");
		 System.out.print("Masukan nama : "); 
		 nama = input.nextLine();
		 System.out.print("Jenis Kelamin : ");
		 kelamin = input.nextLine();
		 System.out.print("Masukan NIM : "); 
		 nim = input.nextLine();
		 System.out.print("Tanggal Input Nilai :"); 
		 tgl = input.nextLine();
		 System.out.print("Mata Kuliah : "); 
		 matkul= input.nextLine();
		 System.out.print("Absensi : "); 
		 absen =input.nextLine();
		 System.out.print("Nilai tugas : ");
		 n_tugas = input.nextInt();
		 System.out.print("Nilai kuis : ");
		 n_kuis = input.nextInt();
		 System.out.print("Nilai uts : ");
		 n_uts = input.nextInt();
		 System.out.print("Nilai uas : ");
		 n_uas = input.nextInt();
		 n_akhir = (0.15 * n_tugas + 0.20 * n_kuis + 0.30 * n_uts + 0.35 *n_uas); 
		 if (n_akhir >= 80 && n_akhir <=100){
		     grade = "A";
		 }
		 else if (n_akhir > 77 && n_akhir < 79.9){
		     grade = "A-";
		 }
		 else if (n_akhir > 74 && n_akhir < 76.9){
			 grade = "B+";
		 }
		 else if (n_akhir > 71 && n_akhir < 73.9){
		     grade = "B";
		 }
		 else if (n_akhir > 68 && n_akhir < 70.9){
		     grade = "B-";
		 }
		 else if (n_akhir > 64 && n_akhir < 67.9){
		     grade = "C+";
		 }
		 else if (n_akhir > 60 && n_akhir < 63.9){
		     grade = "C";
		 }
		 else if (n_akhir >= 50 && n_akhir < 59.9){
		     grade = "D";
		 }
		 else {
		     grade = "E";
	     }
		 if	(grade == "A" || grade == "A-" || grade == "B+" || grade == "B"|| grade == "B-"|| grade == "C+"|| grade == "C"){
		     System.out.println("\n"+nama+" dengan NIM "+nim+" memiliki nilai akhir"+n_a khir+" = ("+grade+")"+""
					 + "\n dan dinyatakan Lulus dari Mata kuliah "+matkul+"");
		 }
		 else {
		 	 System.out.println("\n"+nama+" dengan NIM "+nim+" memiliki nilai akhir"+n_akhir+" = ("+grade+")"+""
		 	         + "\n dan dinyatakan Tidak Lulus");
		   }
        }
	}	
