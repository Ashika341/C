⭐⭐⭐⭐⭐⭐⭐ CODECRAFT BY ASHIKA ⭐⭐⭐⭐⭐⭐⭐
🟢 Language ➡ C
🟢 Topic ➡ Types of Recursion (with Examples)

1️⃣ Direct Recursion
🧩 Problem: Find factorial of a number
🧠 Logic: Function calls itself directly

int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);  // Direct recursive call
}



2️⃣ Indirect Recursion
🧩 Problem: Print a sequence using two functions calling each other
🧠 Logic: Function A calls Function B and vice versa

void funA(int n);
void funB(int n);

void funA(int n) {
    if (n > 0) {
        printf("%d ", n);
        funB(n - 1);
    }
}

void funB(int n) {
    if (n > 1) {
        printf("%d ", n);
        funA(n / 2);
    }
}





3️⃣ Tail Recursion
🧩 Problem: GCD of two numbers
🧠 Logic: Recursive call is the last operation

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);  // Tail recursion
}




4️⃣ Non-Tail Recursion
🧩 Problem: Find the sum of first N natural numbers
🧠 Logic: Function does some operation after recursive call


int sum(int n) {
    if (n == 0)
        return 0;
    return n + sum(n - 1);  // Non-tail due to addition after call
}




5️⃣ Linear Recursion
🧩 Problem: Power (x^n) using recursion
🧠 Logic: One recursive call per function activation

int power(int base, int exp) {
    if (exp == 0)
        return 1;
    return base * power(base, exp - 1);  // Linear recursion
}





6️⃣ Tree Recursion
🧩 Problem: Fibonacci Series
🧠 Logic: Function calls itself multiple times

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);  // Tree recursion
}




7️⃣ Head Recursion
🧩 Problem: Print numbers from 1 to N
🧠 Logic: Recursive call happens before processing

void printHead(int n) {
    if (n == 0) return;
    printHead(n - 1);    // Recursive call first
    printf("%d ", n);
}





8️⃣ Palindrome Check (String)
🧩 Problem: Check if a string is palindrome
🧠 Logic: Recursive check from both ends

int isPalindrome(char *str, int start, int end) {
    if (start >= end)
        return 1;
    if (str[start] != str[end])
        return 0;
    return isPalindrome(str, start + 1, end - 1);
}
