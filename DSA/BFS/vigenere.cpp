#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define ll long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;

std::string vigenere(const std::string& text, const std::string& key, char mode) {
    std::string result = "";
    size_t key_index = 0;

    for (char ch : text) {
        if (std::isalpha(ch)) {
            int shift = std::toupper(key[key_index]) - 'A';
            if (mode == 'D') {
                shift = -shift;
            }
            char shifted_char = (ch - 'A' + shift + 26) % 26 + 'A';
            if (std::islower(ch)) {
                shifted_char += 'a' - 'A';
            }
            key_index = (key_index + 1) % key.length();
            result += shifted_char;
        } else {
            result += ch;
        }
    }

    return result;
}

int main() {
    while (true) {
        std::string choice;
        std::cout << "Enter Method (E for Encryption, D for Decryption, EX for exit): ";
        std::cin >> choice;

        if (choice == "E") {
            std::string plain_text, key;
            std::cout << "Enter the plain text: ";
            std::cin.ignore();  // Clear newline from previous input
            std::getline(std::cin, plain_text);

            std::cout << "Enter the key: ";
            std::getline(std::cin, key);

            std::string encrypted_text = vigenere(plain_text, key, 'E');
            std::cout << "Encrypted text: " << encrypted_text << std::endl;

        } else if (choice == "D") {
            std::string encrypted_text, key;
            std::cout << "Enter the encrypted text: ";
            std::cin.ignore();  // Clear newline from previous input
            std::getline(std::cin, encrypted_text);

            std::cout << "Enter the key: ";
            std::getline(std::cin, key);

            std::string decrypted_text = vigenere(encrypted_text, key, 'D');
            std::cout << "Decrypted text: " << decrypted_text << std::endl;

        } else if (choice == "EX") {
            std::cout << "Exiting the program." << std::endl;
            break;
        } else {
            std::cout << "Invalid choice. Please enter E, D, or EX." << std::endl;
        }
    }

    return 0;
}
