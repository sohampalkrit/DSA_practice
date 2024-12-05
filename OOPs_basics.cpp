#include<bits/stdc++.h>
using namespace std;
class Hero{
    private:
    int health;
    public:
    char *name;
    char level;
    static int timeRem;
    //constructor
    Hero(){
        name=new char[100];
        
    }
    //parameterized constructor
    Hero(int health){
        //cout<<this;
        this->health = health;

    }
    
    //copy constructor
    Hero(Hero &temp){
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        this->health=health;
        this->level=level;
    }
    
    Hero(int health,char level){
        this->health = health;
        this->level=level;

    }
    int gethealth(){
        return health;
    }
    int sethealth(int h){
        health=h;
    }
    char getlevel(){
        return level;
    }
    char setlevel(char ch){
        level=ch;
    }
    void print(){
        cout<<"name:"<<this->name<<endl;
        cout<<"level is : "<<level<<endl;
        cout<<"health is:"<<health<<endl;
    }
    void setname(char name[]){
        strcpy(this->name,name);
    }
    int Hero::timeRem=5;


};
int main(){
    cout<<Hero::timeRem<<endl;
    Hero hero1;
    hero1.sethealth(70);
    hero1.setlevel('C');
    char name[6]="Soham";
    hero1.setname(name);
    hero1.print();
    Hero hero2(hero1);
    hero2.print();
    hero1.name[0]='A';
    hero1.print();
    hero2.print();
    //this is shallow copying both hero1 and hero2 name got changed

    /*
    Hero S(70,'C');
    Hero R(S);
    S.print();
    R.print();
    /*
    //static allocation
    Hero h1(10);
    cout<<&h1;
    h1.sethealth(10);
    cout<<h1.gethealth()<<endl;
    //dynamic allocation 
    Hero *H1=new Hero;
    H1->sethealth(69);
    cout<<H1->gethealth()<<endl;
    */
 
return 0;
}