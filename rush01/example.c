int		nmatch(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (!*s1);
	if (*s2 == '*')
	{
		if (*s1)
			return ((nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2)));
		return (nmatch(s1, s2 + 1));
	}
	if (*s1 == *s2)
		return (nmatch(s1 + 1, s2 + 1));
	return (0);
}