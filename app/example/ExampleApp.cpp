#include <Untitled/Core/Core.h>
#include <Untitled/Renderer/Window.h>

int main() {
  Untitled::Log::Init();
/*
  UT_CORE_TRACE("Guess what time is is:");
  UT_CORE_INFO("Entry point time!");
  UT_CORE_WARN("But there's no entry point");
  UT_CORE_ERROR("So what do we do?");
  UT_CORE_CRITICAL("AHHHHHHHHH!");
  */

  Untitled::Window window = Untitled::Window({640, 480});

  while(true) {
    
  }
  
  return 0;
}