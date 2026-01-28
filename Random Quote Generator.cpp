
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

class QuoteGenerator {
private:
    std::vector<std::string> quotes = {
        "The only way to do great work is to love what you do. - Steve Jobs",
        "Innovation distinguishes between a leader and a follower. - Steve Jobs",
        "Your time is limited, so don't waste it living someone else's life. - Steve Jobs",
        "Stay hungry, stay foolish. - Steve Jobs",
        "The future belongs to those who believe in the beauty of their dreams. - Eleanor Roosevelt"
    };
    
public:
    QuoteGenerator() {
        srand(time(0));
    }
    
    std::string getRandomQuote() {
        return quotes[rand() % quotes.size()];
    }
    
    void addQuote(const std::string& quote) {
        quotes.push_back(quote);
    }
};

int main() {
    QuoteGenerator generator;
    
    std::cout << "Random Quote: " << generator.getRandomQuote() << std::endl;
    
    // Add your own quote
    generator.addQuote("Programming isn't about what you know; it's about what you can figure out. - Chris Pine");
    
    return 0;
}

