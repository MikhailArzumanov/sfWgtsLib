#include "ddmenu_option_widget.hpp"
namespace sfWgts {
	void DDMenuOptionWidget::on_click(point mouse) {
		auto parent_ = (DDMenuWidget*)parent;
		parent_->choose(index);
	}
}