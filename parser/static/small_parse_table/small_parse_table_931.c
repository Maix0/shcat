/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_931.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4655(t_small_parse_table_array *v)
{
	v->a[93100] = sym__heredoc_body;
	v->a[93101] = sym__simple_heredoc_body;
	v->a[93102] = 5;
	v->a[93103] = actions(1404);
	v->a[93104] = 1;
	v->a[93105] = sym_comment;
	v->a[93106] = actions(4208);
	v->a[93107] = 1;
	v->a[93108] = sym__heredoc_body_beginning;
	v->a[93109] = actions(4265);
	v->a[93110] = 1;
	v->a[93111] = sym_simple_heredoc_body;
	v->a[93112] = state(2240);
	v->a[93113] = 1;
	v->a[93114] = sym_heredoc_body;
	v->a[93115] = state(1257);
	v->a[93116] = 2;
	v->a[93117] = sym__heredoc_body;
	v->a[93118] = sym__simple_heredoc_body;
	v->a[93119] = 5;
	small_parse_table_4656(v);
}

void	small_parse_table_4656(t_small_parse_table_array *v)
{
	v->a[93120] = actions(1404);
	v->a[93121] = 1;
	v->a[93122] = sym_comment;
	v->a[93123] = actions(4362);
	v->a[93124] = 1;
	v->a[93125] = anon_sym_DOLLAR_LBRACE;
	v->a[93126] = actions(4364);
	v->a[93127] = 1;
	v->a[93128] = anon_sym_DOLLAR_LPAREN;
	v->a[93129] = actions(4366);
	v->a[93130] = 1;
	v->a[93131] = anon_sym_BQUOTE;
	v->a[93132] = state(1065);
	v->a[93133] = 2;
	v->a[93134] = sym_expansion;
	v->a[93135] = sym_command_substitution;
	v->a[93136] = 6;
	v->a[93137] = actions(1404);
	v->a[93138] = 1;
	v->a[93139] = sym_comment;
	small_parse_table_4657(v);
}

void	small_parse_table_4657(t_small_parse_table_array *v)
{
	v->a[93140] = actions(4208);
	v->a[93141] = 1;
	v->a[93142] = sym__heredoc_body_beginning;
	v->a[93143] = actions(4216);
	v->a[93144] = 1;
	v->a[93145] = sym_simple_heredoc_body;
	v->a[93146] = state(1569);
	v->a[93147] = 1;
	v->a[93148] = sym__heredoc_body;
	v->a[93149] = state(1571);
	v->a[93150] = 1;
	v->a[93151] = sym__simple_heredoc_body;
	v->a[93152] = state(2119);
	v->a[93153] = 1;
	v->a[93154] = sym_heredoc_body;
	v->a[93155] = 5;
	v->a[93156] = actions(1404);
	v->a[93157] = 1;
	v->a[93158] = sym_comment;
	v->a[93159] = actions(4368);
	small_parse_table_4658(v);
}

void	small_parse_table_4658(t_small_parse_table_array *v)
{
	v->a[93160] = 1;
	v->a[93161] = anon_sym_DOLLAR_LBRACE;
	v->a[93162] = actions(4370);
	v->a[93163] = 1;
	v->a[93164] = anon_sym_DOLLAR_LPAREN;
	v->a[93165] = actions(4372);
	v->a[93166] = 1;
	v->a[93167] = anon_sym_BQUOTE;
	v->a[93168] = state(1519);
	v->a[93169] = 2;
	v->a[93170] = sym_expansion;
	v->a[93171] = sym_command_substitution;
	v->a[93172] = 2;
	v->a[93173] = actions(1404);
	v->a[93174] = 1;
	v->a[93175] = sym_comment;
	v->a[93176] = actions(1255);
	v->a[93177] = 5;
	v->a[93178] = sym__concat;
	v->a[93179] = anon_sym_PIPE;
	small_parse_table_4659(v);
}

void	small_parse_table_4659(t_small_parse_table_array *v)
{
	v->a[93180] = anon_sym_RPAREN;
	v->a[93181] = anon_sym_RBRACE;
	v->a[93182] = aux_sym_concatenation_token1;
	v->a[93183] = 5;
	v->a[93184] = actions(1404);
	v->a[93185] = 1;
	v->a[93186] = sym_comment;
	v->a[93187] = actions(4206);
	v->a[93188] = 1;
	v->a[93189] = sym_simple_heredoc_body;
	v->a[93190] = actions(4208);
	v->a[93191] = 1;
	v->a[93192] = sym__heredoc_body_beginning;
	v->a[93193] = state(2151);
	v->a[93194] = 1;
	v->a[93195] = sym_heredoc_body;
	v->a[93196] = state(1158);
	v->a[93197] = 2;
	v->a[93198] = sym__heredoc_body;
	v->a[93199] = sym__simple_heredoc_body;
	small_parse_table_4660(v);
}

/* EOF small_parse_table_931.c */
