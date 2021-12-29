#pragma once
#include "widget.hpp"
namespace sfWgts {
    class ImageWidget : public Widget {
    public:
        sf::Sprite* sprite;
    public:
        virtual void draw(point shift);
        virtual void on_click(point mouse) {}
        ImageWidget();
        ImageWidget(sf::Sprite& sprite_, point p_);
    };
}