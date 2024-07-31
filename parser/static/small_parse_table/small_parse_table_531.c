/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_531.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2655(t_small_parse_table_array *v)
{
	v->a[53100] = actions(3);
	v->a[53101] = 1;
	v->a[53102] = sym_comment;
	v->a[53103] = actions(1023);
	v->a[53104] = 2;
	v->a[53105] = sym_variable_name;
	v->a[53106] = aux_sym_heredoc_redirect_token1;
	v->a[53107] = actions(1025);
	v->a[53108] = 15;
	v->a[53109] = anon_sym_esac;
	v->a[53110] = anon_sym_PIPE;
	v->a[53111] = anon_sym_SEMI_SEMI;
	v->a[53112] = anon_sym_AMP_AMP;
	v->a[53113] = anon_sym_PIPE_PIPE;
	v->a[53114] = anon_sym_LT;
	v->a[53115] = anon_sym_GT;
	v->a[53116] = anon_sym_GT_GT;
	v->a[53117] = anon_sym_LT_AMP;
	v->a[53118] = anon_sym_GT_AMP;
	v->a[53119] = anon_sym_GT_PIPE;
	small_parse_table_2656(v);
}

void	small_parse_table_2656(t_small_parse_table_array *v)
{
	v->a[53120] = anon_sym_LT_GT;
	v->a[53121] = anon_sym_LT_LT;
	v->a[53122] = anon_sym_LT_LT_DASH;
	v->a[53123] = anon_sym_SEMI;
	v->a[53124] = 5;
	v->a[53125] = actions(3);
	v->a[53126] = 1;
	v->a[53127] = sym_comment;
	v->a[53128] = actions(1912);
	v->a[53129] = 1;
	v->a[53130] = anon_sym_PIPE;
	v->a[53131] = actions(1916);
	v->a[53132] = 1;
	v->a[53133] = aux_sym_heredoc_redirect_token1;
	v->a[53134] = state(1049);
	v->a[53135] = 1;
	v->a[53136] = aux_sym_pipeline_repeat1;
	v->a[53137] = actions(1914);
	v->a[53138] = 14;
	v->a[53139] = anon_sym_RPAREN;
	small_parse_table_2657(v);
}

void	small_parse_table_2657(t_small_parse_table_array *v)
{
	v->a[53140] = anon_sym_SEMI_SEMI;
	v->a[53141] = anon_sym_AMP_AMP;
	v->a[53142] = anon_sym_PIPE_PIPE;
	v->a[53143] = anon_sym_LT;
	v->a[53144] = anon_sym_GT;
	v->a[53145] = anon_sym_GT_GT;
	v->a[53146] = anon_sym_LT_AMP;
	v->a[53147] = anon_sym_GT_AMP;
	v->a[53148] = anon_sym_GT_PIPE;
	v->a[53149] = anon_sym_LT_GT;
	v->a[53150] = anon_sym_LT_LT;
	v->a[53151] = anon_sym_LT_LT_DASH;
	v->a[53152] = anon_sym_SEMI;
	v->a[53153] = 11;
	v->a[53154] = actions(3);
	v->a[53155] = 1;
	v->a[53156] = sym_comment;
	v->a[53157] = actions(1341);
	v->a[53158] = 1;
	v->a[53159] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2658(v);
}

void	small_parse_table_2658(t_small_parse_table_array *v)
{
	v->a[53160] = actions(1343);
	v->a[53161] = 1;
	v->a[53162] = anon_sym_DOLLAR;
	v->a[53163] = actions(1345);
	v->a[53164] = 1;
	v->a[53165] = anon_sym_DQUOTE;
	v->a[53166] = actions(1347);
	v->a[53167] = 1;
	v->a[53168] = anon_sym_DOLLAR_LBRACE;
	v->a[53169] = actions(1349);
	v->a[53170] = 1;
	v->a[53171] = anon_sym_DOLLAR_LPAREN;
	v->a[53172] = actions(1351);
	v->a[53173] = 1;
	v->a[53174] = anon_sym_BQUOTE;
	v->a[53175] = actions(1353);
	v->a[53176] = 1;
	v->a[53177] = sym_extglob_pattern;
	v->a[53178] = state(1590);
	v->a[53179] = 2;
	small_parse_table_2659(v);
}

void	small_parse_table_2659(t_small_parse_table_array *v)
{
	v->a[53180] = sym_concatenation;
	v->a[53181] = sym__extglob_blob;
	v->a[53182] = actions(1918);
	v->a[53183] = 3;
	v->a[53184] = sym_raw_string;
	v->a[53185] = sym_number;
	v->a[53186] = sym_word;
	v->a[53187] = state(1514);
	v->a[53188] = 5;
	v->a[53189] = sym_arithmetic_expansion;
	v->a[53190] = sym_string;
	v->a[53191] = sym_simple_expansion;
	v->a[53192] = sym_expansion;
	v->a[53193] = sym_command_substitution;
	v->a[53194] = 10;
	v->a[53195] = actions(3);
	v->a[53196] = 1;
	v->a[53197] = sym_comment;
	v->a[53198] = actions(1922);
	v->a[53199] = 1;
	small_parse_table_2660(v);
}

/* EOF small_parse_table_531.c */
