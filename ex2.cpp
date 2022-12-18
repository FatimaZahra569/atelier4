#include<iostream>
#include<cstring>
#include<map>
#include<sstream>
#include<iterator>
using namespace std;
int main(){ 
    string n;
    cout<<"donner une chaîne de caractères sous la forme  JJMMAAAAHHNN :";
    cin>>n;
    if(n.size()<12)
        cout<<"la forme invalide !";
    else{
        map<int,string> mounth;
        mounth.insert(pair<int,string>(1,"janvier"));
        mounth.insert(pair<int,string>(2,"fevrier"));
        mounth.insert(pair<int,string>(3,"mars"));
        mounth.insert(pair<int,string>(4,"avril"));
        mounth.insert(pair<int,string>(5,"mai"));
        mounth.insert(pair<int,string>(6,"juin"));
        mounth.insert(pair<int,string>(7,"juillet"));
        mounth.insert(pair<int,string>(8,"aout"));
        mounth.insert(pair<int,string>(9,"septembre"));
        mounth.insert(pair<int,string>(10,"octobre"));
        mounth.insert(pair<int,string>(11,"novembre"));
        mounth.insert(pair<int,string>(12,"decembre"));
        if(stoi(n.substr(2,2))<=12){
            cout<<"la date est : le "<<n.substr(0,2)<<" ";
            map<int,string>::iterator itr;
           for(itr=mounth.begin();itr!=mounth.end();itr++){
            if(itr->first==stoi(n.substr(2,2))){
                cout<<itr->second;
                break;
            }
           }cout<<" "<<n.substr(4,4)<<" a "<<n.substr(8,2)<<" : "<<n.substr(10,2);
        }
    }
}