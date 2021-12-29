#pragma once
#include <SFML/Graphics.hpp>
namespace sfWgts {
    struct point {
        float x, y;
        point operator+(point right);
        point operator-(point right);
        point operator*(float r);
        void operator-=(point right);
        void operator+=(point right);
        point operator/(float divisor);
        void operator>>(sf::Sprite* sprite);
        void operator>>(sf::Shape* shape);
        void operator>>(sf::Text* text);
        bool operator<(point another);
    };
}