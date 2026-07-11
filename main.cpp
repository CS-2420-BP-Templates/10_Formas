#include <iostream>
#include <iomanip>

// TODO: Include the headers for your shape classes here
// Remember to use the Spanish names for the files (e.g., "Circulo.h", "FormaCompuesta.h")
#include "Forma.h"
#include "Circulo.h"
#include "Triangulo.h"
#include "FormaCompuesta.h"

int main() {
    // Configures output to show exactly 2 decimal places for easy grading consistency
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "========================================" << std::endl;
    std::cout << "       TEST DE JERARQUÍA RECURSIVA       " << std::endl;
    std::cout << "========================================" << std::endl;

    // TODO 1: Instantiate the main composite shape representing the "Robot"
    // Hint: Use dynamic allocation (new) and assign it to a pointer.
    FormaCompuesta* robot = nullptr; // Change nullptr to your implementation

    // TODO 2: Instantiate base shapes (Leaf nodes) and add them to the main robot composite
    // - Add a Triangle (base: 10.0, height: 5.0) -> Expected Area: 25.00
    // - Add a Circle (radius: 3.0)               -> Expected Area: ~28.27
    
    
    // TODO 3: Create a second sub-composite shape representing the robot's "Extremities"
    FormaCompuesta* extremities = nullptr; // Change nullptr to your implementation

    // TODO 4: Instantiate and add shapes to the "Extremities" sub-composite
    // - Add a Circle (radius: 1.5) for the left hand  -> Expected Area: ~7.07
    // - Add a Circle (radius: 1.5) for the right hand -> Expected Area: ~7.07
    
    
    // TODO 5: Nest the "Extremities" sub-composite inside the main "Robot" composite
    // This forms the tree structure crucial for testing your recursion.


    // TODO 6: Print out the final total area by calling the .area() method on the main robot
    // The expected output printed to the terminal must be EXACTLY 67.41.
    std::cout << "Área total calculada del Robot: " << /* Call your method here */ << " unidades." << std::endl;

    std::cout << "========================================" << std::endl;

    // TODO 7: Clean up your memory!
    // Delete the root composite object. 
    // CRITICAL THINKING: If your FormaCompuesta destructor is implemented correctly, 
    // deleting the root 'robot' object should recursively delete all child objects 
    // inside it. Ensure you don't cause double-free errors or memory leaks.

    return 0;
}
