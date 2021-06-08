#pragma once
#include "Core.h"

#define SPDLOG_FMT_EXTERNAL
#include "spdlog/spdlog.h"

namespace Untitled {
  class UT_API Log {
  public:
    static void Init();

    static std::shared_ptr<spdlog::logger>& getCoreLogger() { return CoreLogger; }
  private:
    static std::shared_ptr<spdlog::logger> CoreLogger;
  };
}

// Core log macros
#define UT_CORE_TRACE(...)    ::Untitled::Log::getCoreLogger()->trace(__VA_ARGS__)
#define UT_CORE_INFO(...)     ::Untitled::Log::getCoreLogger()->info(__VA_ARGS__)
#define UT_CORE_WARN(...)     ::Untitled::Log::getCoreLogger()->warn(__VA_ARGS__)
#define UT_CORE_ERROR(...)    ::Untitled::Log::getCoreLogger()->error(__VA_ARGS__)
#define UT_CORE_CRITICAL(...) ::Untitled::Log::getCoreLogger()->critical(__VA_ARGS__)