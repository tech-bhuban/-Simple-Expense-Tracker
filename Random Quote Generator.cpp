
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


// ### **6. Random Quote Generator**
// **Folder:** `06-random-quote-generator/README.md`
// ```markdown
// # 💫 Random Quote Generator

// Generates inspirational quotes randomly from a collection.

// ## 📚 Quote Database
// Contains quotes from famous personalities:
// - Steve Jobs
// - Eleanor Roosevelt
// - Chris Pine
// - And more...

// ## 🎲 Features
// - Random quote generation
// - Add custom quotes
// - Clean output formatting
// - Time-based randomization

// ## 🚀 Usage
// ```bash
// g++ -o quote_generator quote_generator.cpp
// ./quote_generator