#include <iostream>
using namespace std;

int main(){
//Qui vanno definite le variabili
float a=0, b=0, c=0, triangle_area=0, square_area=0, rectangle_area=0, trapeze_area=0;
cin >> a >> b >> c;
//Qui va scritto il codice per eseguire i calcoli richiesti
triangle_area=(a*b)/2;
square_area=a*a;
rectangle_area=a*b;
trapeze_area=((a+b)*c)/2;
cout << triangle_area << " " << square_area << " " << rectangle_area << " " << trapeze_area << endl;
return 0;
}
