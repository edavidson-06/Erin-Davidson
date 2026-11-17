 C++ was developed starting in1979 by Bjarne Stroustup, originally named “C with classes”, as it was an adaptation of the C language with the addition of classes. By 1985, when it was officially released it was named C++, the “++” indicating it as a more advanced version of C while also being the incrementer symbol in the language. In 1989 with the release of C++98 the language became standardized. The program is for general use as well as high level programming, it’s one of the most widely used languages including for video game development and consoles. It is very commonly used for building infrastructure as C++ can manipulate the machine that it runs on in order for developers to maximize the hardware of machines with little space or energy available.
https://www.codecademy.com/resources/blog/what-is-c-plus-plus-used-for 
https://www.coursera.org/articles/what-is-c-plus-plus 

To install the language the language extension as well as a compiler need to be downloaded to the environment. https://code.visualstudio.com/docs/languages/cpp 
To run C++, a text editor (such as VS code), the language,  as well as a compiler is needed.
Similarly to java, single line comments are written using two forward slashes //, multi line comments are written inside of a single forward slash and asterisk on either side of the comment
	Ex: /* comment */


	Booleans:
Booleans are 1 bit primitive data types holding a value of either “true” or “false”. Within memory these values are resolved to either 1 or 0 respectively. A boolean requires 1 byte (8 bits) of memory despite only conceptually requiring 1 bit- this is due to memory addressing units.
https://dev.to/srsoumyax11/a-boolean-is-a-bit-so-why-does-it-take-a-byte-1nm9 
https://james-william-fletcher.medium.com/8-bools-in-1-byte-the-1-bit-boolean-cf6754b93230 

	Conditional statements:
C++ supports comparison conditions (< , >, <=, >=, <==, !=) which may be used in conjunction with conditional statements. Conditional statements lead to different code blocks to be performed based on if the statement within it resolves to true or false. Similar to most other languages, C++ supports if, else, if else (acts the same as elif in python), and switch statements.
https://www.w3schools.com/cpp/cpp_conditions.asp 

Code blocks under conditions in selection control statements?
Code blocks under selection control statements are delimited through the use of indentations and  curly braces {}following the conditional statement.The use of curly braces is not strictly enforced by the compiler, if they are not used only the very next line will be executed.

 	//The following statements are executed identically
   
    if (a)
        cout << "true!! \n";
        cout<< "not in if statement \n";


    if (a){
        cout << "true!! \n";
    }
    cout<< "not in if statement \n";
   




Short Circuiting:
Short circuiting when evaluating logical expressions saves computation time by not continuing to evaluate a multi-conditional statement once the statement is known to resolve to false. C++ does support short circuiting.
    
	if (z < 0 && x / 0 == 5){		 // cannot divide by 0, should throw error if it does not short circuit
    	cout << "no short-circuit \n";
	}
	else { 
		cout << "yay short circuit! \n"; 
	}





INCOMPLETE { Syntax for declaring a function:
The syntax for declaring a function is very similar to that of java. In C++ the syntax is as follows:

returnType functionName( parameterType param1, parameterType param2){
	//function code block
	return value;
}

In C++ where the function is declared does matter. The compiler reads top to bottom, so the function must be declared above main() or forward declaration could be used. A forward declaration informs the compiler that an identifier exists as well as what its return type and parameters are before the compiler gets to the definition.

	returnType functionName( parameterType param1, parameterType param2);

Functions can take in multiple parameters which do not need to be the same datatypes. 

Technically, multiple values cannot be returned from a function, however to get around that values can be bundled together.
https://www.geeksforgeeks.org/c/how-to-return-multiple-values-from-a-function-in-c-or-cpp/ 
https://www.fluentcpp.com/2021/07/09/how-to-return-several-values-from-a-function-in-c/ 

Data is passed by value, however a value can be explicitly passed by reference by using & on a variable. Passing by value does alter the original value, whereas passing by value does not. Passing by value is very useful to alter arguments.
}


Switch statements, is “break” used to get out, can “continue” be used to have all the conditions evaluated
Switch statements are used to execute a certain clock of code which corresponds to  a single value of an expression. Blocks of code within the switch statement are executed based on corresponding constant value of the case. At the bottom of a case’s code block is “break”, allowing the program to exit the switch statement and preventing it from falling through to the next case. “Continue” is not supported within switch statements to evaluate all expressions.
https://en.cppreference.com/cpp/language/switch 

