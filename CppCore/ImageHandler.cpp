#include "stdafx.h"
#include "ImageHandler.h"

namespace CppCore
{
	//ImageHandler::ImageHandler()
	//{
	//}
	//
	//
	//ImageHandler::~ImageHandler()
	//{
	//}
	//
	//void ImageHandler::Load() 
	//{ 
	//	_data.reset(new int8[4]
	//	{
	//		1,3,5,4
	//	});
	//}

	int8* LoadImage1()
	{
		return new int8[4]
		{
			1,3,5,4
		};
	}
}