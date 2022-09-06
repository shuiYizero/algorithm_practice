//
// Created by Aqua wang on 2022/9/6.
//

#include <iostream>

using namespace std;


class Person {
    private :
        int age, height;
        double money;
        string books[100];

    public :
        string name;
        void say() {
            cout << "i'm" << name << endl;
        }
        void set_age(int a) {
            age = a;
        }
        int get_age() {
            return age;
        }
        void add_money(double x) {
            money += x;
        }

}person_a, person_b, persons[100];

int main() {

    Person c;

    c.set_age(18);
    c.add_money(100);
    c.say();
    cout << c.get_age() << endl;

    return 0;
}