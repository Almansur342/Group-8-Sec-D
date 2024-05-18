#include <iostream>
#include <cmath>
using namespace std;

signed main() {
   
    double lambda, theta, d;
    cout << "Enter the wavelength (in nm): "<<endl;
    cin >> lambda;
    cout << "Enter the angle (in degrees): "<<endl;
    cin >> theta;
    cout << "Enter the distance between the slits (in micrometers): "<<endl;
    cin >> d;


    if (lambda < 380 or lambda > 750) {
        cout << "Out of the range. Please enter a valid number." << endl;
        return 0;
    }


    double theta_rad = theta * M_PI / 180.0;

   
    lambda = lambda * 1e-9; 
    d = d * 1e-6; 

    int m = d * sin(theta_rad) / lambda;

    cout << m << "-th order maxima" << endl;

    return 0;
}