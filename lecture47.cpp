// #include <iostream>
// using namespace std;

// OOPs - Part(2)

// 1) Encapsulation:

// class Student {

// private:
//   string name;
//   int age;
//   int height;

// public:
//   int getAge() {
//     return this->age;
//   }
// };

// int main() {

//   Student first;
//   cout<<"Hello Ji"<<endl;

// }

// 2) Inheritance:

// class Human {
// public:
//   int eye;
//   int age;
//   int nose;

// public:
//   int getAge() { return this->age; }
// };

// class Male : public Human {
// public:
//   string color;
// };

// int main() {
//   Male obj1;
//   cout << obj1.color << endl;
//   cout << obj1.eye << endl;
//   cout << obj1.age << endl;
// }

// Multiple Inheritance:

// class Human {
// public:
//   int age;
//   int eye;

// public:
//   void speak() { cout << "Speaking" << endl; }
// };

// class Animal {
// public:
//   int color;

// public:
//   void bark() { cout << "Barking" << endl; }
// };

// class Hybrid : public Human, public Animal {
// public:
//   int height;
// };

// int main() {

//   Hybrid obj1;
//   obj1.bark();
//   obj1.speak();
//   cout << obj1.age << endl;
//   cout << obj1.color << endl;
// };

// Heirarchichal Inheritance:

// class A {
// public:
//   void func1() { cout << "func1" << endl; }
// };

// class B : public A {
// public:
//   void func2() { cout << "func2" << endl; }
// };

// class C : public A {
// public:
//   void func3() { cout << "func3" << endl; }
// };



// int main() {
//   A object1;
//   object1.func1();

//   B object2;
//   object2.func1();
//   object2.func2();

//   C object3;
//   object3.func1();
//   object3.func3();
// };