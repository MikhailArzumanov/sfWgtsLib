#pragma once
#include "point.hpp"
#include <vector>

namespace sfWgts {
    class Widget {
    protected:
        point p;
        point dims;
        std::vector<Widget*> children;
        bool isVisible = true;
        Widget();
        Widget(point dims_, point p_);
    public:
        ~Widget();
        point get_p() { return p; }
        void set_visibility(bool visibility);
        virtual void process_click(point mouse_shift, Widget*& result_pointer);
        virtual void keypressed(sf::Event key_event) {};
        virtual void tick();
        virtual void draw(point shift);
        virtual void add_child(Widget* child);
        virtual void on_click(point mouse) = 0;
    };
}