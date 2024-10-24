// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
const double pi = 3.141593;
int menu() {
    int m;
cout << "This is the option for the problem\n";
cout << "Type 1 for Circle\n";
cout << "Type 2 for Triangle\n";
cout << "Type 3 for Rectangle\n";
cout << "Please input the value for which option you want to solve\n";
cin >> m;
return m;

    
}
void circle(){
    int r;
     cout << "Please input the radius of the circle: ";
        cin >> r;
    double area, circumference, radius = r;
    area = pi * radius * radius;
    circumference = pi * 2 * radius;
        cout << "Radius: \n" << radius << endl << "Area: \n" << area << endl << "Circumference: \n" << circumference << endl;
        
}

void triangle(){
    double area, x, y;
    cout << "Input the value of length\n";
    cin >> x;
    cout << "Input the value of width\n";
    cin >> y;
    area = (x * y) / 2;
    cout << "The area of the triangle: " << area << endl;
}  
void rectangle(){
    double length, width;
    double area;
cout << "Input the value of Length: \n";
cin >> length;
cout << "Input the value of width: \n";
cin >> width;
    area = width * length;
cout << "The value of the area is: " << area;
}

int main(){
    int m=menu();
        if(m==1){
            circle();
        }
        else if (m==2){
            triangle();
        }
        else if (m==3){
            rectangle();
        }
        else cout << "Wtf did u input?";

}
