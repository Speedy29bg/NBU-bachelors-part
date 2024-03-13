#include <iostream>
#include <vector>

int EuclideanAlgorithm(int a, int b) {
    if (a == 0) {
        return b;
    }
    return EuclideanAlgorithm(b % a, a);
}

int main() {
    std::vector<int> a, b;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        a.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        b.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        std::cout << EuclideanAlgorithm(a[i], b[i]) << " ";
    }
    return 0;
}