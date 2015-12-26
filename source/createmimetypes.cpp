#include <Bitmap.h>
#include <Debug.h>
#include <Mime.h>
#include <String.h>

#include "appdefs.h"
#include "createmimetypes.h"

void CreateMimetypes()
{
	CreateOggMimetype();
}


void CreateOggMimetype()
{
	PRINT(("CreateOggMimetype()\n"));

	const uint8 largeIcon[] =
	{
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0x00,0x00,0x2D,0x2C,0x2F,0x2F,0x00,0x00,0x00,0x00,0x1D,0x1E,0x00,0x00,0x8B,0x8B,0x1E,0x1E,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0x00,0x2D,0x2B,0x2B,0x2B,0x2D,0x2F,0x2F,0x30,0x00,0x1E,0x61,0x61,0x00,0x00,0x8B,0x8B,0x1A,0x61,0x1D,0x1E,0x1E,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0x00,0x2B,0x2A,0x2A,0x2A,0x2B,0x2C,0x2D,0x30,0x00,0x61,0x61,0x1A,0x00,0x00,0x8B,0x8B,0x61,0x61,0x3F,0x3F,0x19,0x1E,0x1E,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,
		0x00,0x2D,0x2C,0x2A,0x3F,0x2A,0x2B,0x2B,0x2D,0x2D,0x2F,0x00,0x19,0x1A,0x00,0x00,0x8B,0x8B,0x19,0x1A,0x3F,0x19,0x1A,0x19,0xE0,0x1E,0x1E,0x00,0x0E,0xFF,0xFF,0xFF,
		0x00,0x2D,0x2C,0x2A,0x2A,0x2A,0x2B,0x2B,0x2D,0x00,0x00,0x00,0x00,0x0B,0x00,0x00,0x00,0x08,0x0B,0x3F,0x3F,0x19,0xE0,0xE0,0x1A,0x19,0x1A,0x1D,0x00,0x0F,0xFF,0xFF,
		0x00,0x2F,0x2D,0x2C,0x2B,0x2B,0x2C,0x00,0x00,0x2C,0x2D,0x2F,0x2F,0x00,0x00,0x00,0x1D,0x1E,0x1E,0x00,0x08,0xE0,0x1A,0x19,0x1A,0x19,0x1A,0x1E,0x00,0x0E,0x0F,0xFF,
		0x00,0x30,0xEB,0x2D,0x2C,0x2C,0x00,0x2C,0x2C,0x2B,0x2B,0x2D,0x2F,0x2F,0x2F,0x00,0x00,0x08,0x1E,0x3F,0x00,0x19,0x1A,0x19,0x1A,0x19,0x1A,0x19,0x1E,0x00,0x0F,0xFF,
		0xFF,0x00,0x30,0x2E,0x2C,0x2D,0x00,0x2B,0x2A,0x2A,0x2A,0x2B,0x2C,0x2D,0x30,0x00,0x0F,0x15,0x08,0x1E,0x1E,0x00,0x61,0x1A,0x61,0x61,0x61,0x61,0x1E,0x00,0x0F,0x0F,
		0xFF,0x00,0x30,0x2F,0xEB,0x00,0x2C,0x2C,0x2B,0x3F,0x2A,0x2B,0x2B,0x2D,0x2D,0x2F,0x00,0x0E,0x00,0x1E,0x1E,0x00,0x1E,0x1D,0x1E,0x1E,0x1E,0x1D,0x1E,0x00,0x0F,0x0F,
		0xFF,0xFF,0x00,0x00,0x30,0x00,0x2C,0x2C,0x2A,0x2A,0x2A,0x2B,0x2B,0x2D,0x2E,0x2F,0x00,0x15,0x08,0x1E,0x1E,0x00,0x61,0x61,0x1A,0x19,0x1A,0x19,0x1A,0x00,0x0E,0x0F,
		0xFF,0xFF,0x00,0x1D,0x00,0x00,0x2F,0x2D,0x2C,0x2B,0x2B,0x2C,0x2B,0x2D,0x2E,0x2F,0x00,0x09,0x1E,0x1D,0x00,0x3F,0x19,0x1A,0x19,0x1A,0x19,0x1A,0x1D,0x00,0x0F,0x0F,
		0xFF,0xFF,0x00,0x1D,0x1A,0x00,0x2F,0x2F,0x2D,0x2C,0x2C,0x2B,0x2D,0x2D,0xEB,0x2F,0x00,0x1E,0x1D,0x00,0x09,0x19,0x3F,0x3F,0x19,0x1A,0x19,0x1A,0x1D,0x00,0x0F,0x0F,
		0xFF,0xFF,0xFF,0x00,0x1D,0x1A,0x00,0x2F,0xEB,0x2D,0x2D,0x2E,0x2E,0x2E,0x2E,0x00,0x00,0x0B,0x0A,0x34,0x20,0x1A,0x61,0x61,0x3F,0x3F,0x19,0x1E,0x00,0x0E,0x0F,0x0F,
		0xFF,0xFF,0xFF,0xFF,0x00,0x1D,0x00,0x2F,0x30,0x2E,0x2E,0xEB,0x2F,0x2F,0x30,0x00,0x0F,0x0F,0x1A,0x19,0x34,0x20,0x20,0x61,0x61,0x61,0x3F,0x1D,0x00,0x0F,0x0F,0xFF,
		0xFF,0xFF,0xFF,0xFF,0x00,0x1D,0x1E,0x00,0x00,0x2F,0x30,0x2F,0x30,0x00,0x00,0x0F,0x0F,0x0F,0x61,0x1A,0x61,0x34,0x34,0x20,0x61,0x1E,0x1D,0x00,0x0F,0x0F,0x0F,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xE0,0x1D,0x00,0x00,0x00,0x00,0x0F,0x0F,0x0F,0x8B,0x8B,0x1A,0x19,0x1A,0x19,0x1A,0x34,0x20,0x00,0x00,0x0E,0x0F,0x0F,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x1D,0x0F,0x0F,0x0F,0x0F,0x19,0x8B,0x8B,0x8B,0x1A,0x1A,0x1D,0x1E,0x1E,0x00,0x00,0x0F,0x0F,0x0F,0x0E,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x1D,0x1E,0x1E,0x8B,0x8B,0x8B,0x1E,0x1E,0x00,0x00,0x00,0x0F,0x0E,0x0F,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x0F,0x0F,0x0F,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x0E,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
	};

	const uint8 miniIcon[] =
	{
		0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x0E,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0x00,0x0E,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0x00,0x2F,0xEB,0x30,0x00,0x1D,0x00,0x00,0x1E,0x00,0x00,0x0F,0xFF,0xFF,0xFF,
		0x00,0x30,0x2A,0x3F,0x2D,0x2F,0x00,0x00,0x00,0x19,0x1A,0x1D,0x00,0x00,0x0F,0xFF,
		0x00,0x30,0x2A,0x2B,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0xE0,0x61,0x00,0x0F,0x0F,
		0x00,0x2F,0x2D,0x00,0xEB,0x2F,0x2F,0x00,0x00,0x15,0x00,0x19,0x1A,0x19,0x00,0x0F,
		0xFF,0x00,0x00,0x30,0x2A,0x3F,0x2D,0x2F,0x00,0x00,0x00,0x1D,0x1E,0x1E,0x00,0x0F,
		0xFF,0xFF,0x00,0x30,0x2A,0x2B,0x2C,0x30,0x00,0x00,0x61,0x61,0x61,0x61,0x00,0x0F,
		0xFF,0xFF,0x00,0x30,0x2C,0x2D,0x2C,0x30,0x00,0x0A,0x20,0x1A,0x61,0x00,0x0F,0x0F,
		0xFF,0xFF,0xFF,0x00,0x30,0x2F,0x2F,0x00,0x0E,0x1A,0x34,0x20,0x00,0x00,0x0E,0xFF,
		0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x1D,0x8B,0x1E,0x00,0x00,0x0F,0x0F,0x0F,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x0E,0x0F,0x0F,0xFF,0xFF,0xFF
	};


	BMimeType oggMimeType;

	oggMimeType.SetTo(OGG_MIME_TYPE);

	if(oggMimeType.IsInstalled())
	{
		BMessage msg;
		oggMimeType.GetAttrInfo(&msg);
		BString str;
		int i = 0;
		while(msg.FindString("attr:name",i,&str) == B_NO_ERROR)
		{
			if(str.Compare("Audio:Artist") == 0)
			{
				return; //its the correct version of the mimetype
			}
			i++;
		}
		oggMimeType.Delete();
	}

	oggMimeType.Install();

	BBitmap large(BRect(0,0,B_LARGE_ICON-1,B_LARGE_ICON-1),B_COLOR_8_BIT);
	large.SetBits(largeIcon,large.BitsLength(),0,B_COLOR_8_BIT);
	oggMimeType.SetIcon(&large,B_LARGE_ICON);

	BBitmap mini(BRect(0,0,B_MINI_ICON-1,B_MINI_ICON-1),B_COLOR_8_BIT);
	mini.SetBits(miniIcon,mini.BitsLength(),0,B_COLOR_8_BIT);
	oggMimeType.SetIcon(&mini,B_MINI_ICON);

	//Create the attribute message;
	BMessage attributeMessage;

	//Add Artist
	attributeMessage.AddString("attr:name","Audio:Artist");
	attributeMessage.AddString("attr:public_name","Artist");
	attributeMessage.AddInt32("attr:type",B_STRING_TYPE);
	attributeMessage.AddBool("attr:public",true);
	attributeMessage.AddBool("attr:viewable",true);
	attributeMessage.AddBool("attr:editable",true);
	attributeMessage.AddInt32("attr:width",30);
	attributeMessage.AddInt32("attr:alignment",B_ALIGN_LEFT);
	attributeMessage.AddBool("attr:extra",false);

	//Add Album
	attributeMessage.AddString("attr:name","Audio:Album");
	attributeMessage.AddString("attr:public_name","Album");
	attributeMessage.AddInt32("attr:type",B_STRING_TYPE);
	attributeMessage.AddBool("attr:public",true);
	attributeMessage.AddBool("attr:viewable",true);
	attributeMessage.AddBool("attr:editable",true);
	attributeMessage.AddInt32("attr:width",30);
	attributeMessage.AddInt32("attr:alignment",B_ALIGN_LEFT);
	attributeMessage.AddBool("attr:extra",false);

	//Add Title
#ifdef __BEOS__
	attributeMessage.AddString("attr:name","Audio:Title");
#elif __HAIKU__
	attributeMessage.AddString("attr:name","Media:Title");
#endif
	attributeMessage.AddString("attr:public_name","Title");
	attributeMessage.AddInt32("attr:type",B_STRING_TYPE);
	attributeMessage.AddBool("attr:public",true);
	attributeMessage.AddBool("attr:viewable",true);
	attributeMessage.AddBool("attr:editable",true);
	attributeMessage.AddInt32("attr:width",30);
	attributeMessage.AddInt32("attr:alignment",B_ALIGN_LEFT);
	attributeMessage.AddBool("attr:extra",false);

	//Add Track
	attributeMessage.AddString("attr:name","Audio:Track");
	attributeMessage.AddString("attr:public_name","Track");
	attributeMessage.AddInt32("attr:type",B_INT32_TYPE);
	attributeMessage.AddBool("attr:public",true);
	attributeMessage.AddBool("attr:viewable",true);
	attributeMessage.AddBool("attr:editable",true);
	attributeMessage.AddInt32("attr:width",30);
	attributeMessage.AddInt32("attr:alignment",B_ALIGN_LEFT);
	attributeMessage.AddBool("attr:extra",false);

	//Add Year
#ifdef __BEOS__
	attributeMessage.AddString("attr:name","Audio:Year");
#elif __HAIKU__
	attributeMessage.AddString("attr:name","Media:Year");
#endif
	attributeMessage.AddString("attr:public_name","Year");
	attributeMessage.AddInt32("attr:type",B_INT32_TYPE);
	attributeMessage.AddBool("attr:public",true);
	attributeMessage.AddBool("attr:viewable",true);
	attributeMessage.AddBool("attr:editable",true);
	attributeMessage.AddInt32("attr:width",30);
	attributeMessage.AddInt32("attr:alignment",B_ALIGN_LEFT);
	attributeMessage.AddBool("attr:extra",false);

	//Add Comment
#ifdef __BEOS__
	attributeMessage.AddString("attr:name","Audio:Comment");
#elif __HAIKU__
	attributeMessage.AddString("attr:name","Media:Comment");
#endif
	attributeMessage.AddString("attr:public_name","Comment");
	attributeMessage.AddInt32("attr:type",B_STRING_TYPE);
	attributeMessage.AddBool("attr:public",true);
	attributeMessage.AddBool("attr:viewable",true);
	attributeMessage.AddBool("attr:editable",true);
	attributeMessage.AddInt32("attr:width",40);
	attributeMessage.AddInt32("attr:alignment",B_ALIGN_LEFT);
	attributeMessage.AddBool("attr:extra",false);

	//Add Genre
#ifdef __BEOS__
	attributeMessage.AddString("attr:name","Audio:Genre");
#elif __HAIKU__
	attributeMessage.AddString("attr:name","Media:Genre");
#endif
	attributeMessage.AddString("attr:public_name","Genre");
	attributeMessage.AddInt32("attr:type",B_STRING_TYPE);
	attributeMessage.AddBool("attr:public",true);
	attributeMessage.AddBool("attr:viewable",true);
	attributeMessage.AddBool("attr:editable",true);
	attributeMessage.AddInt32("attr:width",30);
	attributeMessage.AddInt32("attr:alignment",B_ALIGN_LEFT);
	attributeMessage.AddBool("attr:extra",false);

	//Add Rating
#ifdef __BEOS__
	attributeMessage.AddString("attr:name","Audio:Rating");
#elif __HAIKU__
	attributeMessage.AddString("attr:name","Media:Rating");
#endif
	attributeMessage.AddString("attr:public_name","Rating");
	attributeMessage.AddInt32("attr:type",B_INT32_TYPE);
	attributeMessage.AddBool("attr:public",true);
	attributeMessage.AddBool("attr:viewable",true);
	attributeMessage.AddBool("attr:editable",true);
	attributeMessage.AddInt32("attr:width",15);
	attributeMessage.AddInt32("attr:alignment",B_ALIGN_LEFT);
	attributeMessage.AddBool("attr:extra",false);

	//Add Playing Time
	attributeMessage.AddString("attr:name","Audio:Length");
	attributeMessage.AddString("attr:public_name","Playing Time");
	attributeMessage.AddInt32("attr:type",B_STRING_TYPE);
	attributeMessage.AddBool("attr:public",true);
	attributeMessage.AddBool("attr:viewable",true);
	attributeMessage.AddBool("attr:editable",false);
	attributeMessage.AddInt32("attr:width",60);
	attributeMessage.AddInt32("attr:alignment",B_ALIGN_LEFT);
	attributeMessage.AddBool("attr:extra",false);

	//Add Bitrate
	attributeMessage.AddString("attr:name","Audio:Bitrate");
	attributeMessage.AddString("attr:public_name","Bitrate");
	attributeMessage.AddInt32("attr:type",B_STRING_TYPE);
	attributeMessage.AddBool("attr:public",true);
	attributeMessage.AddBool("attr:viewable",true);
	attributeMessage.AddBool("attr:editable",false);
	attributeMessage.AddInt32("attr:width",50);
	attributeMessage.AddInt32("attr:alignment",B_ALIGN_LEFT);
	attributeMessage.AddBool("attr:extra",false);

#ifdef _TTE_
	//Add Info
	attributeMessage.AddString("attr:name","Audio:Info");
	attributeMessage.AddString("attr:public_name","Info");
	attributeMessage.AddInt32("attr:type",B_STRING_TYPE);
	attributeMessage.AddBool("attr:public",true);
	attributeMessage.AddBool("attr:viewable",true);
	attributeMessage.AddBool("attr:editable",true);
	attributeMessage.AddInt32("attr:width",50);
	attributeMessage.AddInt32("attr:alignment",B_ALIGN_LEFT);
	attributeMessage.AddBool("attr:extra",false);
#endif

	oggMimeType.SetAttrInfo(&attributeMessage);

	//Create the file extension message;
	BMessage extensionMessage;

	//Add the Ogg Vorbis File Extensions
	extensionMessage.AddString("extensions","ogg");

	oggMimeType.SetFileExtensions(&extensionMessage);

	oggMimeType.SetLongDescription("Ogg Vorbis Audio File");

	oggMimeType.SetShortDescription("Ogg Vorbis File");

	oggMimeType.SetPreferredApp("application/x-vnd.marcone-soundplay");
}
