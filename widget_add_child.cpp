#include "widget.hpp"
namespace sfWgts {
    void Widget::add_child(Widget* child) {
        children.push_back(child);
    }
}