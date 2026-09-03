# 🔢 Cube of 2D Array Elements in C

## 📌 Project Description

This project is a C program that accepts the size and elements of a **square 2D array** and calculates the **cube of every element**.

The program uses a user-defined function `findcubes()` and a pointer to access the elements of the 2D array.

---

## 📂 Project Structure

```text
Cube-Of-2D-Array
│
├── main.c
├── output.png
└── README.md


## 🎯 Objective

* Understand 2D arrays in C.
* Learn how to pass arrays to functions using pointers.
* Calculate the cube of each array element.
* Practice nested `for` loops.
* Understand pointer arithmetic.

---

## 🛠️ Technologies Used

* **Language:** C
* **Header File:** `stdio.h`
* **Compiler:** GCC / Code::Blocks / VS Code


## ⚙️ How the Program Works

### 1. Get Array Size

```c
scanf("%d", &size);
```

The user enters the size of the square matrix.

For example:

```text
Enter array's size: 2
```

This creates a `2 × 2` array.

### 2. Enter Array Elements

Nested `for` loops are used to input all elements.

```c
for (int i = 0; i < size; i++)
{
    for (int j = 0; j < size; j++)
    {
        scanf("%d", &array[i][j]);
    }
}
```

### 3. Pass Array to Function

```c
findcubes(&array[0][0], size, size);
```

The address of the first element is passed to the `findcubes()` function.

### 4. Access Elements Using Pointer

```c
int value = *(ptr + i * cols + j);
```

Pointer arithmetic is used to access each element of the 2D array.

### 5. Calculate Cube

```c
value * value * value
```

For example:

```text
2 × 2 × 2 = 8
```

---

## 🧪 Example

### Input

```text
Enter array's size: 2

Enter the elements of the array:
array[0][0]: 2
array[0][1]: 3
array[1][0]: 4
array[1][1]: 5
```

### Output

```text
Cubes of the elements in the array:
8 27
64 125
```

---

## 📚 Concepts Used

* 2D Arrays
* Pointers
* Pointer Arithmetic
* Functions
* Nested Loops
* `scanf()`
* `printf()`
* Variable Length Arrays (VLA)

---

```

---

## ▶️ How to Run

### Compile

Using GCC:

```bash
gcc main.c -o main
```

### Run

Linux / macOS:

```bash
./main
```

Windows:

```bash
main.exe
```

---

## 🧮 Formula

The cube of a number is:

```text
Cube = Number × Number × Number
```

Example:

```text
Number = 5

Cube = 5 × 5 × 5
     = 125
```

---

## 👨‍💻 Author

**Gaurav Pipavat**

---

## 📄 License

This project is created for **educational and learning purposes**.
