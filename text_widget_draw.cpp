#include "text_widget.hpp"
#include "window.hpp"
namespace sfWgts {
    void TextWidget::draw(point shift) {
        if (!isVisible) return;
        (shift + p) >> text;
        window->draw(*text);
        Widget::draw(shift);
    }
}