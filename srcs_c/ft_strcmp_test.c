#include "../include/libasm.h"

static	int	len_dst(char **str)
{
	int	i;

	i = 0;
	while (str && str[i])
		++i;
	return (i);
}

void	ft_strcmp_test(void)
{
	int	i;
	int	end; 
	int	ft_ret;
	int	ret;
	int	nb_test;

	nb_test = 3;

	char	*dst[nb_test];
	char	*src[nb_test];

	dst[0] = ft_strdup("yl");
	src[0] = "yo";
	dst[1] = ft_strdup("yo");
	src[1] = "yolo";
	dst[nb_test - 1] = NULL;
	src[nb_test - 1] = NULL;

	i = 0;
	end = len_dst(dst);

	ft_printf("%sft_strcmp%s\n", GREEN, NC);
	ft_printf("%s*********%s\n", GREEN, NC);

	while (i < end)
	{
		ft_ret = 0;
		ret = 0;

		ft_printf("%stest %d%s\n", PURPLE, i, NC);
		ft_printf("------\n");
		ft_printf("*** %sft_strcmp%s ***\n", BLACK, NC);
		
		ft_printf("%s", GREY);
		ft_ret = ft_strcmp(dst[i], src[i]);
		ft_printf("%s", NC);
		ft_printf("|--> %s%d%s\n", GREY, ft_ret, NC);

		ft_printf("*** %sstrcmp%s ***\n", BLACK, NC);
		ft_printf("%s", GREY);
		ret = strcmp(dst[i], src[i]);
		ft_printf("%s", NC);
		
		ft_printf("|--> %s%d%s\n", GREY, ret, NC);
		
		++i;
	}
/*
		ft_printf("%stest NULL%s\n", PURPLE, NC);
		ft_printf("---------\n");

		ft_printf("*** %sdst = NULL%s ***\n", BLACK, NC);
		
		ft_printf("%s", GREY);
		ft_ret = ft_strcmp(NULL, "salut");
		ft_printf("%s", NC);
		ft_printf("|--> %s%d%s\n", GREY, ft_ret, NC);

		ft_printf("*** %ssrc = NULL%s ***\n", BLACK, NC);
		
		ft_printf("%s", GREY);
		ft_ret = ft_strcmp("salut", NULL);
		ft_printf("%s", NC);
		ft_printf("|--> %s%d%s\n", GREY, ft_ret, NC);
*/
}
