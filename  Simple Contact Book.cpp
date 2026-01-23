
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Contact {
    std::string name;
    std::string phone;
    std::string email;
};

class ContactBook {
private:
    std::vector<Contact> contacts;
    
public:
    void addContact(const std::string& name, const std::string& phone, const std::string& email) {
        Contact contact{name, phone, email};
        contacts.push_back(contact);
    }
    
    void displayContacts() {
        std::cout << "\n--- Contacts ---\n";
        for (const auto& contact : contacts) {
            std::cout << "Name: " << contact.name 
                     << "\nPhone: " << contact.phone
                     << "\nEmail: " << contact.email 
                     << "\n---\n";
        }
    }
    
    void searchContact(const std::string& name) {
        for (const auto& contact : contacts) {
            if (contact.name.find(name) != std::string::npos) {
                std::cout << "Found: " << contact.name 
                         << " (" << contact.phone << ")\n";
            }
        }
    }
};

int main() {
    ContactBook book;
    
    book.addContact("Alice Johnson", "123-456-7890", "alice@email.com");
    book.addContact("Bob Smith", "987-654-3210", "bob@email.com");
    
    book.displayContacts();
    book.searchContact("Alice");
    
    return 0;
}
