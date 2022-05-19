struct element
{
	element* next{};
	void insert_after(element* new_element)
	{
		new_element->next = next;
		next = new_element;
	}
	char prefix[2];
	short operating_number;
};
int main()
{
	element s1, s2, s3;
	s1.prefix[0] = 'T';
	s1.prefix[1] = 'K';
	s1.operating_number = 431;
	s1.insert_after(&s2);
	s2.prefix[0] = 'F';
	s2.prefix[1] = 'N';
	s2.operating_number = 2188;
	s2.insert_after(&s3);
	s3.prefix[0] = 'L';
	s3.prefix[1] = 'S';
	s3.operating_number = 500;
	
  /* Heres an idea of what the element structure is doing
	element* pp = &s1;
	std::cout << pp << std::endl;
	std::cout << pp->next << std::endl;
	pp = pp->next;
	std::cout << pp->next << std::endl;
*/


	for (element* cursor = &s1; cursor; cursor = cursor->next)
	{
	   std::cout << "stormtrooper: " << cursor->prefix[0] << cursor->prefix[1] << cursor->operating_number << std::endl;
	}
}
