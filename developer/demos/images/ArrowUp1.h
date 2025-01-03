#define ARROWUP1_WIDTH    18
#define ARROWUP1_HEIGHT   11

UBYTE ArrowUp1Data[] =
{
    0xFF, 0xFF, 0x80, 0x00,
    0x80, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00,
    0x80, 0xC0, 0x00, 0x00,
    0x81, 0xE0, 0x00, 0x00,
    0x83, 0xF0, 0x00, 0x00,
    0x87, 0x38, 0x00, 0x00,
    0x8C, 0x0C, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x40, 0x00,
    0x00, 0x00, 0x40, 0x00,
    0x00, 0x00, 0x40, 0x00,
    0x00, 0x00, 0x40, 0x00,
    0x00, 0x00, 0x40, 0x00,
    0x00, 0x00, 0x40, 0x00,
    0x00, 0x00, 0x40, 0x00,
    0x00, 0x00, 0x40, 0x00,
    0x00, 0x00, 0x40, 0x00,
    0x00, 0x00, 0x40, 0x00,
    0x7F, 0xFF, 0xC0, 0x00,
};

struct Image ArrowUp1Image =
{
    0, 0, /* Left, Top */
    ARROWUP1_WIDTH, ARROWUP1_HEIGHT, /* Width, Height */
    2, /* Depth */
    (UWORD *)ArrowUp1Data, /* ImageData */
    0x03, /* PlanePick */
    0x00, /* PlaneOnOff */
    NULL /* NextImage */
};
