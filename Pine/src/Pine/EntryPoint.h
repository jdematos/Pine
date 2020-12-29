#pragma once

#ifdef PN_PLATFORM_WINDOWS
	
	extern Pine::Application* Pine::CreateApplication();

	int main(int argc, char** argv) // win main
	{
		printf("Application is running");
		auto app = Pine::CreateApplication();
		app->Run();
		delete app;
	}

#endif 