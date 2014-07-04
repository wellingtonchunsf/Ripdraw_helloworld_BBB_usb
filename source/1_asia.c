/* 1_asia.c
 * 
 * supports Windows/Linux only
 * supports little-endian CPU only
 * 
 */
#include "../include/ripdraw.h"

/* ================================================================== */
/* load_1_asia */

int load_1_asia(RD_INTERFACE* rd_interface)
{
    int ret = 0;
    /* ================================================================== */
    /* release these loaded resource using proper release commands at last or not required */
    RD_ID image_asia = 0;
    RD_ID image_asia_1 = 0;


    ret = Rd_SetLayerEnable(rd_interface, 1, RD_TRUE);
    if (ret < 0)
    {
        return ret;
    }
    ret = Rd_SetLayerBackColor(rd_interface, 1, Rd_Color(0xFF, 0xFF, 0xFF, 0x0));
    if (ret < 0)
    {
        return ret;
    }
    ret = Rd_ImageLoad(rd_interface, "Asia", &image_asia);
    if (ret < 0)
    {
        return ret;
    }
    ret = Rd_ImageWrite(rd_interface, 1, image_asia, Rd_Position(0, 0), &image_asia_1);
    if (ret < 0)
    {
        return ret;
    }
    ret = Rd_SetLayerEnable(rd_interface, 2, RD_FALSE);
    if (ret < 0)
    {
        return ret;
    }
    ret = Rd_SetLayerBackColor(rd_interface, 2, Rd_Color(0xFF, 0xFF, 0xFF, 0x0));
    if (ret < 0)
    {
        return ret;
    }
    ret = Rd_SetLayerEnable(rd_interface, 3, RD_FALSE);
    if (ret < 0)
    {
        return ret;
    }
    ret = Rd_SetLayerBackColor(rd_interface, 3, Rd_Color(0xFF, 0xFF, 0xFF, 0x0));
    if (ret < 0)
    {
        return ret;
    }
    ret = Rd_SetLayerEnable(rd_interface, 4, RD_FALSE);
    if (ret < 0)
    {
        return ret;
    }
    ret = Rd_SetLayerBackColor(rd_interface, 4, Rd_Color(0xFF, 0xFF, 0xFF, 0x0));
    if (ret < 0)
    {
        return ret;
    }
    ret = Rd_SetLayerEnable(rd_interface, 5, RD_FALSE);
    if (ret < 0)
    {
        return ret;
    }
    ret = Rd_SetLayerBackColor(rd_interface, 5, Rd_Color(0xFF, 0xFF, 0xFF, 0x0));
    if (ret < 0)
    {
        return ret;
    }
    ret = Rd_SetLayerEnable(rd_interface, 6, RD_FALSE);
    if (ret < 0)
    {
        return ret;
    }
    ret = Rd_SetLayerBackColor(rd_interface, 6, Rd_Color(0xFF, 0xFF, 0xFF, 0x0));
    if (ret < 0)
    {
        return ret;
    }
    ret = Rd_SetLayerEnable(rd_interface, 7, RD_FALSE);
    if (ret < 0)
    {
        return ret;
    }
    ret = Rd_SetLayerBackColor(rd_interface, 7, Rd_Color(0xFF, 0xFF, 0xFF, 0x0));
    if (ret < 0)
    {
        return ret;
    }

    return ret;
}
