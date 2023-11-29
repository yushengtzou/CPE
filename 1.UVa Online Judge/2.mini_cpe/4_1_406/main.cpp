//  鄒雨笙 UVa Online Judge 2023/11/14
//
//  Problem 406 - Prime Cuts


#include <iostream>
#include <vector>
#include <cmath>


bool isPrime(int number) {
    if (number < 2) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;
    for (int i = 3; i <= sqrt(number); i += 2) {
        if (number % i == 0) return false;
    }
    return true;
}


vector<int> generatePrimes(int N) {
    vector<int> primes = {1}; 
    for (int i = 2; i <= N; ++i) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}


void printCenteredPrimes(int N, int C) {
    vector<int> primes = generatePrimes(N);
    int totalPrimes = primes.size();
    int start, end;
    
    if (totalPrimes % 2 == 0) {
        start = totalPrimes / 2 - C;
        end = totalPrimes / 2 + C - 1;
    } else {
        start = totalPrimes / 2 - C + 1;
        end = totalPrimes / 2 + C - 1;
    }

    // Adjust the start and end if they go beyond the list size.
    start = max(0, start);
    end = min(end, totalPrimes - 1);

    cout << N << " " << C << ":";
    for (int i = start; i <= end; ++i) {
        cout << " " << primes[i];
    }
    cout << "\n\n";
}


int main() {
    int N, C;
    while (cin >> N >> C) {
        printCenteredPrimes(N, C);
    }
    return 0;
}

