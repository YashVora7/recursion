#include <iostream>
using namespace std;

bool isPrime(int num, int i = 2) {
    if (num <= 1)
        return false;
    if (i * i > num)
        return true;
    if (num % i == 0)
        return false;

    return isPrime(num, i + 1);
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}
