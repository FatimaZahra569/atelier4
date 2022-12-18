#include<iostream>
#include<cmath>
using namespace std;
class complexe{
    private:
    float img , reel;
    public:
    void display();
    complexe(float,float);
    complexe & operator+(complexe);
    complexe & operator-(complexe);
    complexe & operator*(complexe);
};
void complexe::display(){ 
    cout<<"resulta : ";
    if(img==0)
    cout<<reel;
    else if(img==1){
        if(reel==0)
        cout<<"i";
        else cout<<reel<<" + i";   
    }
    else{
        cout<<reel<<" + i"<<img;
    }
}
complexe::complexe(float x,float y){
    cout<<"donner le nombre reel puis img : "<<endl ;
    cout<<"reel : ";cin>>x;
    cout<<"img  : ";cin>>y;
    this->reel=x;this->img=y;
}
complexe & complexe::operator+(complexe p){
this->reel+=p.reel;this->img+=p.img;
return *this;  
}
complexe & complexe::operator-(complexe p){
this->reel-=p.reel;this->img-=p.img;
return *this;  
}
complexe & complexe::operator*(complexe p){
this->reel=(this->reel*p.reel)-(this->img*p.img);
this->img=(this->img * p.reel)+(this->reel*p.img);
return *this;  
}
int main(){
    char op ;
    cout<<"1er nombre : "<<endl;
    complexe p1(0,0);
    cout<<"2eme nombre : "<<endl;
    complexe p2(0,0);
    cout<<"donner l\'operateur :(+,-,*) : ";cin>>op;
    switch (op)
    {
    case '+':{
        p1+p2;
        p1.display();
    }
        break;
    case '*':{
        p1*p2;
        p1.display();
    }
        break;
        case '-':{
        p1-p2;
        p1.display();
    }
        break;
    default:
    cout<<"erreur !";
        break;
    }
    return 0;
}