/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrief <rkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 18:35:17 by rkrief            #+#    #+#             */
/*   Updated: 2017/11/23 17:48:29 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

void				ft_bzero(void *s, size_t n);
void				*ft_memalloc(size_t size);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
char				*ft_strcpy(char *dst, const char *src);
char				**ft_strsplit(char const *s, char c);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
size_t				ft_strlen(const char *s);
int					ft_validity_check_four(char *str);
char				**ft_validity_check_rmlines(char **tetris);
char				**ft_validity_check_split(char *str);
char				**ft_validity_check_fresh(char **tetris);
char				**ft_validity_check_alpha(char **tetris);
int					ft_squaremin(char **tab);
int					ft_sqrtupper(int nb);
char				*ft_fill(int squarelen);
int					ft_deletetetris(int j, char *str, char *tetris);
int					ft_isopper(char c);
char				*ft_fillit(char **tab);
int					ft_check_placement(char *tetris);

#endif
