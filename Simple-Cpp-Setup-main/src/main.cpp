#include <iostream>
#include <random>
#include <string>
#include "./menu.hpp"
//#include "./noughts_and_crosses/noughts_and_crosses.hpp"

#include <p6/p6.h>
int main(){    


    
    try {
        // Create the Context by giving the initial size and name of our window
        auto ctx = p6::Context{{1280, 720, "Noughts & Crosses"}};
        // Define the update function. It will be called repeatedly.
        ctx.update = [&]() {
            ctx.update = [&]() {    
                // Clear the background with a fading effect    
                ctx.use_stroke = false;    
                ctx.fill       = {0.2f, 0.1f, 0.3f, 0.1f};    
                for(int i=0;i<=3;i++)
                {
                    for(int j=0;j<=3;j++){
                        ctx.square(p6::TopLeftCorner{i*(720./3.),j*(720./3.)},
                                    p6::Radius{(720/6)}); 
                    }
                }
                // Draw something    
                ctx.fill = {1.f, 0.7f, 0.2f};    
                ctx.circle(p6::Center{ctx.mouse()}, p6::Radius{0.3f});
            };
        };
        // Start the program
        ctx.start();
    }
    // Log any error that might occur
    catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
}