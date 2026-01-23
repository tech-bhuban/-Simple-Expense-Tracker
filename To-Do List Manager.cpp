
#include <iostream>
#include <vector>
#include <string>

class TodoList {
private:
    std::vector<std::string> tasks;
    
public:
    void addTask(const std::string& task) {
        tasks.push_back(task);
    }
    
    void viewTasks() {
        std::cout << "\n--- To-Do List ---\n";
        for (int i = 0; i < tasks.size(); i++) {
            std::cout << i + 1 << ". " << tasks[i] << "\n";
        }
    }
    
    void removeTask(int index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks.erase(tasks.begin() + index - 1);
        }
    }
};

int main() {
    TodoList myList;
    int choice;
    
    do {
        std::cout << "\n1. Add Task\n2. View Tasks\n3. Remove Task\n4. Exit\n";
        std::cout << "Choice: ";
        std::cin >> choice;
        std::cin.ignore();
        
        if (choice == 1) {
            std::string task;
            std::cout << "Enter task: ";
            std::getline(std::cin, task);
            myList.addTask(task);
        } else if (choice == 2) {
            myList.viewTasks();
        } else if (choice == 3) {
            int index;
            myList.viewTasks();
            std::cout << "Enter task number to remove: ";
            std::cin >> index;
            myList.removeTask(index);
        }
    } while (choice != 4);
    
    return 0;
}


// ### **5. To-Do List Manager**
// **Folder:** `05-todo-list-manager/README.md`
// ```markdown
// # 📝 To-Do List Manager

// A simple command-line task management application.

// ## ✨ Features
// - Add new tasks
// - View all tasks
// - Remove completed tasks
// - Simple menu interface

// ## 🚀 Usage
// ```bash
// g++ -o todo_manager todo_manager.cpp
// ./todo_manager