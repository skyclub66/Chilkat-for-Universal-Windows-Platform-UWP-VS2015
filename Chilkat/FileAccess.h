
// This header is generated for Chilkat v9.5.0

#pragma once

class CkFileAccessW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class CkDateTime;


public ref class FileAccess sealed
{
#include "friendDecls.h"
		
	private:
    CkFileAccessW *m_impl;

	public:
	virtual ~FileAccess(void);
	FileAccess(void);
	//FileAccess(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Platform::String ^CurrentDir
	{
		Platform::String ^get();
	}
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean EndOfFile
	{
		Boolean get();
	}
	property int32 FileOpenError
	{
		int32 get();
	}
	property Platform::String ^FileOpenErrorMsg
	{
		Platform::String ^get();
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
	Boolean AppendAnsi(Platform::String ^text);

	Boolean AppendText(Platform::String ^str, Platform::String ^charset);

	Boolean AppendUnicodeBOM(void);

	Boolean AppendUtf8BOM(void);

	Boolean DirAutoCreate(Platform::String ^dirPath);

	Boolean DirCreate(Platform::String ^dirPath);

	Boolean DirDelete(Platform::String ^dirPath);

	Boolean DirEnsureExists(Platform::String ^filePath);

	void FileClose(void);

	Boolean FileContentsEqual(Platform::String ^filePath1, Platform::String ^filePath2);

	Boolean FileCopy(Platform::String ^existingFilepath, Platform::String ^newFilepath, Boolean failIfExists);

	Boolean FileDelete(Platform::String ^filePath);

	Boolean FileExists(Platform::String ^filePath);

	int FileExists3(Platform::String ^path);

	Boolean FileOpen(Platform::String ^filePath, uint32 accessMode, uint32 shareMode, uint32 createDisposition, uint32 attributes);

	Windows::Foundation::Collections::IVector<uint8>^FileRead(int maxNumBytes);

	Boolean FileRename(Platform::String ^existingFilepath, Platform::String ^newFilepath);

	Boolean FileSeek(int offset, int origin);

	int FileSize(Platform::String ^filePath);

	Boolean FileWrite(Windows::Foundation::Collections::IVector<uint8>^data);

	Platform::String ^GenBlockId(int index, int length, Platform::String ^encoding);

	int GetNumBlocks(int blockSize);

	Platform::String ^GetTempFilename(Platform::String ^dirPath, Platform::String ^prefix);

	Boolean OpenForAppend(Platform::String ^filePath);

	Boolean OpenForRead(Platform::String ^filePath);

	Boolean OpenForReadWrite(Platform::String ^filePath);

	Boolean OpenForWrite(Platform::String ^filePath);

	Platform::String ^ReadBinaryToEncoded(Platform::String ^filePath, Platform::String ^encoding);

	Windows::Foundation::Collections::IVector<uint8>^ReadBlock(int blockIndex, int blockSize);

	Windows::Foundation::Collections::IVector<uint8>^ReadEntireFile(Platform::String ^filePath);

	Platform::String ^ReadEntireTextFile(Platform::String ^filePath, Platform::String ^charset);

	Boolean ReassembleFile(Platform::String ^partsDirPath, Platform::String ^partPrefix, Platform::String ^partExtension, Platform::String ^reassembledFilename);

	int ReplaceStrings(Platform::String ^filePath, Platform::String ^charset, Platform::String ^existingString, Platform::String ^replacementString);

	Boolean SetCurrentDir(Platform::String ^dirPath);

	Boolean SetFileTimes(Platform::String ^filePath, Chilkat::CkDateTime ^createTime, Chilkat::CkDateTime ^lastAccessTime, Chilkat::CkDateTime ^lastModTime);

	Boolean SetLastModified(Platform::String ^filePath, Chilkat::CkDateTime ^lastModified);

	Boolean SplitFile(Platform::String ^fileToSplit, Platform::String ^partPrefix, Platform::String ^partExtension, int partSize, Platform::String ^destDir);

	Boolean TreeDelete(Platform::String ^path);

	Boolean WriteEntireFile(Platform::String ^filePath, Windows::Foundation::Collections::IVector<uint8>^fileData);

	Boolean WriteEntireTextFile(Platform::String ^filePath, Platform::String ^textData, Platform::String ^charset, Boolean includedPreamble);



};





}


