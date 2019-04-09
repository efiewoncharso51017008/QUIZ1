#include <iostream.h>
#include <conio.h>
main ()
{
int A,B, C, D, E, F, G, totalnt, nilaik, nilaim, nilaiq, nilaif, NA, totalt;
char nama [30], jurusan [20] ;
cout <<" nama mahasiswa = "; cin >> nama ;
cout <<" jurusan  = "; cin >> jurusan ;
cout <<" nilai tugas1 = "; cin >> A ;
cout <<" nilai tugas2 = "; cin >> B ;
cout <<" nilai tugas3 = "; cin >> C ;
cout <<" nilai mid = "; cin >> D ;
cout <<" nilai Quiz = "; cin >> E ;
cout <<" nilai final = "; cin >> F ;
cout <<" nilai Kehadiran = "; cin >> G ;
totalnt = ( A + B + C )/3;
totalt = totalnt*20/100;
nilaik = G*20/100;
nilaim = D*20/100;
nilaiq = E*20/100;
nilaif = F*20/100;
NA = totalt + nilaik + nilaim + nilaiq + nilaif ;
cout <<"\n nama mahasiswa = "<<nama ;
cout <<"\n jurusan m = "<<jurusan;
cout <<"\n nilai akhir mahasiswa = "<< NA;
getch ();
}
