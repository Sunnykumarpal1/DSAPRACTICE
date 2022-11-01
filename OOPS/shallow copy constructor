#include<bits/stdc++.h>
using namespace std;
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
  
}
