#include <iostream>
#include <deque>
#include <string>

class MyDeque {
private:
    std::deque<int> dq;

public:
    void push_front(int x) {
        dq.push_front(x);   
        std::cout << "ok" << std::endl;
    }

    void push_back(int x) {
        dq.push_back(x);
        std::cout << "ok" << std::endl;
    }

    void pop_front() {
        if (!dq.empty()) {
            std::cout << dq.front() << std::endl;
            dq.pop_front();
        } else {
            std::cout << "error" << std::endl;
        }
    }

    void pop_back() {
        if (!dq.empty()) {
            std::cout << dq.back() << std::endl;
            dq.pop_back();
        } else {
            std::cout << "error" << std::endl;
        }
    }

    void front() {
        if (!dq.empty()) {
            std::cout << dq.front() << std::endl;
        } else {
            std::cout << "error" << std::endl;
        }
    }

    void back() {
        if (!dq.empty()) {
            std::cout << dq.back() << std::endl;
        } else {
            std::cout << "error" << std::endl;
        }
    }

    void size() {
        std::cout << dq.size() << std::endl;
    }

    void clear() {
        dq.clear();
        std::cout << "ok" << std::endl;
    }

    void exit() {
        std::cout << "bye" << std::endl;
    }
};

int main() {
    MyDeque deque;
    std::string command;
    
    while (std::cin >> command) {
        if (command == "push_front") {
            int x;
            if (std::cin >> x) {
                deque.push_front(x);
            } else {
                std::cout << "error" << std::endl;
                std::cin.clear();
                std::cin.ignore();
            }
        } else if (command == "push_back") {
            int x;
            if (std::cin >> x) {
                deque.push_back(x);
            } else {
                std::cout << "error" << std::endl;
                std::cin.clear();
                std::cin.ignore();
            }
        } else if (command == "pop_front") {
            deque.pop_front();
        } else if (command == "pop_back") {
            deque.pop_back();
        } else if (command == "front") {
            deque.front();
        } else if (command == "back") {
            deque.back();
        } else if (command == "size") {
            deque.size();
        } else if (command == "clear") {
            deque.clear();
        } else if (command == "exit") {
            deque.exit();
            break;
        } else {
            std::cout << "error" << std::endl;
            std::cin.clear();
            std::cin.ignore();
        }
    }
    return 0;
}
