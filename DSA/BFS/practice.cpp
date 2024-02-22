#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << endl
#define ll long long
#define Int int
#define ck(x) cout << #x << " = " << x << endl;

string decryptCaesarCipher(string ciphertext, int key) {
    string decryptedText = "";

    for (char& ch : ciphertext) {
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            ch = static_cast<char>((ch - base - key + 26) % 26 + base);
        }
        decryptedText += ch;
    }

    return decryptedText;
}

void crackCaesarCipher(string ciphertext) {
    for (int key = 0; key < 26; ++key) {
        string decryptedText = decryptCaesarCipher(ciphertext, key);
        cout << "Key " << key << ": " << decryptedText << endl;
    }
}

int main() {
    string ciphertext = "XNZ XVMIDQVG VO DDXO WPDGYDIB NPNO DN BJDIB OJ WZ BMZVO VBVDI.";

    cout << "Possible Decryptions:" << endl;
    crackCaesarCipher(ciphertext);

    string decryptedText = decryptCaesarCipher(ciphertext, 0);

    
    return 0;
}
