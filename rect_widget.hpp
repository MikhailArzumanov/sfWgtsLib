#pragma once
#include "widget.hpp"
namespace sfWgts {
    class RectWidget : public Widget {
    private:
    protected:
        sf::RectangleShape* rect;
        RectWidget();
    public:
        virtual void draw(point shift);
        virtual void on_click(point mouse) {}
        RectWidget(point dims_, point p_, sf::Color color_);
    };
}