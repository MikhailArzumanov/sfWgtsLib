#include "widget.hpp"

#define of :
#define let auto
namespace sfWgts {
    void Widget::draw(point shift) {
        if (!isVisible) return;
        for (let child of children)
            child->draw(shift + p);
    }
}