How to Implement and Run This C++ Gradient Descent Code
This program implements gradient descent for a quadratic function f(x) = ax² + bx + c. It takes user input for the coefficients 𝑎,𝑏,𝑐
the starting point, the learning rate, and the number of iterations.

🔹 How the Code Works
1. Function Definitions
function(double x): Returns the quadratic function value 
𝑓(𝑥)=𝑎𝑥2+𝑏𝑥+𝑐
derivative(double x): Computes the derivative 
𝑓′(𝑥)=2𝑎𝑥+𝑏
gradient-descent(learningRate, iterations, start point):
Starts with an initial guess x = startPoint.
Iteratively updates x using the gradient descent formula:
𝑥=𝑥−learningRate×𝑓′(𝑥)
x=x−learningRate×f ′(x)
Prints the value of x and f(x) at each step.

2. User Input
The user provides:
Quadratic function coefficients 
𝑎,𝑏,𝑐
a,b,c
Initial guess for x
Learning rate (step size)
Number of iterations to run

3. Output
The program prints each iteration's values and the final minimum value found.

