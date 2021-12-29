#include "scrollbox_widget.hpp"

#define let auto
#define of :
namespace sfWgts {
    void ScrollboxWidget::draw(point shift) {
        if (!isVisible) return;
        point scroll_shift = { 0, percentage * content_height };
        for (let child of children)
            if (child != slider)
                child->draw(shift + p - scroll_shift);
            else child->draw(shift + p);
    }
}