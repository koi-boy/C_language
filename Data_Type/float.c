
//|f| <= 10^-6  0.000001


int func(float f)
{
	if(f < 0)
		return -1
	else if(f == 0)  // if(fabs(f - 0) <= 1e-6)
				return 0;
		else 
				return 1;
}
