#include <iostream>
#include "Scanner.hpp"

void run_file() {
    
}

// run interactive prompt. For more info on why repl, read Crafting Interpreters ;)
void run_repl() {
    std::string command; 
    while (true) {
        std::cout << "cpplux>";
        std::cin >> command;
        Scanner scanner = Scanner(command);
    }
}

int main(int argc, char** argv) {
    if (argc == 1) {
        run_repl();     
    } else if (argc == 2) {
        
    } else {
    
    }
    return 0;
}
