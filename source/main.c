/*******************************************************************************
*
*	Name:    main.c 
*	Author:  Rangineni Balasubramanyam
*	Date:    25-06-2014
*
*	Description: This file demonstrates the 
*		     calling of functions written in assebly language	
*		     from C
*		     This project can be compiled in keil IDE	
*
*******************************************************************************/




extern void strcopy(char *d, const char *s);


int main(void)
{   
	  const char *srcstr = "First string - source ";
    char dststr[] = "Second string - destination ";
		
    strcopy(dststr,srcstr);
   
    return (0);
}
