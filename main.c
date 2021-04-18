#include "libasm.h"
#include <string.h>

void		test_strlen(void)
{
	printf("\n|||||||||||||     ft_strlen     |||||||||||||\n\n");
	printf("ft_strlen : %zd\n", ft_strlen("test12345"));
	printf("strlen : %zd\n", strlen("test12345"));
	printf("\n");
	printf("ft_strlen : %zd\n", ft_strlen("1"));
	printf("strlen : %zd\n", strlen("1"));
	printf("\n");
	printf("ft_strlen : %zd\n", ft_strlen("testvitefaitlong"));
	printf("strlen : %zd\n", strlen("testvitefaitlong"));
	printf("\n");
	printf("ft_strlen : %zd\n", ft_strlen(""));
	printf("strlen : %zd\n", strlen(""));
	printf("\n");
	printf("ft_strlen : %zd\n", ft_strlen("\n"));
	printf("strlen : %zd\n", strlen("\n"));
	printf("\n");
}

void		test_strcpy(void)
{
	char	str1[] = "Les roses sont rouges";
	char	str2[] = "Les violettes sont bleues";
	char	str3[] = "Si jamais tu bouges";
	char	str4[] = "";
	char	str5[] = "Je t'assomme avec ma queue";
	char	str6[] = "such wow";
	char	str7[] = "much rhyme";
	printf("||||||||||     ft_strcpy     ||||||||||\n\n");
	printf("ft_strcpy : %s\n", ft_strcpy(str1, str2));
	printf("strcpy : %s\n", strcpy(str1, str2));
	printf("\n");
	printf("ft_strcpy : %s\n", ft_strcpy(str3, str4));
	printf("strcpy : %s\n", strcpy(str3, str4));
	printf("\n");
	printf("ft_strcpy : %s\n", ft_strcpy(str5, str6));
	printf("strcpy : %s\n", strcpy(str5, str6));
	printf("\n");
	printf("ft_strcpy : %s\n", ft_strcpy(str4, str7));
	printf("strcpy : %s\n", strcpy(str4, str7));
	printf("\n");
}

void		test_strdup(void)
{
	printf("||||||||||     ft_strdup     ||||||||||\n\n");
    printf("ft_strdup : %s\n", ft_strdup("test12345"));
    printf("strdup : %s\n", strdup("test12345"));
	printf("\n");
	printf("ft_strdup : %s\n", ft_strdup("1"));
    printf("strdup : %s\n", strdup("1"));
	printf("\n");
	printf("ft_strdup : %s\n", ft_strdup(""));
    printf("strdup : %s\n", strdup(""));
	printf("\n");
	printf("ft_strdup : %s\n", ft_strdup("\n"));
    printf("strdup : %s\n", strdup("\n"));
	printf("\n");
	printf("ft_strdup : %s\n", ft_strdup("dwad[]'grm ./123"));
    printf("strdup : %s\n", strdup("dwad[]'grm ./123"));
	printf("\n");
	printf("ft_strdup : %s\n", ft_strdup("Lorem ipsum dolor sit amet, consectetur adipiscingelit. Sed in malesuada purus. \
	Etiam a scelerisque massa. Ut non euismod elit. Aliquambibendum dolor mi, id fringilla tellus pulvinar eu. \
	Fusce vel fermentum sem. Crasvolutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisifelis sed purus. Mauris magna ex, mollis non suscipit \
	eu, lacinia ac turpis. Phasellusac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posueretortor, sit amet consequat amet."));
    printf("strdup : %s\n", strdup("Lorem ipsum dolor sit amet, consectetur adipiscingelit. Sed in malesuada purus. \
	Etiam a scelerisque massa. Ut non euismod elit. Aliquambibendum dolor mi, id fringilla tellus pulvinar eu. \
	Fusce vel fermentum sem. Crasvolutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisifelis sed purus. Mauris magna ex, mollis non suscipit \
	eu, lacinia ac turpis. Phasellusac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posueretortor, sit amet consequat amet."));
}

void		test_strcmp(void)
{
	printf("||||||||||     ft_strcmp     ||||||||||\n\n");
	printf("ft_strcmp : %d\n", ft_strcmp("", "Hello World"));
	printf("strcmp : %d\n", strcmp("", "Hello World"));
	printf("\n");
	printf("ft_strcmp : %d\n", ft_strcmp("Salut", "Hello World"));
	printf("strcmp : %d\n", strcmp("Salut", "Hello World"));
	printf("\n");
	printf("ft_strcmp : %d\n", ft_strcmp("Hello World", "Hello World"));
	printf("strcmp : %d\n", strcmp("Hello World", "Hello World"));
	printf("\n");
	printf("ft_strcmp : %d\n", ft_strcmp("", ""));
	printf("strcmp : %d\n", strcmp("", ""));
	printf("\n");
	printf("ft_strcmp : %d\n", ft_strcmp(" a", " ab"));
	printf("strcmp : %d\n", strcmp(" a", " ab"));
	printf("\n");
}

void		test_write(void)
{
	int tmp[2];
	printf("||||||||||     ft_write     ||||||||||\n\n");
 	printf("ft_write : \n");
	printf("\nreturn = %zd\n", ft_write(0, "coucou", 6));
 	printf("write : \n");
	printf("\nreturn = %zd\n", write(0, "coucou", 6));
	printf("----------\n");
	printf("ft_write : \n");
	printf("\nreturn = %zd\n", ft_write(0, "test", 2));
 	printf("write : \n");
	printf("\nreturn = %zd\n", write(0, "test", 2));
	printf("----------\n");
	printf("ft_write : \n");
	printf("\nreturn = %zd\n", ft_write(0, "test", 1));
 	printf("write : \n");
	printf("\nreturn = %zd\n", write(0, "test", 1));
	printf("----------\n");
	printf("ft_write : \n");
	printf("\nreturn = %zd\n", ft_write(1, "yeslolol", 9));
 	printf("write : \n");
	printf("\nreturn = %zd\n", write(1, "yeslolol", 9));
	printf("----------\n");
	printf("ft_write : \n");
	printf("\nreturn = %zd\n", ft_write(300, "yeslolol", 9));
 	printf("errno : %d\n", errno);
	printf("write : \n");
	errno = 0;
	printf("\nreturn = %zd\n", write(300, "yeslolol", 9));
 	printf("errno : %d\n", errno);
	printf("----------\n");
	printf("ft_write : \n");
	printf("\nreturn = %zd\n", ft_write(1, NULL, 9));
 	printf("errno : %d\n", errno);
	errno = 0;
 	printf("write : \n");
	printf("\nreturn = %zd\n", write(1, NULL, 9));
 	printf("errno : %d\n", errno);
	printf("----------\n");
	printf("ft_write : \n");
	printf("\nreturn = %zd\n", ft_write(-1, "test", 5));
 	printf("errno : %d\n", errno);
	errno = 0;
 	printf("write : \n");
	printf("\nreturn = %zd\n", write(-1, "test", 5));
 	printf("errno : %d\n", errno);
	printf("----------\n");
	printf("ft_write : \n");
	printf("\nreturn = %zd\n", ft_write(tmp[1], NULL, 5));
 	printf("errno : %d\n", errno);
	errno = 0;
 	printf("write : \n");
	printf("\nreturn = %zd\n", write(tmp[1], NULL, 5));
 	printf("errno : %d\n", errno);
	printf("----------\n");
	printf("ft_write : \n");
	printf("\nreturn = %zd\n", ft_write(-1, "tt", 2));
 	printf("errno : %d\n", errno);
	errno = 0;
 	printf("write : \n");
	printf("\nreturn = %zd\n", write(-1, "tt", 2));
 	printf("errno : %d\n", errno);
}

void		test_read(void)
{
    printf("||||||||||     ft_read     ||||||||||\n");
    char		buff[100];
    int         fd;
    ssize_t     ret;

	printf("ft_read : \n");   
    	fd = open("test.txt", O_RDONLY);
    	ret = ft_read(fd, buff, 10);
    	buff[ret] = '\0';
	printf("buff = %sret = %zd\n", buff, ret);
	close(fd);

	printf("read : \n");
	fd = open("test.txt", O_RDONLY);
	ret = read(fd, buff, 10);
	buff[ret] = '\0';
	printf("buff = %sret = %zd\n", buff, ret);
    	close(fd);
	printf("----------\n");
	printf("ft_read : \n");
    	fd = open("lol.txt", O_RDONLY);
    	ret = ft_read(fd, buff, 10);
 	printf("errno : %d\n", errno);
    	buff[ret] = '\0';
	printf("buff = %sret = %zd\n", buff, ret);
	close(fd);

	errno = 0;
	printf("read : \n");
	fd = open("lol.txt", O_RDONLY);
	ret = read(fd, buff, 10);
 	printf("errno : %d\n", errno);
	buff[ret] = '\0';
	printf("buff = %sret = %zd\n", buff, ret);
    	close(fd);
	printf("----------\n");
	char	buf_read[2048];
	int tmp[2];

	printf("ft_read : \n");
    	ret = ft_read(-1, buf_read, 2);
 	printf("errno : %d\n", errno);
	printf("buf: %s, ret = %zd\n", buf_read, ret);
	close(fd);
	errno = 0;
	printf("read : \n");
	ret = read(-1, buf_read, 2);
 	printf("errno : %d\n", errno);
	printf("buf: %s, ret = %zd\n", buf_read, ret);
	printf("----------\n");
	printf("ft_read : \n");
    	ret = ft_read(tmp[0], NULL, 2);
 	printf("errno : %d\n", errno);
	printf("buf: %s, ret = %zd\n", buf_read, ret);
	close(fd);
	errno = 0;
	printf("read : \n");
	ret = read(tmp[0], NULL, 2);
 	printf("errno : %d\n", errno);
	printf("buf: %s, ret = %zd\n", buf_read, ret);
}

int     main()
{
	test_strlen();
	test_strcpy();
	test_strcmp();
  	test_write();
	test_read();
	test_strdup();
}