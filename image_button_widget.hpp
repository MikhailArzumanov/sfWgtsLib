#pragma once
#include "animated_widget.hpp"
namespace sfWgts {
    class ImageButtonWidget : public AnimatedWidget {
        Widget* parent;
        void (*onclick)(Widget*);

    public:
        ImageButtonWidget();
        ImageButtonWidget(sf::Sprite* sprite_, point p_, point frame_size, int framerate_,
            void (*onclick_)(Widget*), Widget* parent_);
        virtual void on_click(point mouse);
    };
}