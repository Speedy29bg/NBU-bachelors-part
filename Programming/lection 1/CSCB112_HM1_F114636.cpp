// // Задача 1. Съставете С++ конзолна програма, чрез която да изведете 
// // трите си имена на екрана.
// #include <iostream>
// #include <string>
// #include <vector>
// int main()
// {
//     // with user input

//     // std::vector<std::string> names;
//     // std::string temp;
//     // for (int i = 0; i < 3;i++)
//     // {
//     //     std::getline(std::cin, temp);
//     //     names.push_back(temp);
//     // }

//     // for (int i = 0; i < 3;i++)
//     // {
//     //     std::cout << names[i] << std::endl;
//     // }

//     //------------------------------------
    
//     //without user input
//     const std::string firstName  = "Georgi";
//     const std::string secondName = "Rumenov";
//     const std::string lastName   = "Iliev";

//     std::cout << firstName << " " << secondName << " " << lastName << std::endl;

//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------------------------

// // Задача 2. Съставете С++ конзолна програма, чрез която да изведете на 
// // екрана, в кой университет учите и по каква програма се обучавате.
// #include <iostream>
// #include <string>
// #include <vector>

// int main ()
// {
//     // with user input

//     // std::string uni;
//     // std::string spec;

//     // std::getline(std::cin, uni);
//     // std::getline(std::cin, spec);

//     //------------------------------------
//     // without user input
//     const std::string uni  = "NBU";
//     const std::string spec = "Informatics";

//     std::cout << uni << " " << spec;
//     return 0;
// }



//-------------------------------------------------------------------------------------------------------------------------------------


// // Задача 3. Съставете С++ конзолна програма, чрез която да изведете на
// // екрана всички служебни думи на езика С++.
// #include <iostream>
// #include <string>
// #include <vector>

// const std::vector<std::string> reservedWords = {"alignas (since C++11)", "alignof (since C++11)", "and", "and", "and_eq", "asm", "atomic_cancel (TM TS)", "atomic_commit (TM TS)",
//                                                 "atomic_noexcept (TM TS)", "auto(1)", "bitand", "bitor", "bool", "break", "case", "catch", "char", "char16_t (since C++11)",
//                                                 "char32_t (since C++11)", "class(1)", "compl", "concept (since C++20)", "const", "constexpr (since C++11)", "const_cast", "continue",
//                                                 "co_await (coroutines TS)", "co_return (coroutines TS)", "co_yield (coroutines TS)", "decltype (since C++11)", "default(1)", "delete(1)",
//                                                 "do", "double", "dynamic_cast", "else", "enum", "explicit", "export(1)", "extern(1)", "false", "float", "for", "friend", "goto", "if",
//                                                 "import (modules TS)", "inline(1)", "int", "long", "module (modules TS)", "mutable(1)", "namespace", "new", "noexcept (since C++11)", "not",
//                                                 "not_eq", "nullptr (since C++11)", "operator", "or", "or_eq", "private", "protected", "public", "register(2)", "reinterpret_cast",
//                                                 "requires (since C++20)", "return", "short", "signed", "sizeof(1)", "static", "static_assert (since C++11)", "static_cast", "struct(1)", "switch",
//                                                 "synchronized (TM TS)", "template", "this", "thread_local (since C++11)", "throw", "true", "try", "typedef", "typeid", "typename", "union",
//                                                 "unsigned", "using(1)", "virtual", "void", "volatile", "wchar_t", "while", "xor", "xor_eq"};

// int main()
// {
//     const uint8_t reservedWordsSize = reservedWords.size();
//     for (uint8_t i = 0; i < reservedWordsSize; i++)
//     {
//         std::cout << reservedWords[i] << " ";
//     }
//     return 0;
// }



//-------------------------------------------------------------------------------------------------------------------------------------



// // Задача 4. Съставете С++ конзолна програма, чрез която да изведете на
// // екрана какво е значението на понятията лексема, литерал, команда.
// #include <iostream>

// int main()
// {
//     std::cout << "A token is the smallest unit in a program that has meaning and is recognized by the compiler." << std::endl;
//     std::cout << "A literal is a constant value that is directly included in the program's code. Examples include integer literals (e.g., 42), character literals (e.g., 'A'), and string literals (e.g., \"Hello\")." << std::endl;
//     std::cout << "A statement is an instruction written in the programming language that specifies the actions to be performed by the computer. Examples of statements in C++ include variable declarations, function calls, loops, and conditional statements." << std::endl;

//     return 0;
// }
