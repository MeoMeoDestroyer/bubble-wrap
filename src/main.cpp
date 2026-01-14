#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>

int main() {
  
    bn::core::init();
    bn::backdrop::set_color(bn::color(10, 10, 15));// very Dark purple

    while(true) {
    if (bn::keypad::a_held()) {
            bn::backdrop::set_color(bn::color(21, 20, 25));// Medium purple  
        }
        else if (bn::keypad::b_held()) {
            bn::backdrop::set_color(bn::color(21, 20, 30));// Light purple
        }
        else {
            bn::backdrop::set_color(bn::color(10, 10, 15));// Very dark purple
        }
        bn::core::update();
}

}
