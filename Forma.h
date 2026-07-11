#ifndef FORMA_H
#define FORMA_H

class Forma {
public:
    // Destructor virtual para asegurar la limpieza de memoria en clases derivadas
    virtual ~Forma();

    // Método puro virtual: hace que la clase sea abstracta
    virtual double area() const = 0;
};

#endif // FORMA_H
