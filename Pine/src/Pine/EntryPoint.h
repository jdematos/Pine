#pragma once

#ifdef PN_PLATFORM_WINDOWS
	
	extern Pine::Application* Pine::CreateApplication();

	int main(int argc, char** argv) // win main
	{
		Pine::Log::Init();
		PN_CORE_WARN("Initialized Log");
		auto app = Pine::CreateApplication();
		app->Run();
		delete app;
	}

#endif 
