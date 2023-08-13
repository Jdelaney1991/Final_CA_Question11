#include "mbed.h"

int main() {
    // Initialize digitalIn on p13 and p16
    DigitalIn button1(D2);  // Assuming D2 corresponds to p13
    DigitalIn button2(D3);  // Assuming D3 corresponds to p16

    // Initialize digitalOut on p23 and p25
    DigitalOut led1(D8);    // Assuming D8 corresponds to p23
    DigitalOut led2(D9);    // Assuming D9 corresponds to p25

    while (1) {
        // Check if button on p13 (D2) is pressed
        if (button1) {
            // Turn on p23 (D8) and turn off p25 (D9)
            led1 = 1;
            led2 = 0;
        } else if (button2) {
            // Check if button on p16 (D3) is pressed
            // Turn on p25 (D9) and turn off p23 (D8)
            led2 = 1;
            led1 = 0;
        } else {
            // Turn off both p23 (D8) and p25 (D9)
            led1 = 0;
            led2 = 0;
        }
    }

    return 0;
}
