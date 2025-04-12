//accept n element till user gives 1st -ve
//using operator overloading :overload unary - on vector
//int x=10;  -x--->-10
//v=[11,22,33]   -v--->[-11,-22,-33]  
#include <iostream>
#include <vector>
using namespace std;

class MyVector {
public:
    vector<int> data;

    // Add element to vector
    void add(int val) {
        data.push_back(val);
    }

    // Overload unary minus to return negated vector
    MyVector operator-() {
        MyVector temp;
        for (int x : data) {
            temp.data.push_back(-x);
        }
        return temp;
    }

    // Print all elements
    void print() {
        for (int x : data)
            cout << x << " ";
        cout << endl;
    }

    // Get average
    double getAvg() {
        if (data.empty()) return 0;
        double sum = 0;
        for (int x : data)
            sum += x;
        return sum / data.size();
    }

    // Print elements greater than avg
    void printGreaterThanAvg(double avg) {
        for (int x : data) {
            if (x > avg)
                cout << x << " ";
        }
        cout << endl;
    }
};

int main() {
    MyVector v;
    int x;

    cout << "Enter numbers (stop with negative):\n";
    while (cin >> x && x >= 0) {
        v.add(x);
    }

    cout << "Original vector: ";
    v.print();

    MyVector neg = -v; // Use overloaded - operator
    cout << "Negated vector: ";
    neg.print();

    double avg = v.getAvg();
    cout << "Average = " << avg << endl;

    cout << "Elements > average: ";
    v.printGreaterThanAvg(avg);

    return 0;
}