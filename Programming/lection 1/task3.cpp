// Задача 3. Съставете С++ конзолна програма, чрез която да изведете на
// екрана всички служебни думи на езика С++.
#include <iostream>
#include <string>
#include <vector>

static const std::vector<std::string> reservedWords = {"alignas (since C++11)", "alignof (since C++11)", "and", "and", "and_eq", "asm", "atomic_cancel (TM TS)", "atomic_commit (TM TS)",
                                                "atomic_noexcept (TM TS)", "auto(1)", "bitand", "bitor", "bool", "break", "case", "catch", "char", "char16_t (since C++11)",
                                                "char32_t (since C++11)", "class(1)", "compl", "concept (since C++20)", "const", "constexpr (since C++11)", "const_cast", "continue",
                                                "co_await (coroutines TS)", "co_return (coroutines TS)", "co_yield (coroutines TS)", "decltype (since C++11)", "default(1)", "delete(1)",
                                                "do", "double", "dynamic_cast", "else", "enum", "explicit", "export(1)", "extern(1)", "false", "float", "for", "friend", "goto", "if",
                                                "import (modules TS)", "inline(1)", "int", "long", "module (modules TS)", "mutable(1)", "namespace", "new", "noexcept (since C++11)", "not",
                                                "not_eq", "nullptr (since C++11)", "operator", "or", "or_eq", "private", "protected", "public", "register(2)", "reinterpret_cast",
                                                "requires (since C++20)", "return", "short", "signed", "sizeof(1)", "static", "static_assert (since C++11)", "static_cast", "struct(1)", "switch",
                                                "synchronized (TM TS)", "template", "this", "thread_local (since C++11)", "throw", "true", "try", "typedef", "typeid", "typename", "union",
                                                "unsigned", "using(1)", "virtual", "void", "volatile", "wchar_t", "while", "xor", "xor_eq"};

int main()
{
    const uint8_t reservedWordsSize = reservedWords.size();
    for (uint8_t i = 0; i < reservedWordsSize; i++)
    {
        std::cout << reservedWords[i] << " ";
    }
    return 0;
}