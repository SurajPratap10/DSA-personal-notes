// #include <iostream>
// using namespace std;

// OOPs - Part(1)

// Making a CLASS:

// class Hero {
//   // properties:

// private:
//   int health;

// public:
//   char level;

//   int getHealth() { return health; }

//   void setHealth(int h) { health = h; }
//   void setLevel(char l) { level = l; }
// };

// int main() {
//   // Hero sam; // Static allocation

//   // cout << "Size is: " << sizeof(sam) << endl;

//   // cout << "Health is: " << sam.getHealth() << endl;
//   // sam.setHealth(120);
//   // sam.level = 'A'
//   // cout << "Health is: " << sam.getHealth() << endl;
//   // cout << "Level is: " << sam.level << endl;

//   // Dynamic allocation:
//   Hero *sam = new Hero;
//   sam->setHealth(120); // (*sam) == sam-> both ways...
//   sam->setLevel('Q');
//   cout << "Health is: " << (*sam).getHealth() << endl;
//   cout << "Level is: " << (*sam).level << endl;
// }

// CONSTRUCTOR:

// class Hero {

//   public:
//   Hero() { cout << "Constructor called..." << endl;
//   }
// };

// int main() {
//   // static call to constructor
//   Hero sam;
//   // dynamic call to constructor
//   Hero *b = new Hero;
// }

// Paramterized Constructor:

// class Hero {

// public:
// int age;

// Hero(int age){
//   cout<<"this: "<< this <<endl;
//   this-> age = age;
//   }
// };

// int main(){

//   Hero sam(20);
//   cout<<"Address of sam: "<<&sam<<endl;
// }

// Copy Constructor:

// class Hero{

// public:
// int health;
// char level;
// char *name;

// Hero(int health, char level, char name){
//   this->level = level;
//   this->health = health;
// }

// // copy constructor
// Hero(Hero & temp){
//   this->health = temp.health;
//   this->level = temp.level;
// }

// void print(){
//   cout<<this->name<<endl;
//   cout<<this->health<<endl;
//   cout<<this->level<<endl;
// }

//   int getHealth() { return health; }

//   void setHealth(int h) { health = h; }
//   void setLevel(char l) { level = l; }

// };

// int main(){
//   // Hero S(35, 'A');
//   // S.print();

//   // Hero R(S);
//   // R.print();

//   Hero hero1;
//   char name[4] = 'ABCD';

// }

// Copy Assignment Operator:

// hero1 = hero2;

// DESTRUCTOR:

// class Hero{

// public:
// int a;

// // destructor
// ~Hero(){
//   cout<<"Destructor called..."<<endl;
//   }
// };

// int main(){
//   //static allocation
//   Hero a;

//   //dynamic allocation
//   Hero *b = new Hero();
//   delete b; // manually calling the destructor in dynamic..

// }

// STATIC KEYWORD & FUNCTION:

// class Hero {

// public:
//   int health;
//   static int timeToComplete;

// static int random(){
//    return timeToComplete;
  
//   };
// };

// int Hero::timeToComplete = 10;

// int main() { 
  
// cout << Hero::timeToComplete << endl; 
// cout << Hero::random() << endl;
  
// }
