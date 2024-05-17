#include <iostream>
#include <cmath>
using namespace std;

signed main() {
    // Input values
    double lambda, theta, d;
    cout << "Enter the wavelength (in nm): ";
    cin >> lambda;
    cout << "Enter the angle (in degrees): ";
    cin >> theta;
    cout << "Enter the distance between the slits (in meters): ";
    cin >> d;

    // Check if wavelength is within the valid range
    if (lambda < 380 or lambda > 750) {
        cout << "Out of the range. Please enter a valid number." << endl;
        return 0;
    }

    // Convert angle from degrees to radians
    double theta_rad = theta * M_PI / 180.0;

    // Calculate order of maxima
    double m = d * sin(theta_rad) / lambda;

    // Output the result
    cout << m << "-th order maxima" << endl;

    return 0;
}