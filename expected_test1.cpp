 #include <iostream>
int main() {
 int x = 5;
 int y = 10;
 if (x > y) // Syntax error: incorrect operator
 std::cout << "x is greater than y" << std::endl;
 else
 std::cout << "y is greater than or equal to x" << std::endl;
 return 0;
}
