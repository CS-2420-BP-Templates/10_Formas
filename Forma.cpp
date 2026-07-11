#include "Forma.h"
#include <iostream>

// TODO: Implementar el destructor virtual de la clase base.
// Recuerda: Aunque sea una clase abstracta, el destructor virtual DEBE tener un cuerpo
// en el archivo .cpp para que las clases hijas puedan destruir sus recursos correctamente.
Forma::~Forma() {
    // TODO (Opcional): Puedes agregar un mensaje de depuración aquí si deseas rastrear 
    // cuándo se destruyen los objetos durante tus pruebas de memoria.
    // Ejemplo: std::cout << "Destruyendo una Forma..." << std::endl;
}

// No intentes implementar el método "double Forma::area() const" aquí.
// Al ser un método PURE VIRTUAL ( = 0 ), no posee cuerpo en la clase base.
// Su implementación es responsabilidad obligatoria de Circulo, Triangulo, y Poligono.
