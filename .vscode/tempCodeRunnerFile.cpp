#include <iostream>
#include <cmath>

using namespace std;

// Function coefficients
double a, b, c;

// Define the function f(x) = ax^2 + bx + c
double function(double x) {
    return a * x * x + b * x + c;
}

// Define the derivative f'(x) = d/dx(ax^2 + bx + c)
double derivative(double x) {
    return 2 * a * x + b;
}

// Gradient Descent Algorithm
double gradientDescent(double learningRate, int iterations, double startPoint) {
    double x = startPoint; // Initial guess
    
    for (int i = 0; i < iterations; i++) {
        double grad = derivative(x);  // Compute gradient
        x = x - learningRate * grad;  // Update x
        
        cout << "Iteration " << i + 1 << ": x = " << x << ", f(x) = " << function(x) << endl;
    }

    return x;
}

int main() {
    double learningRate;
    int iterations;
    double startPoint;

    // Take user input for function coefficients
    cout << "Enter coefficients for f(x) = ax^2 + bx + c" << endl;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    // Take user input for gradient descent parameters
    cout << "Enter initial guess for x: ";
    cin >> startPoint;
    cout << "Enter learning rate: ";
    cin >> learningRate;
    cout << "Enter number of iterations: ";
    cin >> iterations;

    // Run Gradient Descent
    cout << "\nStarting Gradient Descent...\n";
    double minX = gradientDescent(learningRate, iterations, startPoint);
    
    cout << "\nMinimum found at x = " << minX << " with f(x) = " << function(minX) << endl;

    return 0;
}
