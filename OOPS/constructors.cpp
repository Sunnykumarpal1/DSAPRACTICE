#include<bits/stdc++.h>
using namespace std;
/*
 eg for empty class  
class hero{
    //  size of empty class is 1 becz of indentification of object and to keep track of the object
//    property
};
*/
class  hero{
    public:
      char * name;
        char level;
      int health;
     hero(){
        cout<<"simple constructor is called";
        name=new char[100];

      }
     void  setname(char name[]){
        strcpy(this->name,name);
      }
      void print(){
        cout<<"["<<"   health     ";
        cout<<this->health<<"  level "<<this->level<<" ";
        cout<<"   name    "<<this->name<<"  ]   "<<endl;
      }
    // hero(hero& temp){
    //     cout<<"copy constructor";
    //     this->health=temp.health;
    //     this->level=temp.level;
    // }
    // hero(int health){
      
    // //    this keyword is a pointer that stores the address of the current object
    //    this->health=health;
    // }
    // hero(int health,char level){
    //     this->health=health;
    //     this->level=level;
    // }
    // double health;
    // char  level;
    // void print(){
    //     cout<<this->health<<endl;
    //     cout<<this->level;

    // }
     
    // // //  creation of getter  .i.e we can access this data members when they are private
    // // int healthGetter(){SS
    // //     return health;
    // // }
    // // char nameGetter(){
    // //     return name;
    // // }
    // // //  creation of setter. ie we can change the value;
    // // void healthSetter(int h){
    // //     health=h;
    // // }
    // // void nameSetter(char c){
    // //     name=c;
    // // }
};

int main(){
  hero h;
  char name[9]="money";
  h.setname(name);
  h.health=5;
  h.level='a';
  h.print();
  hero sunny(h);
  sunny.print();
  h.name[0]='h';
    h.print();
  sunny.print();
    //  so here when ever an object is created then constructor is called
//     for static allocation
//    hero sunny(10,'a');
//    hero s(5);
//    cout<<sunny.health<<" "<<sunny.level<<endl;
//    cout<<s.health;
   
//     for dynamic allocation 
    //  dynamic memory allocation  
    //  here we are crating a pointer named a and memory is allocated in heap at 
   /*
    hero *a=new hero;
    hero sunny;
    sunny.health=4;
    sunny.name='B';
    a->name='b';
    a->health=9;
    cout<<(*a).name<<" "<<a->health;
    cout<<endl<<sunny.health<<sunny.name;
     */
//    hero * h=new hero(5);
//    cout<<h->health<<" "<<h->level;
    
}
