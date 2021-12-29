#pragma once
#include "widget.hpp"
#include "vertical_slider_widget.hpp"
namespace sfWgts {
	class ScrollboxWidget : public Widget {
	protected:
		VerticalSliderWidget* slider;
		float percentage;
		float content_height;
	public:
		ScrollboxWidget();
		ScrollboxWidget(float content_height_, point slider_dims, point self_dims, point p_);
		virtual void setPercentage(float percentage_) { percentage = percentage_; }
		virtual void process_click(point mouse_shift, Widget*& result_pointer);
		virtual void draw(point shift);
		virtual void on_click(point mouse) {}
	};

	void scrlbx_sldr_onchange_evnt(Widget* parent, float percentage);
}