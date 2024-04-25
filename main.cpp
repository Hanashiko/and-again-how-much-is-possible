#include <iostream>

using namespace std;
int count(int N) {
    int opers = 0;
    while (N > 0){
        int sum = 0;
        int num = N;
        while(num > 0){
            sum += num % 10;
            num /= 10;
        }
        N -= sum;
        opers++;
    }
    return opers;
}
int main() {
    int number;
    cin >> number;
    int opers = count(number);
    cout << opers;
    return 0;
}
