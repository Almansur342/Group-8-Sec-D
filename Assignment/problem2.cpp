#include <iostream>
#include <cmath>
using namespace std;

signed main() {
    double theta_deg = 45.0; // Angle in degrees

    // Converting the value of theta into radians
    double theta_rad = theta_deg * M_PI / 180.0;

    // Calculate the ratio of slit width to wavelength
    double ratio = 1.0 / sin(theta_rad);

    // Output the result
    cout << "Ratio of slit width to wavelength: " << ratio << endl;

    return 0;
}