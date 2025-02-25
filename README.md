# 🌡️ Temperature Converter in C

Welcome to the **Temperature Converter** project! This is a simple C program that converts temperatures between Celsius and Fahrenheit.

## 🎯 Features

✅ **Celsius to Fahrenheit Conversion**\
✅ **Fahrenheit to Celsius Conversion**\
✅ **Easy-to-use command-line interface**

## 🔧 How It Works

1. The program displays a menu for the user to choose the conversion type.
2. Based on the user's choice, the program asks for a temperature input.
3. It calculates the converted temperature using the following formulas:
   - 🌡️ **Celsius to Fahrenheit:** `(temp * 9/5) + 32`
   - 🌡️ **Fahrenheit to Celsius:** `(temp - 32) * 5/9`
4. The result is displayed with two decimal precision.

## 🚀 Installation & Usage

### 📌 Prerequisites

Ensure you have a C compiler (like `gcc`) installed on your system.

### 📥 Steps

1. **Clone the repository:**
   ```bash
   git clone https://github.com/yourusername/temperature-converter.git
   cd temperature-converter
   ```
2. **Compile the program:**
   ```bash
   gcc -o temp_converter temp_converter.c
   ```
3. **Run the program:**
   ```bash
   ./temp_converter
   ```

## 📝 Source Code

```c
#include <stdio.h>

int main(void) {
    int choice;
    double temp, convertedTemp;

    printf("1: Celsius to Fahrenheit\n");
    printf("2: Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &temp);
        convertedTemp = (temp * 9.0 / 5.0) + 32;
        printf("Temperature in Fahrenheit: %.2lf°F\n", convertedTemp);
        return 0;
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &temp);
        convertedTemp = (temp - 32) * 5.0 / 9.0;
        printf("Temperature in Celsius: %.2lf°C\n", convertedTemp);
        return 0;
    } else {
        printf("Invalid choice. Please enter 1 or 2.\n");
        return 0;
    }
}
```

##
