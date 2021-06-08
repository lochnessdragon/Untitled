#include "Log.h"
namespace Untitled {
  std::shared_ptr<spdlog::logger> Log::CoreLogger;
  
  void Log::Init() 
  {
    CoreLogger = spdlog::stdout_color_mt("console");
    CoreLogger->set_level(spdlog::level::trace);
    CoreLogger->flush_on(spdlog::level::trace);
    
  }
}