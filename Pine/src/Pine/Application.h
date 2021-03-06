#pragma once
#include "Core.h"

namespace Pine {
	class PINE_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// To be defined on client's side
	Application* CreateApplication();
}
