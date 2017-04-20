/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grosheader.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/02 11:40:51 by dle-norm          #+#    #+#             */
/*   Updated: 2015/05/03 21:27:40 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GROSHEADER_H
# define GROSHEADER_H

# include "./libft/libft.h"
# include "./glfw/include/GLFW/glfw3.h"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# define BUFF_SIZE 6
# define IMG_X 1500
# define IMG_Y 1000

typedef struct		s_coord
{
	int				x;
	int				x2;
	int				y;
	int				y2;
	int				z;
	int				f;
	struct s_coord	*next;
}					t_coord;

typedef struct		s_alst
{
	char			**data;
	struct s_alst	*next;
}					t_alst;

typedef struct		s_lvl
{
	t_alst			*begin_lvl;
	struct s_lvl	*next;
}					t_lvl;

typedef struct		s_env
{
	int				i;
	float			j;
	float			k;
	int				n;
	float			x;
	float			x2;
	float			x3;
	float			y;
	float			y3;
	int				z;
	int				deep;
	void			*img;
	void			*mlx;
	void			*win;
	int				fd;
	char			**value;
	char			*data;
	char			*temp;
	t_lvl			*l;
	t_alst			*blist;
	t_coord			*a;
}					t_env;

int					next_lvl(t_alst *l);
float				casse_bric(t_env d, t_alst *lvl, float i);
void				vitesse(t_env *d);
void				map_ball(t_env d);
float				*ball(float x, float y);
void				move(t_env *d, GLFWwindow *windows);
void				map_raquet(float x);
float				*raquet(float x);
void				map_arene(void);
float				*arene(void);
void				draw(float r, float g, float x, float y);
void				map_level(t_env d, t_alst *lvl);
float				*brick(float x, float y);
void				init(void);
void				map(t_env *d);
t_alst				*addlink(t_alst *alst, char **value);
char				*take_line(char *str, char *cpy);
char				*is_null(char *str);
int					iter_line(int const fd, char **line, int ret);
int					get_next_line(int const fd, char **line);
int					ft_error(char *s);
int					ft_help(void);
int					main(int ac, char **av);
t_lvl				*addlvl(t_lvl *lvl, t_alst *begin_lvl);
t_alst				*ft_open_lvl(t_env *d, t_alst *lst, int i);
void				vitesse2(t_env *d);
void				vitesse3(t_env *d);
void				init2(t_env *d, GLFWwindow *window);
void				map_level2(t_env d, t_alst *tmp);

#endif
