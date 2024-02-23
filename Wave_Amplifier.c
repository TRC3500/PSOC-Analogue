#include "project.h"
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    PGA_1_Start();
    Opamp_1_Start();
    for (;;)
    {
        
    }
}
