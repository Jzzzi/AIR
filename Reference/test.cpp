#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    // A program to git add, commit, and push
    std::string commitMessage;
    std::cout << "Enter commit message: ";
    std::getline(std::cin, commitMessage);
    std::string command = "git add . && git commit -m \"" + commitMessage + "\" && git push";
    system(command.c_str());
    std::cout << "Pushed to remote repository" << std::endl;
    return 0;
}
