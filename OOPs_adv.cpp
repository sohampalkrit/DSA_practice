#include<bits/stdc++.h>
using namespace std;
class Human{
    public:
    int age;
    int height;
    int weight;
    public:
    int setweight(int w){
        this->weight=w;
    }
    int getage(){
        return age;
    }
    int setage(int g){
        this->age=g;
    }
    void say(){
        cout<<"hello tree"<<endl;
    }

};
class Male: public Human{
    public:
    string colour;

    void sleep(){
        cout<<"Male sleeping"<<endl;
    }

};
class A{
    public:
    void say(){
        cout<<"hello tree A"<<endl;
    }

};
class add{
    public:
    int a;
    int b;
     void operator-(add &obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<a+b<<endl;

     }


};
int main(){
    /*
    Male male1;
    male1.setage(10);
    cout<<male1.age<<endl;
    A obj;
    obj.say();
    */
   add obj1,obj2;
   obj1.a=4;
   obj2.a=7;
   obj1-obj2;


return 0;
}