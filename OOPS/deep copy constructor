// here in deep copy if make any changes to the original the copied constructor won't get affected
//  deep copy
#include<bits/stdc++.h>
using namespace std;
class hero{
 public:   int health;
            char level;
            char *name;
            hero(){
                cout<<"constructor is called";
                name=new char[10];
            }
         void Setname(char name[]){
            this->name=name;
         }
         
         
            hero(hero &temp){
                // here we are creating an another array so that we can copy the elements
                char *ch=new char[strlen(temp.name)+1];
                strcpy(ch,temp.name);
                this->name=ch;
                this->level=temp.level;
            this->health=temp.health; 
            }
         void  print(){
             cout<<this->health<<" ";
             cout<<this->level<<" ";
             cout<<this->name<<" ";
            cout<<endl;
            }
    

};
int main(){
    hero h;
    char name[10]="sunny";
    h.Setname(name);
    h.health=99;
    h.level='a';
    h.print();
    hero h2(h);
    h2.print();
    h.name[1]='m';
     h.print();
     h2.print();

}
