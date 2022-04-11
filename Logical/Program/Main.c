
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{

}

void _CYCLIC ProgramCyclic(void)
{
virtual_lamp[0]=LED[0];
virtual_lamp[1]=LED[1];
virtual_lamp[2]=LED[2];
virtual_lamp[3]=LED[3];
	
}

void _EXIT ProgramExit(void)
{

}

