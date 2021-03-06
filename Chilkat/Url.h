
// This header is generated for Chilkat v9.5.0

#pragma once

class CkUrlW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class Url sealed
{
#include "friendDecls.h"
		
	private:
    CkUrlW *m_impl;

	public:
	virtual ~Url(void);
	Url(void);
	//Url(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Platform::String ^Frag
	{
		Platform::String ^get();
	}
	property Platform::String ^Host
	{
		Platform::String ^get();
	}
	property Platform::String ^HostType
	{
		Platform::String ^get();
	}
	property Platform::String ^Login
	{
		Platform::String ^get();
	}
	property Platform::String ^Password
	{
		Platform::String ^get();
	}
	property Platform::String ^Path
	{
		Platform::String ^get();
	}
	property Platform::String ^PathWithQueryParams
	{
		Platform::String ^get();
	}
	property int32 Port
	{
		int32 get();
	}
	property Platform::String ^Query
	{
		Platform::String ^get();
	}
	property Boolean Ssl
	{
		Boolean get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean ParseUrl(Platform::String ^url);



};





}


