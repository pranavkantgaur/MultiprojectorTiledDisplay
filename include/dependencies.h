#include <cstring>
using std::string;

GPContext *context=NULL;
Camera *camera=NULL;
CameraWidget *widget=NULL;
CameraFile* img_file=NULL;
CameraWidget *child=NULL;
unsigned long location;
JSAMPROW row_pointer[1];
char * raw_image=NULL;
struct jpeg_decompress_struct cinfo;
struct jpeg_error_mgr jerr;
unsigned long size;
const unsigned char *data;
int cam_shutter_speed=20;
int cam_aperture=9;

