#include <iostream>
using namespace std;

int main() {
    string data, result = "";
    cout << "Enter binary data: ";
    cin >> data;

    int count = 0;
    result += data;

    for (int i = 0; i < data.length(); i++) {
        result += data[i];

        if (data[i] == '1') {
            count++;
            if (count == 5) {
                result += '0';
                count = 0;
            }
        } else {
            count = 0;
        }
    }
    result += data;

    cout << "After Bit Stuffing: " << result;
    return 0;
}