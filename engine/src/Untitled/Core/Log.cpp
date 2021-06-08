#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Untitled {
  std::shared_ptr<spdlog::logger> Log::CoreLogger;
  
  void Log::Init() 
  {
    CoreLogger = spdlog::stdout_color_mt("Core");
    CoreLogger->set_level(spdlog::level::trace);
    CoreLogger->flush_on(spdlog::level::trace);
    
  }
}