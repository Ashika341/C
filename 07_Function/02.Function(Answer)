⭐⭐⭐⭐⭐⭐⭐ CODECRAFT BY ASHIKA ⭐⭐⭐⭐⭐⭐⭐

🟢 Language ➡ C
🟢 Topic ➡ Functions



🔹 🧠 1. Calculate the Area of a Circle

#include <stdio.h>
float area_of_circle(float radius) {
    return 3.14 * radius * radius; 
}
int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Area of the circle: %.2f\n", area_of_circle(radius));
    return 0;
}


🖥️ Sample Output:
Enter the radius of the circle: 5
Area of the circle: 78.50







🔹 🧠2. Calculate Simple Interest

#include <stdio.h>
float simple_interest(float principal, float rate, float time) {
    return (principal * rate * time) / 100; 
}
int main() {
    float principal, rate, time;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time period: ");
    scanf("%f", &time);
    printf("Simple Interest: %.2f\n", simple_interest(principal, rate, time));
    return 0;
}

🖥️ Sample Output:
Enter principal amount: 1000
Enter rate of interest: 5
Enter time period: 2
Simple Interest: 100.00







🔹 🧠 3. Check Even or Odd

#include <stdio.h>
int is_even(int number) {
    return (number % 2 == 0) ? 1 : 0;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (is_even(number)) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }
    return 0;
}

🖥️ Sample Output:
Enter a number: 7
7 is odd.








🔹 🧠4. Print First N Natural Numbers

#include <stdio.h>
void print_natural_numbers(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    print_natural_numbers(n);
    return 0;
}

🖥️ Sample Output:
Enter N: 5
1 2 3 4 5







🔹 🧠 5. Print First N Odd Natural Numbers

#include <stdio.h>
void print_odd_natural_numbers(int n) {
    for (int i = 1; i <= n * 2; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    print_odd_natural_numbers(n);
    return 0;
}


🖥️ Sample Output:
Enter N: 5
1 3 5 7 9







🔹 🧠 6. Calculate Factorial

#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d: %d\n", n, factorial(n));
    return 0;
}

🖥️ Sample Output:
Enter a number: 5
Factorial of 5: 120







🔹 🧠 7. Calculate Combinations

#include <stdio.h>
int factorial(int n) {
   return (n <= 1) ? 1 : n * factorial(n - 1);
}
int combinations(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main() {
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    printf("Combinations (nCr): %d\n", combinations(n, r));
    return 0;
}

🖥️ Sample Output:
Enter n and r: 5 2
Combinations (nCr): 10








🔹 🧠8. Calculate Arrangements

#include <stdio.h>
int factorial(int n) {
   return (n <= 1) ? 1 : n * factorial(n - 1);
}
int arrangements(int n, int r) {
    return factorial(n) / factorial(n - r);
}
int main() {
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    printf("Arrangements (nPr): %d\n", arrangements(n, r));
    return 0;
}

🖥️ Sample Output:
Enter n and r: 5 2
Arrangements (nPr): 20








🔹 🧠9. Check Whether a Number Contains a Given Digit

#include <stdio.h>
int contains_digit(int number, int digit) {
    while (number != 0) {
        if (number % 10 == digit) {
            return 1;
        }
        number /= 10;
    }
    return 0;
}
int main() {
    int number, digit;
    printf("Enter number: ");
    scanf("%d", &number);
    printf("Enter digit to check: ");
    scanf("%d", &digit);
    if (contains_digit(number, digit)) {
        printf("%d contains the digit %d.\n", number, digit);
    } else {
        printf("%d does not contain the digit %d.\n", number, digit);
    }
    return 0;
}

🖥️ Sample Output:
Enter number: 12345
Enter digit to check: 3
12345 contains the digit 3.








🔹 🧠 10. Print All Prime Factors

#include <stdio.h>
void print_prime_factors(int n) {
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime factors: ");
    print_prime_factors(n);
    return 0;
}

🖥️ Sample Output:
Enter a number: 36
Prime factors: 2 2 3 3







🔹 🧠 11. Calculate LCM

#include <stdio.h>
int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("LCM of %d and %d: %d\n", a, b, lcm(a, b));
    return 0;
}

🖥️ Sample Output:
Enter two numbers: 12 15
LCM of 12 and 15: 60









🔹 🧠 12. Calculate HCF

#include <stdio.h>
int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("HCF of %d and %d: %d\n", a, b, gcd(a, b));
    return 0;
}

🖥️ Sample Output:
Enter two numbers: 12 15
HCF of 12 and 15: 3









🔹 🧠 13. Check if a Number is Prime

#include <stdio.h>
int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (is_prime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}
🖥️ Sample Output:

Enter a number: 7
7 is a prime number.











🔹 🧠 14. Find Next Prime Number

#include <stdio.h>
int is_prime(int n) {
    if (n <= 1) return 0;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
int next_prime(int n) {
    int next = n + 1;
    while (1) {
        if (is_prime(next)) {
            return next;
        }
        next++;
    }
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Next prime after %d is %d.\n", n, next_prime(n));
    return 0;
}
🖥️ Sample Output:
Enter a number: 7
Next prime after 7 is 11.








🔹 🧠 15. Print First N Prime Numbers

#include <stdio.h>
int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
void print_n_prime_numbers(int n) {
    int count = 0, number = 2; 
    while (count < n) {
        if (is_prime(number)) {
            printf("%d ", number);
            count++;
        }
        number++;
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    print_n_prime_numbers(n);
    return 0;
}
🖥️ Sample Output:
Enter N: 5
2 3 5 7 11 








🔹 🧠 16. Print All Prime Numbers Between Two Given Numbers

#include <stdio.h>
int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
void print_primes_between(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    int start, end;
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d: ", start, end);
    print_primes_between(start, end);
    return 0;
}

🖥️ Sample Output:
Enter start and end: 10 20
Prime numbers between 10 and 20: 11 13 17 19 









🔹 🧠 17. Print First N Terms of Fibonacci Series

#include <stdio.h>
void print_fibonacci(int n) {
    int a = 0, b = 1, next;
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    print_fibonacci(n);
    return 0;
}
🖥️ Sample Output:
Enter N: 5
0 1 1 2 3 










🔹 🧠 18. Print Pascal's Triangle

#include <stdio.h>
int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}
void print_pascal_triangle(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", factorial(i) / (factorial(j) * factorial(i - j)));
        }
        printf("\n");
    }
}
int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    print_pascal_triangle(rows);
    return 0;
}

🖥️ Sample Output:
Enter number of rows: 5
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 







🔹 🧠19. Square of Any Number

#include <stdio.h>
int square(int num) {
    return num * num; 
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Square of %d: %d\n", num, square(num));
    return 0;
}

🖥️ Sample Output:
Enter a number: 4
Square of 4: 16
