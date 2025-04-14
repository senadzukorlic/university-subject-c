
// #include <iostream>
// using namespace std;
// int main (){
// int n ;
// cout << "Unesite broj soba u spavaonici: ";
// cin >> n;

// int brSobaSaSlobodnimMestima= 0;

// cout << "Unesite broj ljudi i kapacitet svake sobe: " << endl;
// for(int i=0;i<n;i++){
//     int pi, ki;
//     cin >> pi >> ki;

//     if(ki-pi>=2){
//         brSobaSaSlobodnimMestima++;
//     }

// }

// cout << "Broj soba sa slobodnim mestima je: " << brSobaSaSlobodnimMestima << endl;
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){

// int Pet,Vasa,Tom,n;
// int solvedProblems=0;
// cout << "Unesite broj problema zadatih timu:";
// cin >> n;

// for (int i=0;i<n;i++){
//     cout << "Unesite broj problema koje takmicari znaju:";
//     cin >> Pet >> Vasa >> Tom;
//     if (Pet+Vasa+Tom>=2){
//         solvedProblems++;
//     }
    
// }
// cout << "Broj problema koje je tim resio je: " << solvedProblems << endl;
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n,koraci,ostatak;
//     cout << "Unesite koordinate kuce";
//     cin >> n;

//     koraci=n / 5;
//     ostatak=n % 5;
//     if (ostatak>0){
//        koraci ++; 
//     }

//     cout << "Broj koraka do kuce je: " << koraci << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

// int main(){
//     int k,n,v;

//     cout << "Unesite cenu prve banane,finansijksa srdestva kojima raspolazete i zeljeni broj banana: ";
//     cin >> k >> n >> v;

//     int cena = 0;
    
//     for (int i=1;i<=v;++i){
//         cena += k*i;
//     }

//     int ostatak = cena - n;

//     if (ostatak <= 0) {
//         cout << "0";
//     } else {
//     cout << ostatak;
//     }

//     return 0;
// }

// int main (){
//     int n;
//     int x,y,z;
//     int xSum=0,ySum=0,zSum=0;
//     cout << "Unesite broj";
//     cin >> n;

//     for (int i=0;i<n;i++){
//         cout << "Unesite x,y,z koordinate: ";
//         cin >> x>>y>>z;
//         xSum += x;
//         ySum += y;
//         zSum += z;
       
//     }

    
  
//     if (xSum==0 && ySum==0 && zSum==0){
//         cout << "Da";
//     } else {
//         cout << "Ne";
//     }
//     return 0;
// }

int main(){
    int n, k;
cout << "Unesite broj za umanjivanje: ";
cin >> n;
cout << "Unesite koliko puta ce se umanjiti broj: ";
cin >> k;

for (int i = 0; i < k; i++) {
    if (n % 10 != 0) {
        n -= 1;
    } else {
        n /= 10;
    }
}
cout << "Rezultat je: " << n << endl;
return 0;
}