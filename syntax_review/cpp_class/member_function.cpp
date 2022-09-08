/*  
 * created by shuiyi 
 * on 2022/9/8 21:45
 *
**/

#include <iostream>
#include <algorithm>

using namespace std;

class Box {
    public :
        double length;
        double breadth;
        double height;
        double getVolume() const;
};
double Box::getVolume() const {
    return length * breadth * height;
}
int main() {
    Box box{};
    cout << box.getVolume() << "\n";
    return 0;
}
