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
	v->a[53100] = anon_sym_GT_PIPE;
	v->a[53101] = anon_sym_LT_AMP_DASH;
	v->a[53102] = anon_sym_GT_AMP_DASH;
	v->a[53103] = anon_sym_LT_LT;
	v->a[53104] = anon_sym_LT_LT_DASH;
	v->a[53105] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53106] = anon_sym_AMP;
	v->a[53107] = anon_sym_DOLLAR;
	v->a[53108] = sym__special_character;
	v->a[53109] = anon_sym_DQUOTE;
	v->a[53110] = sym_raw_string;
	v->a[53111] = aux_sym_number_token1;
	v->a[53112] = aux_sym_number_token2;
	v->a[53113] = anon_sym_DOLLAR_LBRACE;
	v->a[53114] = anon_sym_DOLLAR_LPAREN;
	v->a[53115] = anon_sym_BQUOTE;
	v->a[53116] = anon_sym_DOLLAR_BQUOTE;
	v->a[53117] = sym_word;
	v->a[53118] = anon_sym_SEMI;
	v->a[53119] = 5;
	small_parse_table_2656(v);
}

void	small_parse_table_2656(t_small_parse_table_array *v)
{
	v->a[53120] = actions(3);
	v->a[53121] = 1;
	v->a[53122] = sym_comment;
	v->a[53123] = actions(3713);
	v->a[53124] = 1;
	v->a[53125] = sym__special_character;
	v->a[53126] = state(1161);
	v->a[53127] = 1;
	v->a[53128] = aux_sym__literal_repeat1;
	v->a[53129] = actions(3197);
	v->a[53130] = 4;
	v->a[53131] = sym_file_descriptor;
	v->a[53132] = sym_test_operator;
	v->a[53133] = sym__brace_start;
	v->a[53134] = aux_sym_heredoc_redirect_token1;
	v->a[53135] = actions(3195);
	v->a[53136] = 32;
	v->a[53137] = anon_sym_PIPE;
	v->a[53138] = anon_sym_RPAREN;
	v->a[53139] = anon_sym_SEMI_SEMI;
	small_parse_table_2657(v);
}

void	small_parse_table_2657(t_small_parse_table_array *v)
{
	v->a[53140] = anon_sym_PIPE_AMP;
	v->a[53141] = anon_sym_AMP_AMP;
	v->a[53142] = anon_sym_PIPE_PIPE;
	v->a[53143] = anon_sym_LT;
	v->a[53144] = anon_sym_GT;
	v->a[53145] = anon_sym_GT_GT;
	v->a[53146] = anon_sym_AMP_GT;
	v->a[53147] = anon_sym_AMP_GT_GT;
	v->a[53148] = anon_sym_LT_AMP;
	v->a[53149] = anon_sym_GT_AMP;
	v->a[53150] = anon_sym_GT_PIPE;
	v->a[53151] = anon_sym_LT_AMP_DASH;
	v->a[53152] = anon_sym_GT_AMP_DASH;
	v->a[53153] = anon_sym_LT_LT;
	v->a[53154] = anon_sym_LT_LT_DASH;
	v->a[53155] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53156] = anon_sym_AMP;
	v->a[53157] = anon_sym_DOLLAR;
	v->a[53158] = anon_sym_DQUOTE;
	v->a[53159] = sym_raw_string;
	small_parse_table_2658(v);
}

void	small_parse_table_2658(t_small_parse_table_array *v)
{
	v->a[53160] = aux_sym_number_token1;
	v->a[53161] = aux_sym_number_token2;
	v->a[53162] = anon_sym_DOLLAR_LBRACE;
	v->a[53163] = anon_sym_DOLLAR_LPAREN;
	v->a[53164] = anon_sym_BQUOTE;
	v->a[53165] = anon_sym_DOLLAR_BQUOTE;
	v->a[53166] = aux_sym__simple_variable_name_token1;
	v->a[53167] = sym_word;
	v->a[53168] = anon_sym_SEMI;
	v->a[53169] = 3;
	v->a[53170] = actions(3);
	v->a[53171] = 1;
	v->a[53172] = sym_comment;
	v->a[53173] = actions(3020);
	v->a[53174] = 6;
	v->a[53175] = sym_file_descriptor;
	v->a[53176] = sym__concat;
	v->a[53177] = sym_test_operator;
	v->a[53178] = sym__brace_start;
	v->a[53179] = ts_builtin_sym_end;
	small_parse_table_2659(v);
}

void	small_parse_table_2659(t_small_parse_table_array *v)
{
	v->a[53180] = aux_sym_heredoc_redirect_token1;
	v->a[53181] = actions(3018);
	v->a[53182] = 32;
	v->a[53183] = anon_sym_PIPE;
	v->a[53184] = anon_sym_SEMI_SEMI;
	v->a[53185] = anon_sym_PIPE_AMP;
	v->a[53186] = anon_sym_AMP_AMP;
	v->a[53187] = anon_sym_PIPE_PIPE;
	v->a[53188] = anon_sym_LT;
	v->a[53189] = anon_sym_GT;
	v->a[53190] = anon_sym_GT_GT;
	v->a[53191] = anon_sym_AMP_GT;
	v->a[53192] = anon_sym_AMP_GT_GT;
	v->a[53193] = anon_sym_LT_AMP;
	v->a[53194] = anon_sym_GT_AMP;
	v->a[53195] = anon_sym_GT_PIPE;
	v->a[53196] = anon_sym_LT_AMP_DASH;
	v->a[53197] = anon_sym_GT_AMP_DASH;
	v->a[53198] = anon_sym_LT_LT;
	v->a[53199] = anon_sym_LT_LT_DASH;
	small_parse_table_2660(v);
}

/* EOF small_parse_table_531.c */
