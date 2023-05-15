#include <iostream>
using namespace std;
class Cube{
    int side;
    public:
    Cube(){
        cout<<"Please enter the side length: ";
        cin>>side;
    }
    void display(){
        cout<<side*side*side;
    }
};
int main() {
    Cube cube;
    cube.display();
    return 0;
}
