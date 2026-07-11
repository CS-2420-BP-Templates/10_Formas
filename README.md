# 10_Formas

¡Bienvenidos al laboratorio de Jerarquía de Formas! In this lab, you will explore the power of object-oriented programming, polymorphism, and the Composite Design Pattern using recursion.
Your goal is to build a system that can calculate the total area of simple shapes as well as complex, nested shapes (shapes made of other shapes).

Forma
At the root of this project is an abstract base class named Forma. It represents any geometric shape. It cannot be instantiated on its own because it contains a pure virtual method for calculating area:
virtual double area() const = 0;
Virtual destructor: virtual ~Forma() = default;

Formas Simples
Circulo. Use the radius equation.
Triangulo. A = 1/2bh
Poligono. Number of sides and a side length or an irregular one defined by coordinates.

FormaCompuesta
Recursion. This is a shape that contains a collection of other shapes or even other FormaCompuesta objects. Will hold pointers to the base class (Forma*).
Should clean up any dynamically allocated memory it owns.
Ejemplo: Si representa un Carro, podria incluir dos circulos (llantas), el cuerpo como triangulo y un poligono.
Calling .area() on the carro should trigger a recursive cascade that calculates the area of everything inside it. 

