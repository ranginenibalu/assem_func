




extern void strcopy(char *d, const char *s);


int main(void)
{   
	  const char *srcstr = "First string - source ";
    char dststr[] = "Second string - destination ";
		
    strcopy(dststr,srcstr);
   
    return (0);
}
