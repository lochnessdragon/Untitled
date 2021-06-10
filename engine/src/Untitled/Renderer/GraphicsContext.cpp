#include "GraphicsContext.h"
#include "RendererAPI.h"

#include "stdlib.h"
#include "Platform/OpenGL/OpenGLContext.h"

namespace Untitled {
  std::unique_ptr<GraphicsContext> GraphicsContext::create() 
  {
    switch(RendererAPI::getAPI()) {
      case RendererAPI::API::OpenGL:
        //auto context = std::make_unique<OpenGLContext>();
        return std::make_unique<OpenGLContext>();
      default:
        UT_CORE_CRITICAL("We do not currently support that API.");
        exit(1);
    }
  }
}