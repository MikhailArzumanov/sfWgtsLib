#include "widget.hpp"

#define let auto
#define of :
namespace sfWgts {
	Widget::~Widget() {
		for (let child of children)
			delete child;
	}
}