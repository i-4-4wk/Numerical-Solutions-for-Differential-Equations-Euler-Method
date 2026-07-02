#include <iostream>
#include <cmath>
using namespace std;

void calcX(double& x, double& y, double& h, int& n);
double clacY(double x,double h);// dy/dx = 3x

class arg{
public:
double x ,y , h; 
double& rx = x;double& ry = y;double& rh = h;

};


int main(){
arg g1;
double h, x0, y0;int n;
cout << "--------------------eleur methode calculation--------------------\n";
cout << "enter the condition x0 = "; cin >> x0;
cout << "tje condition y0 = ";cin >> y0;
cout << "enter the step size h: ";cin >> h; g1.rh = h;
cout << "times n: ";cin >> n;
cout << "calculation of x :\n";
calcX(x0, y0,g1.h, n);

}

void calcX(double& x, double& y,double& h, int& n){
cout << "x0 = "<< x << "| y0 = "<< y<< '\n';
 for(int i = 1; i <= n; i++){
    x = x + h;
    y = exp(x);
   cout << "x"<< i<< " = " << x << " | "; 
    cout << "y"<< i<< " = " << y << "\n";
 }
 }
