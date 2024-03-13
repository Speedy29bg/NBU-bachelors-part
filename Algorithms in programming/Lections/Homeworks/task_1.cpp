#include <iostream>

int EuclideanAlgorithm(int a, int b) {
    if (a == 0) {
        return b;
    }
    return EuclideanAlgorithm(b % a, a);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << EuclideanAlgorithm(a, b);
    return 0;
}
