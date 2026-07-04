#include <iostream>
#include <cmath>
#include <set>
using namespace std;

class ComplexNumber {

    private:
        float real;
        float imaginary;

    public:
        ComplexNumber(float r = 0.0, float i = 0.0) : real(r), imaginary(i) {}
        float r() const {return real;}
        float i() const {return imaginary;}


        ComplexNumber add(const ComplexNumber& other) const {
            return ComplexNumber(real + other.real, imaginary + other.imaginary);
        }

        ComplexNumber subtract(const ComplexNumber& other) const {
            return ComplexNumber(real - other.real, imaginary - other.imaginary);
        }

        ComplexNumber multiply(const ComplexNumber& other) const {
            return ComplexNumber(real * other.real - imaginary * other.imaginary,
                                 real * other.imaginary + imaginary * other.real);
        }

        ComplexNumber divide(const ComplexNumber& other) const {
            float denominator = other.real * other.real + other.imaginary * other.imaginary;
            return ComplexNumber((real * other.real + imaginary * other.imaginary) / denominator,
                                 (imaginary * other.real - real * other.imaginary) / denominator);
        }

        ComplexNumber negate() const {
            return ComplexNumber(-real, -imaginary);
        }

        ComplexNumber magnitude() const {
            return ComplexNumber(sqrt(real * real + imaginary * imaginary), 0);
        }

        ComplexNumber conjugate() const {
            return ComplexNumber(real, -imaginary);
        }

        string prettyPrint() const {
            if (imaginary >= 0) {
                return to_string(real) + " + " + to_string(imaginary) + "i";
            } else {
                return to_string(real) + " - " + to_string(-imaginary) + "i";
            }
        }
};


int main() {
    ComplexNumber numberOne = ComplexNumber(5.0, 7.0);
    ComplexNumber numberTwo = ComplexNumber(2.5, 3.1);
 
    ComplexNumber numberThree = numberOne.add(numberTwo);
    cout << numberThree.prettyPrint();
 
    ComplexNumber numberFour = numberOne.subtract(numberTwo);
    cout << numberFour.prettyPrint();
 
    ComplexNumber numberFive = numberOne.multiply(numberTwo);
    cout << numberFive.prettyPrint();
 
    ComplexNumber numberSix = numberOne.divide(numberTwo);
    cout << numberSix.prettyPrint();
 
    ComplexNumber numberSeven = numberOne.negate();
    cout << numberSeven.prettyPrint();
 
    ComplexNumber numberEight = numberOne.conjugate();
    cout << numberEight.prettyPrint();

    float magnitude = numberOne.magnitude();
    cout << magnitude;

    return 0;
}
