#include <Untitled/Core/Core.h>

int main() {
  Untitled::Log::Init();

  UT_CORE_TRACE("Guess what time is is:");
  UT_CORE_INFO("Entry point time!");
  UT_CORE_WARN("But there's no entry point");
  UT_CORE_ERROR("So what do we do?");
  UT_CORE_CRITICAL("AHHHHHHHHH!");

  
  return 0;
}