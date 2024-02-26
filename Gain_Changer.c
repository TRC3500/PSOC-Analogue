#include "project.h"
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    WaveDAC8_1_Start();
    PGA_1_Start();
    for (;;)
    {
        PGA_1_SetGain(1);
        CyDelay(500);
        PGA_1_SetGain(2);
        CyDelay(500);
    }
}
