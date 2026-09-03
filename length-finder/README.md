# 📏 String Length in C

## 📌 Project Description

This project is a simple C program that finds the **length of a string without using the built-in `strlen()` function**.

The program uses a user-defined function called `findlegth()` and a character pointer to count the number of characters in the given string.

---


## 📂 Project Structure

Indicator
|
|String-Length
|
├── main.c
├── output.png
└── README.md

## 🎯 Objective
* Learn how strings are handled in C.
* Understand character arrays.
* Understand pointers.
* Find the length of a string without using `strlen()`.
* Practice functions and loops in C.


## 🛠️ Technologies Used

* **Language:** C
* **Header File:** `stdio.h`
* **Compiler:** GCC / Turbo C / Code::Blocks / VS Code


## ⚙️ How the Program Works

### 1. Declare a String

```c
char str[100];
```

A character array is created to store the string entered by the user.

### 2. Take String Input

```c
fgets(str, sizeof(str), stdin);
```

`fgets()` is used to safely accept a string, including spaces.

### 3. Remove Newline

When `fgets()` reads the input, it may store `\n` at the end of the string. The `for` loop removes this newline character.

### 4. Call the Function

```c
findlegth(str);
```

The string is passed to the `findlegth()` function.

### 5. Count Characters

```c
while (*ptr != '\0')
{
    length++;
    ptr++;
}
```

The pointer moves through each character until it reaches the null character `'\0'`.

### 6. Display Length

The calculated length is displayed using `printf()`.

---

## 🧪 Example Output

### Input

```text
Enter any string : Hello World
```

### Output

```text
The length of a string is 11
```

---

## 📚 Concepts Used

* Character Array
* String
* Pointer
* Function
* `fgets()`
* `while` loop
* `for` loop
* Null Character `'\0'`
* User-defined Function

---

## 🚫 Built-in Function Not Used

The program does not use:

```c
strlen()
```

Instead, the string length is calculated manually using a pointer.

---


---

## ▶️ How to Run

### Step 1: Save the Code

Save the program as:

```text
main.c
```

### Step 2: Compile

Using GCC:

```bash
gcc main.c -o main
```

### Step 3: Run

```bash
./main
```

On Windows:

```bash
main.exe
```

---

## 👨‍💻 Author

**Gaurav Pipavat**

---

## 📄 License

This project is created for **educational and learning purposes**.
