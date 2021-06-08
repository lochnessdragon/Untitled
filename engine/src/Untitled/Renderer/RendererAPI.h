#pragma once

#include "../Core/Core.h"

namespace Untitled {
  class UT_API RendererAPI {
  public:
    enum class API {
      OpenGL,
      None
    };

    static API getAPI() { return s_API; }
  private:
    static API s_API;    
  };
}