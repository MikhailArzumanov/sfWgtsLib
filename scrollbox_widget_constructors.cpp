#include "scrollbox_widget.hpp"
namespace sfWgts {
	ScrollboxWidget::ScrollboxWidget() {}
	ScrollboxWidget::ScrollboxWidget(float content_height_, point slider_dims, point self_dims, point p_) {
		content_height = content_height_; dims = self_dims; p = p_;
		slider = new VerticalSliderWidget(this, scrlbx_sldr_onchange_evnt, slider_dims, { self_dims.x - slider_dims.x,0 });
		add_child(slider);

	}
}