#include "widget.hpp"

#define let auto
#define of	:
namespace sfWgts {
	void Widget::tick() {
		for (let child of children)
			child->tick();
	}
}