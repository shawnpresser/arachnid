#include "render_gl2_afx.h"
#include "gl2_renderer.h"

//===========================================================================
// GL2Renderer
//===========================================================================

//---------------------------------------------------------------------------
CGL2Renderer::~CGL2Renderer()
{
}

//---------------------------------------------------------------------------
CGL2Renderer::CGL2Renderer()
{
}

//---------------------------------------------------------------------------
void
CGL2Renderer::Shutdown()
{
	delete this;
}
