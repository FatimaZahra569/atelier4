#include <iostream>
using namespace std;
class Test{
public:
 static int tableau[] ;
public :
 static int division(int indice, int diviseur){
 return tableau[indice]/diviseur;
 }
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main() {
 int x, y;
 cout << "Entrez l\'indice de l\'entier a diviser: " << endl;
 cin >> x ;
 try{
 cout << "Entrez le diviseur: " << endl;
 cin >> y ;
 if(!y) throw y;}
 catch(int er){
    cout<<"la division sur 0 pas possible !";
    exit(-1);
 }
 cout << "Le resultat de la division est: "<< endl;
 cout <<Test::division(x,y) << endl;
 return 0; }