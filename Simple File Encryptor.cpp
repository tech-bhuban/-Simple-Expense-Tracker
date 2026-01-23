
#include <iostream>
#include <fstream>
#include <string>

class SimpleEncryptor {
public:
    static void encryptFile(const std::string& filename, int key) {
        std::ifstream inFile(filename);
        std::ofstream outFile("encrypted_" + filename);
        char ch;
        
        while (inFile.get(ch)) {
            outFile.put(ch + key);
        }
        
        inFile.close();
        outFile.close();
    }
    
    static void decryptFile(const std::string& filename, int key) {
        std::ifstream inFile(filename);
        std::ofstream outFile("decrypted_" + filename);
        char ch;
        
        while (inFile.get(ch)) {
            outFile.put(ch - key);
        }
        
        inFile.close();
        outFile.close();
    }
};

int main() {
    SimpleEncryptor::encryptFile("test.txt", 5);
    std::cout << "File encrypted!\n";
    return 0;
}



// ### **3. Simple File Encryptor**
// **Folder:** `03-file-encryptor/README.md`
// ```markdown
// # 🔒 Simple File Encryptor

// A basic file encryption/decryption tool using Caesar cipher technique.

// ## ⚠️ Disclaimer
// This is for educational purposes only. Not suitable for real encryption needs.

// ## 🔧 How It Works
// 1. Reads input file character by character
// 2. Adds encryption key to each character
// 3. Writes encrypted content to new file

// ## 🚀 Usage
// ```bash
// # Compile
// g++ -o encryptor encryptor.cpp

// # Encrypt a file
// ./encryptor