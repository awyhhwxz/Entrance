#include "stdafx.h"
#include "ImageLoader.h"


namespace MiddleWare {

	ImageLoader::ImageLoader()
	{
	}

	int ImageLoader::Test()
	{
		auto data = CppCore::LoadImage1();
		return sizeof(data);
	}

}