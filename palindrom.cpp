#include <iostream>
using namespace std;

int reverseNumber(int num, int rev = 0) {
    if (num == 0)
        return rev;
    else
        return reverseNumber(num / 10, rev * 10 + num % 10);
}

bool isPalindrome(int num) {
    int reversed = reverseNumber(num);
    return (reversed == num);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;

    return 0;
}
