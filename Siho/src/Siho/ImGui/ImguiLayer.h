#pragma once

#include "Siho/Core/Layer.h"

#include "Siho/Events/ApplicationEvent.h"
#include "Siho/Events/KeyEvent.h"
#include "Siho/Events/MouseEvent.h"

namespace Siho {

	class ImGuiLayer : public Layer
	{
	public:
		virtual void Begin() = 0;
		virtual void End() = 0;

		static ImGuiLayer* Create();
	private:
		float m_Time = 0.0f;
	};

}