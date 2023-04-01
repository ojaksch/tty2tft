#include <Arduino.h>
void clearmenu();
void fetchfile(String fetchURL, String fetchfilename);
void footbanner(String bannertext);
void playpicture(String actCorename, int pictureposX, int pictureposY, int scale);
void playvideo(String actCorename, int videoposX, int videoposY);
void rotatespinner();
void setfnamvars(String actCorename, String fileext);
void setscreensaver();
void showarcade();
void showmenu();
void showpic(String corefilename);
void playaudio(String corefilename);
void startscreensaver();
void writetext(String text, int fixedpos, int textposX, int textposY, const uint8_t *fontname, int textrotation, int fontcolor, int backcolor, String clear);
void rectfill(int posX, int posY, int rectwidth, int rectheight, int fillcolor);
int getFile(String url, String corefilename);
static int jpegDrawCallback(JPEGDRAW *pDraw);
void ftp_debug(const char*);
void OTAupdate(String displaytype);
void performUpdate(Stream &updateSource, size_t updateSize);
void touchfunctions();
void gettouchcoord(TS_Point p);
