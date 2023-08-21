
 //pre: none
 //post: returns true if parameter is a valid operator. False otherwise.
 bool goodOper(char funct)
 {
  if (funct != 'e')
     if (funct != '+')
	if (funct != '-')
	   if (funct != '*')
	      if (funct != '/')
		  return false;
  return true;
 }

