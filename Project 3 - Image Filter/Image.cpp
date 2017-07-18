#include "Image.hpp"

/// Set the pixelArray to nullptr
/**
This is a CONSTRUCTOR function. Constructor functions
are run immediately once a new Image variable object
is created. Therefore, this is a good place to
initialize member variables of our class.
*/
Image::Image()
{
	pixelArray = nullptr;

}

/// Call the DeallocateArray function
/**
This is a DESTRUCTOR function. Destructor functions
are run immediately once an Image variable is destroyed,
such as when it goes out of scope. These are called
automatically, so it is a good place to free up
space and clean things up in the class.
*/
Image::~Image()
{
	DeallocateArray();
}

/// Create an input file stream and load in the image contents
void Image::ReadFile( const string& filename )
{
	ifstream input;
	input.open(filename);
	input >> magicNumber;
	input.ignore();
	getline(input, headerNote);
	input >> width >> height >> colorDepth;
	AllocateArray(width * height);
	for (int pixel = 0; pixel < pixelCount; pixel++)
	{
		input >> pixelArray[pixel].r >> pixelArray[pixel].g >> pixelArray[pixel].b;
	}
	input.close();
}

/// Create an output file stream and write out the image contents
void Image::WriteFile( const string& filename )
{
	ofstream output;
	output.open(filename);
	output << magicNumber << endl;
	output << headerNote << endl;
	output << width << " " << height << endl;
	output << colorDepth << endl;
	for (int pixel = 0; pixel < pixelCount; pixel++)
	{
		output << pixelArray[pixel].r << " " << pixelArray[pixel].g << " " << pixelArray[pixel].b << endl;
	}
	output.close();
}

/// Print out information about the image. Use this for debug if you want.
void Image::PrintStats()
{
    cout << "Image: " << inputFilename << endl;
    cout << "Width: " << width << ", Height: " << height << endl;
    cout << "Color depth: " << colorDepth << endl;
    cout << "Pixel count: " << pixelCount << endl;
    cout << "Note: " << headerNote << endl << endl;
}

/// Use the pixelArray pointer to allocate a new dynamic array
void Image::AllocateArray( int size )
{
	pixelArray = new Pixel[size];
	pixelCount = size;
}

/// Free up space that was allocated via the pixelArray pointer
void Image::DeallocateArray()
{

	if (pixelArray != nullptr)
	{
		delete[] pixelArray;
		pixelArray = nullptr;
		pixelCount = 0;
	}
}

/// Iterate through all pixels in the image and set the RED values to 0
void Image::Filter_RemoveRed()
{
	for (int i = 0; i < pixelCount; i++)
	{
		pixelArray[i].r = 0;
	}
}

/// Iterate through all pixels in the image and set the GREEN values to 0
void Image::Filter_RemoveGreen()
{
	for (int i = 0; i < pixelCount; i++)
	{
		pixelArray[i].g= 0;
	}
}

/// Iterate through all pixels in the image and set the BLUE values to 0
void Image::Filter_RemoveBlue()
{
	for (int i = 0; i < pixelCount; i++)
	{
		pixelArray[i].b= 0;
	}
}

/// Iterate through all pixels in the image and double the value of each R, G, B value
void Image::Filter_Brighten()
{
	for (int i = 0; i < pixelCount; i++)
	{
		pixelArray[i].r *= 2;
		pixelArray[i].g *= 2;
		pixelArray[i].b *= 2;
		if (pixelArray[i].r > 255)
		{
			pixelArray[i].r = 255;
		}

		if (pixelArray[i].g > 255)
		{
			pixelArray[i].g = 255;
		}

		if (pixelArray[i].b > 255)
		{
			pixelArray[i].b = 255;
		}
	}
}

/// Iterate through all pixels in the image and halve the value of each R, G, B value
void Image::Filter_Darken()
{
	for (int i = 0; i < pixelCount; i++)
	{
		pixelArray[i].r /= 2;
		pixelArray[i].g /= 2;
		pixelArray[i].b /= 2;
	}
}

/// Iterate through all pixels in the image and shift colors R -> G, G -> B, B -> R
void Image::Filter_ShiftColors()
{
	for (int i = 0; i < pixelCount; i++)
	{
		// do something with pixelArray[i].r,
		// pixelArray[i].g, and/or pixelArray[i].b.
		int tempRed, tempGreen, tempBlue;
		tempRed = pixelArray[i].r;
		tempGreen = pixelArray[i].g;
		tempBlue = pixelArray[i].b;

		pixelArray[i].r = tempGreen;
		pixelArray[i].g = tempBlue;
		pixelArray[i].b = tempRed;
	}
}

/// Create your own custom filter
void Image::Filter_Custom()
{
	for (int i = 0; i < pixelCount; i++)
	{
		pixelArray[i].r = 100;
		pixelArray[i].b = 240;
	}
}

