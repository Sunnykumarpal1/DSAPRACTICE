#include<bits/stdc++.h>
using namespace std;
class hero{
 public:   int health;
            char level;
            char *name;
            static int  a;

            hero(){
                cout<<"constructor is called"<<endl;
                name=new char[10];
            }
         void Setname(char name[]){
            this->name=name;
         }
         // destructor
         ~hero(){
            cout<<"destructor is called";
         }
          static int random(){
            return  a;
         }
};
//static variable -> it can be accessed without object; here static varible belong to oobject
 int hero::a=10;
int main(){

// this is for static function .ie. it can access only static data member
// and we don't have a this keyword in static function
  cout<<hero::random;
   cout<<hero::a;
      hero b;
      cout<<b.a;
      b.a=5;
    cout<<b.a<<endl;
    cout<<hero::a;

    

}
