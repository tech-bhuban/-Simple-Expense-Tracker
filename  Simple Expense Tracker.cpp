
#include <iostream>
#include <vector>
#include <iomanip>

struct Expense {
    std::string description;
    double amount;
    std::string category;
};

class ExpenseTracker {
private:
    std::vector<Expense> expenses;
    double total = 0;
    
public:
    void addExpense(const std::string& desc, double amt, const std::string& cat) {
        Expense exp{desc, amt, cat};
        expenses.push_back(exp);
        total += amt;
    }
    
    void showSummary() {
        std::cout << "\n--- Expense Summary ---\n";
        for (const auto& exp : expenses) {
            std::cout << std::setw(15) << std::left << exp.description
                     << std::setw(10) << exp.amount
                     << exp.category << "\n";
        }
        std::cout << "\nTotal: $" << total << "\n";
    }
};

int main() {
    ExpenseTracker tracker;
    tracker.addExpense("Groceries", 45.50, "Food");
    tracker.addExpense("Gas", 35.00, "Transport");
    tracker.addExpense("Netflix", 15.99, "Entertainment");
    
    tracker.showSummary();
    return 0;
}
//  _GLIBCXX_HAVE_LOG10L

// ### **8. Simple Expense Tracker**
// **Folder:** `08-expense-tracker/README.md`
// ```markdown
// # 💰 Simple Expense Tracker

// A basic personal finance tracking application.

// ## 📊 Features
// - Add expenses with description
// - Categorize expenses
// - View expense summary
// - Calculate total spending

// ## 🏷️ Categories
// - Food
// - Transport
// - Entertainment
// - Utilities
// - Shopping
// - Other

// ## 🚀 Usage
// ```bash
// g++ -o expense_tracker expense_tracker.cpp
// ./expense_tracker