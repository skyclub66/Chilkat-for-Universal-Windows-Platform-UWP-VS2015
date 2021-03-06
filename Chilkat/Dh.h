
// This header is generated for Chilkat v9.5.0

#pragma once

class CkDhW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class Dh sealed
{
#include "friendDecls.h"
		
	private:
    CkDhW *m_impl;

	public:
	virtual ~Dh(void);
	Dh(void);
	//Dh(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 G
	{
		int32 get();
	}
	property Platform::String ^LastErrorHtml
	{
		Platform::String ^get();
	}
	property Platform::String ^LastErrorText
	{
		Platform::String ^get();
	}
	property Platform::String ^LastErrorXml
	{
		Platform::String ^get();
	}
	property Boolean LastMethodSuccess
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^P
	{
		Platform::String ^get();
	}
	property Boolean VerboseLogging
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^Version
	{
		Platform::String ^get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Platform::String ^CreateE(int numBits);

	Platform::String ^FindK(Platform::String ^E);

	Boolean GenPG(int numBits, int G);

	Boolean SetPG(Platform::String ^p, int g);

	Boolean UnlockComponent(Platform::String ^unlockCode);

	void UseKnownPrime(int index);



};





}


