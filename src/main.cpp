#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>
#include <bn_sprite_ptr.h>
#include <bn_sprite_items_dot.h>

int main() {
  
    bn::core::init();
    bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(-30, -50);
    bn::sprite_ptr myCircle2 = bn::sprite_items::dot.create_sprite(-30, -40);
    bn::sprite_ptr myCircle3 = bn::sprite_items::dot.create_sprite(-30, -30);
    bn::sprite_ptr myCircle4 = bn::sprite_items::dot.create_sprite(-30, -20);

    bn::sprite_ptr myCircle5 = bn::sprite_items::dot.create_sprite(30, -50);
    bn::sprite_ptr myCircle6 = bn::sprite_items::dot.create_sprite(30, -40);
    bn::sprite_ptr myCircle7 = bn::sprite_items::dot.create_sprite(30, -30);
    bn::sprite_ptr myCircle8 = bn::sprite_items::dot.create_sprite(30, -20);

    bn::sprite_ptr myCircle9 = bn::sprite_items::dot.create_sprite(-60, 60);
    bn::sprite_ptr myCircle10 = bn::sprite_items::dot.create_sprite(-40, 40);
    bn::sprite_ptr myCircle11 = bn::sprite_items::dot.create_sprite(-20, 20);
    bn::sprite_ptr myCircle12 = bn::sprite_items::dot.create_sprite(0, 20);
    bn::sprite_ptr myCircle13 = bn::sprite_items::dot.create_sprite(20, 20);
    bn::sprite_ptr myCircle14 = bn::sprite_items::dot.create_sprite(40, 40);
    bn::sprite_ptr myCircle15 = bn::sprite_items::dot.create_sprite(60, 60);



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
