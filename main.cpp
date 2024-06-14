#include <iostream>
#include <string>

using namespace std;

int main() {
    string user_input;
    cout << "Введите вашу строку: ";
    getline(cin, user_input);
    
    int cnt_chairs = 0
    string user_input_copy = user_input;    
    
    for (size_t i = 0; i < user_input_copy.length(); ++i) {
        if (user_input_copy[i] == 'E') {
            cnt_chairs += 1;
        }
    }
        
    cout << "Минимальное количество стульев: " << cnt_chairs << endl;
    return 0;
}

