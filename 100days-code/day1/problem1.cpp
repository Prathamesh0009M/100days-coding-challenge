#include <iostream>
#include <string>

std::string determineColor(const std::string& s) {
    // Write your logic here to determine the color based on the string s.
    // Return "Black" or "White" based on the problem statement.
    char ch=s[0];
    char num=s[1];

    int digit=ch-'a'-1;
    int sec=num;

    if(digit%2!=0&&sec%2!=0)
{
    return "Black";
}
 else if(digit%2==0&&sec%2==0)
{
    return "Black";
} else {
    return "White";
}
    return "";
}

int main() {
    std::string s;
    std::cin >> s;
    std::string result = determineColor(s);
    std::cout << result << std::endl;
    return 0;
}