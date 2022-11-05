#include "stack.h"
#include "boolean.h"

void SetTop (Stack *S, address NewTop)
/* Memberi Nilai TOP yang baru dengan NewTop */
{
Top(*S)=NewTop;
}

void SetInfoTop (Stack *S, infotype NewInf)
/* Memberi nilai Top yang baru dengan NewInf */
{
InfoTop(*S)=NewInf;
}

/* PROTO TYPE */
/**** Konstruktor/Kreator ****/
void CreateEmpty (Stack *S)
/* IS : S sembarang */
/* FS : Membuat sebuah stack S yang kosong berkapasitas MaxEl+1 */
/* jadi indeksnya antara 1 .. MaxEl karena 0 tidak dipakai */
/* Ciri stack kosong : TOP bernilai Nil */
{
Top(*S)=Nil;
}

/**** Predikat untuk test keadaan KOLEKSI ****/
boolean IsEmpty (Stack S)
/* Mengirim true jika Stack Kosong */
{
return(Top(S)==Nil);
}

boolean IsFull (Stack S)
/* Mengirim true jika tabel penampung elemen stack sudah penuh */
{
return(Top(S)==MaxEl);
}

/**** Menambahkan sebuah elemen ke Stack ****/
void Push (Stack *S, infotype X)
/* Menambahkan X sebagai elemen stack S */
/* IS : S mungkin kosong, tabel penampung elemen stack TIDAK penuh */
/* FS
: X menjadi TOP yang baru, TOP bertambah 1 */
{
SetTop(S, Top(*S)+1);
SetInfoTop(S,X);
}

/**** Menghapus sebuah elemen Stack ****/
void Pop (Stack *S, infotype *X)
/* Menghapus X dari Stack S */
/* IS : S tidak mungkin kosong */
/* FS : X adalah nilai elemen TOP yang lama, TOP berkurang 1 */
{
*X=InfoTop(*S);
SetTop(S, Top(*S)-1 );
}
