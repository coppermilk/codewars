// [Kata] https://www.codewars.com/kata/52b7ed099cdc285c300001cd/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// How Many Unique Consonants?

unsigned int countConsonants(const std::string &str){
	/* Counts the number of unique consonants in a string (made up of printable ascii characters).*/
  unsigned long abc[26] = { 0 };
	unsigned int count = 0;
	for (auto ch: str)
	{
		if (isalpha(ch))
		{
			char c = tolower(ch);
			switch (c)
			{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
					break;
				default:
					if (!(abc[c - 'a']++)){ 			
            ++count;
					}
			}
		}
	}

	return count;
}
