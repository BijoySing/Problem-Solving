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
            // Check if the character is an alphabet
            char base = isupper(ch) ? 'A' : 'a';  
            // Determine the base value based on uppercase or lowercase
            ch = static_cast<char>((ch - base - key + 26) % 26 + base);  
            // Perform Caesar Cipher decryption
        }
        decryptedText += ch;  
        // Append the decrypted character to the result string
    }
    return decryptedText;
}

void crackCaesarCipher(string ciphertext) {
    for (int key = 0; key < 26; ++key) {  
        // Iterate through all possible keys
        string decryptedText = decryptCaesarCipher(ciphertext, key);  
        // Decrypt using the current key
        cout << "Key " << key << ": " << decryptedText << endl;  
        // Output the decrypted text with the current key
    }
}

int main() {
    string ciphertext = "ZKDW GR BRX JHW ZKHQ BRX FURVV D VQRZPDQ ZLWK D YDPSLUH? IURVWELWH";  
    // Provided Caesar ciphertext

    cout << "Possible Decryptions:" << endl;  
    // Output a header indicating possible decryptions
    crackCaesarCipher(ciphertext);  
    // Call the function to crack the Caesar Cipher

    string decryptedText = decryptCaesarCipher(ciphertext, 0);  
    // Decrypt using a specific key (here, key 0)
    
}
