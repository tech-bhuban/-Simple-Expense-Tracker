
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
