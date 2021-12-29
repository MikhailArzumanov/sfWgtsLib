#pragma once
#include "image_widget.hpp"
namespace sfWgts {
    class AnimatedWidget : public ImageWidget {
    protected:
        int current_frame;
        int current_state;

        int frames_amount;
        int states_amount;

        int framecounter;
        int framerate;
    public:
        void draw(point shift);
        virtual void tick();
        AnimatedWidget();
        AnimatedWidget(sf::Sprite* sprite_, point p_, point frame_size, int framerate_);
    };
}