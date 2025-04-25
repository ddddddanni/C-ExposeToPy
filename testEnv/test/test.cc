#include <pybind11/pybind11.h>

namespace py = pybind11;

int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    return a / b;
}

PYBIND11_MODULE(test, m) {
    m.def("add", &add, "A function which adds two numbers");
    m.def("subtract", &subtract, "A function which subtracts two numbers");
    m.def("multiply", &multiply, "A function which multiplies two numbers");
    m.def("divide", &divide, "A function which divides two numbers");
}