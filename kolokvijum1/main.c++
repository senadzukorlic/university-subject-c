
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

#include <iostream>
using namespace std;

int main(){
    int n,koraci,ostatak;
    cout << "Unesite koordinate kuce";
    cin >> n;

    koraci=n / 5;
    ostatak=n % 5;
    if (ostatak>0){
       koraci ++; 
    }

    cout << "Broj koraka do kuce je: " << koraci << endl;
    return 0;
}