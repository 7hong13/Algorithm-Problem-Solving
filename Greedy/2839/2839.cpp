#include <iostream>
using namespace std;
int countMinimumSugarBag(int n) {
    int answer = -1;
    if (n < 5) {
        answer = n == 3 ? 1 : -1;
    }
    else if (n % 5 == 0) {
        answer = n / 5;
    }
    else {
        int savedN = n;
        int quotient = 0;
        while (savedN > 0) {
            if ((n - quotient * 5) % 3 == 0) {
                answer = quotient + (n - quotient * 5) / 3;
            }
            savedN -= 5;
            quotient++; 
        }
    }
    return answer;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    int n, answer;
    cin >> n;
    answer = countMinimumSugarBag(n);
    cout << answer << "\n";
    return 0;
}