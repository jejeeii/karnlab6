#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double a){ 
    return a*M_PI/180;
}

double rad2deg(double b){
    return b*180/M_PI;
}    
double findXComponent(double j1, double j2, double c1, double c2){
    return j1*cos(c1)+j2*cos(c2);
}    
double findYComponent(double k1, double k2, double d1, double d2){
    return k1*sin(d1)+k2*sin(d2);
}
double pythagoras(double e1, double e2){
    return sqrt(pow(e1,2)+pow(e2,2));
}
void showResult(double z, double p){
cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
cout << "Length of the resultant vector = " << z << endl;
cout << "Direction of the resultant vector (deg) = " << p << endl;
cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}