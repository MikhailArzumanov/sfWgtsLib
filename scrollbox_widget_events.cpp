#include "scrollbox_widget.hpp"
namespace sfWgts {
	void scrlbx_sldr_onchange_evnt(Widget* parent, float percentage) {
		auto parent_ = (ScrollboxWidget*)parent;
		parent_->setPercentage(percentage);
	}
}