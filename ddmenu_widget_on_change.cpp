#include "ddmenu_widget.hpp"
namespace sfWgts {
	void DDMenuWidget::on_change(std::string new_val) {
		if (onchange != nullptr)
			onchange(parent, new_val);
	}
}