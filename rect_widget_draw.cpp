#include "rect_widget.hpp"
#include "window.hpp"
namespace sfWgts {
    void RectWidget::draw(point shift) {
        if (!isVisible) return;
        (shift + p) >> rect;
        window->draw(*rect);
        Widget::draw(shift);
    }
}