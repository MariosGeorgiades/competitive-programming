#include <iostream>
#include <unordered_map>
#include <string>

const std::unordered_map<int, std::string> roman_numerals {
    {1000, "M"},
    {900, "CM"},
    {500, "D"},
    {400, "CD"},
    {100, "C"},
    {90, "XC"},
    {50, "L"},
    {40, "XL"},
    {10, "X"},
    {9, "IX"},
    {5, "V"},
    {4, "IV"},
    {1, "I"}
};

std::string to_roman(int number) {
    std::string roman;
    for (auto [value, numeral] : roman_numerals) {
        while (number >= value) {
            roman += numeral;
            number -= value;
        }
    }

    return roman;
}

int main() {
    std::string input;
    std::cin >> input;
    for (char c : input) {
        if (isdigit(c)) {
            std::cout << to_roman(c - '0');
        } else {

            std::cout << c;
        }
    }

    return 0;
}
