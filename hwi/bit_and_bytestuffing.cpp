#include <iostream>
using namespace std;

int main() {
    string data, result = "";
    cout << "Enter binary data: ";
    cin >> data;

    int count = 0;
    result += data;
    bool zero = false;

    for (int i = 0; i < data.length(); i++) {
        result += data[i];

        if (data[i] == '1') {
            count++;
            if (zero && count == 5) {
                result += '0';
                count = 0;
            }
        } else {
            zero = true;
            count = 0;
        }
    }
    result += data;

    cout << "After Bit Stuffing: " << result;
    return 0;
}