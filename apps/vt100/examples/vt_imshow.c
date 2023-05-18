#include <rtthread.h>
#include <vt100.h>
#include "minions.h"

int main(int argc, char* arvg[])
{
    vt_draw_rgb888_cwh(minions, minions_h, minions_w);
}
// MSH_CMD_EXPORT(vt_imshow, draw RGB image in console)
