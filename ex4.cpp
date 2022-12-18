#include<iostream>
#include<list>
#include<cstring>
#include<iterator>
using namespace std;
class personne{
    public:
    string nom ,pre;
    int age;
    personne(string,string,int);
    };
personne::personne(string n,string p,int a):nom(n),pre(p),age(a){ }
int main (){
    list<personne> l;
    string nm,p;int a;
    int n;
    cout<<"donner le nombre des personnes : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"personne n"<<i+1<<" :"<<endl;
        cout<<"nom    : ";cin>>nm;
        cout<<"prenom : ";cin>>p;
        cout<<"age    : ";cin>>a;
        personne per(nm,p,a);
        l.push_back(per);
    }
    list<personne>::iterator itr;
    list<string>::iterator itr2;
    cout<<"la liste trie selon les nom : "<<endl;
    itr=l.begin();
    list<string> l2;
    for(int i=0;i<n;i++){
        l2.push_back(itr->nom);itr++;
    }l2.sort();
    for(itr2=l2.begin();itr2!=l2.end();itr2++){
        int i=1;
        for(itr=l.begin();itr!=l.end();itr++){
            if(*itr2==itr->nom) {
            cout<<"persone "<<i<<" : -----------------------------";
        cout<<endl<<"\t \tnom     : "<<itr->nom<<endl<<"\t \tprenom  : "<<itr->pre<<endl;
        cout<<"\t \tage     :"<<itr->age<<endl;}
        }
        i++;
    }
    return 0;
}