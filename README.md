Aim:To demonstrate different C++ techniques and concepts in object-oriented programming (OOP), specifically focusing on:
1. Basic Class Definition and Object Instantiation
2. Encapsulation and Method Implementation
3. User Input and Output
4. Functionality of Methods within a Class

Apparatus:
- A computer with a C++ compiler (such as GCC, Code::Blocks, or Turbo C++)
- Knowledge of basic C++ concepts like classes, objects, and methods
- Text editor or IDE to write and compile the cod

Program Explanations:

Program 1: Basic Cube Volume Calculation:
- Code Summary:
  This program defines a simple class `cube` with public attributes for height, width, and length. The volume is calculated directly in the `main()` function by multiplying these attributes.

- Observation: 
  The volume is calculated and displayed correctly using direct attribute access. The output shows the volume of the cube based on preset values.

Program 2: Cube Class with Volume Method
- Code Summary:
This version enhances the first by introducing a method inside the class called `volume()`, which computes the volume of the cube. This encapsulates the volume calculation within the class itself, making the code    more modular.

- Observation:  
  The volume is calculated using the method `volume()` and is displayed in `main()`. The structure is cleaner and more object-oriented.

Program 3: Cube Class with Private Members (Encapsulation):

- Code Summary:
  This program extends the second by encapsulating the dimensions of the cube (height, width, and length) within private access modifiers. This demonstrates better OOP principles, as the variables cannot be modified  directly from outside the class.

- Observation:
  The volume is calculated using the `volume()` method, but the dimensions cannot be accessed or modified directly from `main()`. This ensures data protection and encapsulation.

Program 4: Cube Class with User Input:

- Code Summary: 
  This program further improves upon the previous ones by allowing the user to input the height, width, and length of the cube. The program then calculates and displays the volume based on the user's input.

- Observation:
  The user is prompted to enter the dimensions of the cube, which are then used to calculate and display the volume. This enhances user interaction with the program.

Algorithm: 

Program 1 – Basic Cube Volume Calculation:
1. Declare a `cube` class with public attributes: `height`, `width`, `length`.
2. In `main()`, create an object `cube1` of the class.
3. Assign values to the attributes (`height = 2`, `width = 3`, `length = 5`).
4. Calculate the volume: `volume = height * width * length`.
5. Print the volume.

Program 2 – Cube Class with Volume Method:
1. Declare a `cube` class with public attributes and a `volume()` method.
2. In `main()`, create an object `cube1`.
3. Assign values to the attributes (`height = 2`, `width = 3`, `length = 5`).
4. Call the `volume()` method to calculate the volume.
5. Print the volume returned by the `volume()` method.

Program 3 – Cube Class with Private Members (Encapsulation):
1. Declare a `cube` class with private attributes (`height`, `width`, `length`) and a public `volume()` method.
2. In `main()`, create an object `cube1`.
3. Assign values to the attributes via constructor or member function (if needed).
4. Call the `volume()` method to calculate the volume.
5. Print the volume.

Program 4 – Cube Class with User Input:
1. Declare a `cube` class with private attributes and methods for input, volume calculation, and display.
2. In `main()`, create an object `cube1`.
3. Prompt the user to input the height, width, and length of the cube.
4. Calculate the volume using the `volume()` method.
5. Display the calculated volume using the `display()` method.


Key Concepts:

1. Object-Oriented Programming (OOP):  
   C++ is an object-oriented programming language that allows for the creation of classes and objects. In this case, the `cube` class is a representation of a 3D geometric object, and each object created from this class can have its own dimensions and volume.

2. Encapsulation:  
   The third program demonstrates the concept of encapsulation, where the cube's dimensions are kept private and can only be accessed or modified through public methods. This ensures that the internal state of the object is protected from unintended modifications.

3. Methods and Member Functions:
   Methods like `volume()` and `display()` inside the `cube` class are used to encapsulate functionality. These methods help to calculate the volume and display the result.

4. User Input:  
   The fourth program demonstrates how to take input from the user in C++ using `cin`, allowing for dynamic cube dimensions rather than hardcoded values.

5. Class and Object Instantiation: 
   All programs demonstrate how to define a class and instantiate objects from that class. The object `cube1` represents a specific instance of the `cube` class.

Conclusion:
These four programs demonstrate fundamental principles of object-oriented programming in C++:
- Basic class definitions show the foundation of OOP.
- Encapsulation (private attributes) ensures data integrity.
- Methods like `volume()` allow for functionality within the class, promoting code reuse and modularity.
- User input handling makes the program interactive and more flexible.
