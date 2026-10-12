#include <iostream>


using namespace std;



class Rectangle {

private:
    double width;
    double length;


public:
    void settingWidth(double w){
        width=w;
    }

    void settingLength(double l){
        length=l;
    }
    double gettingWidth(){
        return width;
    }

    double gettingLength(){
        return length;
    }


    double calculatingArea(){
        return width*length;
    }

    double calculatingPerimeter(){
        return 2 * (width + length);
    }
};


int main() {
    
    Rectangle rectangle1;
    rectangle1.settingWidth(6);
    rectangle1.settingLength(9);
    cout << "Rectangle 1: " << endl;
    cout << "Width is: " << rectangle1.gettingWidth() << endl;
    cout << "Length is: " << rectangle1.gettingLength() << endl;
    cout << "Area is: " << rectangle1.calculatingArea() << endl;
    cout << "Perimeter is: " << rectangle1.calculatingPerimeter() << endl;

    
    Rectangle rectangle2;
    rectangle2.settingWidth(2);
    rectangle2.settingLength(13);
    cout << "\nRectangle 2: " << endl;
    cout << "Width is: " << rectangle2.gettingWidth() << endl;
    cout << "Length is: " << rectangle2.gettingLength() << endl;
    cout << "Area is: " << rectangle2.calculatingArea() << endl;
    cout << "Perimeter is: " << rectangle2.calculatingPerimeter() << endl;


    return 0;
}