#include<iostream>
#include<set>
#include<list>
#include<cstring>
using namespace std;
template<class T,class U>bool recherche(T itr,T last,U element){
    for(itr;itr!=last;itr++){
        if(*itr==element){
            break;
        }
    }
    return (*itr==element);
}
int main(){
    set<int>::iterator itrs;
    list<int>::iterator itrl;
    int i;
    set<int> s;
    list<int> l;
   float t[10];
   for(i=0;i<10;i++)
   s.insert(i+1);
   cout<<"le set : "<<endl;
   cout<<"le set : \n \t";
   for(itrs=s.begin();itrs!=s.end();itrs++)
    cout<<*itrs<<"\t";
    if(recherche(itrs=s.begin(),s.end(),2))
       cout<<endl<<"element 2 est existe dans le set !"<<endl;
    else
    cout<<endl<<"element 2 n\'est existe pas dans le set !"<<endl;  
   for(i=0;i<10;i++){
    l.push_back(i*10);
   }
   cout<<endl<<"la list : "<<endl<<"\t";
   for(itrl=l.begin();itrl!=l.end();itrl++)
   cout<<*itrl<<"\t";
   if(recherche(itrl=l.begin(),l.end(),20))
      cout<<endl<<"element 20 existe dans la liste "<<endl;
      else
      cout<<endl<<"element 20 existe dans la liste "<<endl;
   for(i=0;i<10;i++){
    t[i]=i*20;
   }
   cout<<endl<<"le tableau : \n  \t";
   for(i=0;i<10;i++){
    cout<<t[i]<<"\t";
   }
return 0;
}