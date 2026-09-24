#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
//Use code with caution.🔍 How It Works#include <iostream>: A preprocessor directive that includes the standard input-output stream library. It allows you to use std::cout to print text.int main(): The entry point of every C++ program. The execution of the code starts here.std::cout: The standard output stream object used to display text to your console.<<: The insertion operator, which pushes the text string into the output stream.std::endl: Inserts a newline character and flushes the output stream buffer, ensuring the text is immediately displayed.return 0;: Terminates the main() function and signals to the operating system that the program ran successfully.⚡ Alternative Version (Using Namespace)If you do not want to type std:: before cout and endl, you can add a using namespace std; statement at the top:cpp#include <iostream>
using namespace std;