#include "point.hpp"
namespace sfWgts {
    point point::operator+(point right) {
        return point{ x + right.x, y + right.y };
    }
    point point::operator-(point right) {
        return point{ x - right.x, y - right.y };
    }
    point point::operator*(float r) {
        return point{ x * r, y * r };
    }
    void point::operator-=(point right) {
        x -= right.x; y -= right.y;
    }
    void point::operator+=(point right) {
        x += right.x; y += right.y;
    }
    point point::operator/(float divisor) {
        return { x / divisor, y / divisor };
    }
    void point::operator>>(sf::Sprite* sprite) {
        sprite->setPosition(x, y);
    }
    void point::operator>>(sf::Shape* shape) {
        shape->setPosition(x, y);
    }
    void point::operator>>(sf::Text* text) {
        text->setPosition(x, y);
    }
    bool point::operator<(point another) {
        return x < another.x&& y < another.y;
    }
}