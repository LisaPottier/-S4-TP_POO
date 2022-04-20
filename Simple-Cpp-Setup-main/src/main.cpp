#include <iostream>
#include <random>
#include <string>
#include "./menu.hpp"
#include "./noughts_and_crosses/noughts_and_crosses.hpp"

#include <p6/p6.h>
int main(){    
    
    try {
        // Create the Context by giving the initial size and name of our window
        auto ctx = p6::Context{{1280, 720, "Noughts & Crosses"}};
        // Define the update function. It will be called repeatedly.
        ctx.update = [&]() {
            // Clear the objects that were drawn during the previous update
            ctx.background({0.5f, 0.3f, 0.8f});
            // Draw a circle
            ctx.circle(p6::Center{ctx.mouse()}, // Centered on the current position of the mouse
                       p6::Radius{0.3f});       // With a given radius
        };
        // Start the program
        ctx.start();
    }
    // Log any error that might occur
    catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
}