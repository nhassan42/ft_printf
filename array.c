#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
va_list args;
typedef int (*t_handler)(va_list args);

int	handle_chars(va_list args)
{
	ft_putchar(va_arg(args, int));
	return (1);
}

int	handle_str(va_list args)
{
	int value;
	value = ft_putstr(va_arg(args, char *));
	return (value);
}

int	process_vars(char fspecifier, va_list args)
{
	t_handler			handler;
	static t_handler	get_handler[550] = {
	['c'] = handle_chars,
	['s'] = handle_str
	};

	handler = get_handler[(unsigned char)fspecifier];
	if (handler)
		return (handler(args));
	return (0);
}