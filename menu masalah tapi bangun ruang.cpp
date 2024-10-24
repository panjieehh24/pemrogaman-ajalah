// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
const double pi = 3.141593;
double volume;
int menu() {
    int m;
cout << "This is the option for the problem\n";
cout << "-----------------------------------\n";
cout << "1. Type 1 for Cube\n";
cout << "2. Type 2 for Cylinder\n";
cout << "3. Type 3 for Cone\n";
cout << "4. Type 4 for Sphere\n";
cout << "Please input the value for which option you want to solve\n";
cin >> m;
return m;

    
}
void cube(){
    double height, width, length;
     cout << "Please input the value of length: \n";
        cin >> length;
    cout << "Please input the value of width: \n";
        cin >> width;
    cout << "Please input the value of height: \n";
        cin >> height;
    
    volume = length * width * height;
    
        cout << "volume of Cube: " << volume;
        
}

void cylinder(){
    double radius, height;
    cout << "Input the value of radius: \n";
    cin >> radius;
    cout << "Input the value of height: \n";
    cin >> height;
    volume = pi * radius * radius * height;
    cout << "The volume of the cylinder is: " << volume << endl;
}  
void cone(){
    double radius, height;
cout << "Input the value of Radius: \n";
cin >> radius;
cout << "Input the value of height: \n";
cin >> height;
    volume = pi * radius * radius * height / 3;
cout << "The value of the volume is: " << volume;
}

void sphere(){
    double radius;
        cout << "Please input the value of radius: \n";
        cin >> radius;
            volume = 4 * radius * radius * radius * pi / 3;
        cout << "The value of volume is: " << volume;
}

int main(){
    int m=menu();
        if(m==1){
            cube();
        }
        else if (m==2){
            cylinder();
        }
        else if (m==3){
            cone();
        }
        else if (m==4){
            sphere();
        }
        else cout << "Sorry your input is not a part of list of the option please re run the code.";

}
