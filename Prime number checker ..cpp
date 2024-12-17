#include <iostream>
using namespace std;

	bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int number, limit;

    cout << "Enter a number to check if it's prime: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
}
    cout << "Enter limit: ";
    cin >> limit;

    cout << "Prime numbers up to " << limit << ": ";
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;

}
/*Example Output

Input:

Enter a number to check if it's prime: 7

Enter limit: 10


Output:

7 is a prime number.
Prime numbers up to 10: 2 3 5 7  */

