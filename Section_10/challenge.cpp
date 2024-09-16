#include <iostream> 
#include <cctype>

int main() {

    std::string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    std::string secretMessage {};
    std::string encryptedMessage {};
    std::string decryptedMessage {};

    std::cout << "Enter your secret message: ";
    getline(std::cin, secretMessage);

    std::cout << "Encrypting message..." << '\n';

    for(const auto& el : secretMessage) {
        for(int i{0}; i < alphabet.size(); i++) {
            if(el == alphabet.at(i)) {
                encryptedMessage.push_back(key.at(i));
            } 
        }
        if(!std::isalpha(el))
        encryptedMessage.push_back(el);
    }

    std::cout << "Encrypted message: " << encryptedMessage << '\n';
    std::cout << "Decrypting message... " << '\n';

    for(const auto& el : encryptedMessage) {
        for(int i{0}; i < key.size(); i++) {
            if(el == key.at(i)) {
                decryptedMessage.push_back(alphabet.at(i));
            } 
        }
        if(!std::isalpha(el))
        decryptedMessage.push_back(el);
    }

    std::cout << "Encrypted message: " << decryptedMessage << '\n';

    return 0;
}