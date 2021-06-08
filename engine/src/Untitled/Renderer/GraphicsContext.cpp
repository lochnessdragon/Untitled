#include "GraphicsContext.h"
#include "RendererAPI.h"

#include "stdlib.h"
#include "Platform/OpenGL/OpenGLContext.h"

namespace Untitled {
  std::unique_ptr<GraphicsContext> GraphicsContext::create() 
  {
    switch(RendererAPI::getAPI()) {
      case RendererAPI::API::OpenGL:
        return std::unique_ptr<GraphicsContext>(dynamic_cast<std::unique_ptr<GraphicsContext>>(std::make_unique<OpenGLContext>().release()));
      default:
        UT_CORE_CRITICAL("We do not currently support that API.");
        exit(1);
    }
  }
}