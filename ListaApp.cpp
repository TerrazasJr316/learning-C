#include <iostream>
#include <fstream>
#include <vector>
#include <string>

void showTasks(const std::vector<std::string> &tasks)
{
    std::cout << "To-Do List: " << std::endl;
    for (int i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << "." << tasks[i] << std::endl;
    }
}

int main() {
    std::vector<std::string> tasks;
    std::string task;
    char choice;

    std::ifstream inputFile("tasks.txt");
    while (getline(inputFile, task)) {
        tasks.push_back(task);
    }
    inputFile.close();

    do {
        std::cout << "A - Add a task" << std::endl;
        std::cout << "V - View tasks" << std::endl;
        std::cout << "Q - Quit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 'A':
            case 'a':
                std::cout << "Enter a task: ";
                std::cin.ignore();
                getline(std::cin, task);
                tasks.push_back(task);
                break;
            case 'V':
            case 'v':
                showTasks(tasks);
                break;
        }
    } while (choice != 'Q' && choice != 'q');

    std::ofstream outputFile("tasks.txt");
    for (const auto &t : tasks) {
        outputFile << t << std::endl;
    }
    outputFile.close();
}
