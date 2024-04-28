/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1407.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7035(t_small_parse_table_array *v)
{
	v->a[140700] = anon_sym_DASH;
	v->a[140701] = anon_sym_STAR;
	v->a[140702] = anon_sym_SLASH;
	v->a[140703] = anon_sym_PERCENT;
	v->a[140704] = anon_sym_STAR_STAR;
	v->a[140705] = actions(354);
	v->a[140706] = 23;
	v->a[140707] = sym_test_operator;
	v->a[140708] = anon_sym_PLUS_PLUS;
	v->a[140709] = anon_sym_DASH_DASH;
	v->a[140710] = anon_sym_PLUS_EQ;
	v->a[140711] = anon_sym_DASH_EQ;
	v->a[140712] = anon_sym_STAR_EQ;
	v->a[140713] = anon_sym_SLASH_EQ;
	v->a[140714] = anon_sym_PERCENT_EQ;
	v->a[140715] = anon_sym_STAR_STAR_EQ;
	v->a[140716] = anon_sym_LT_LT_EQ;
	v->a[140717] = anon_sym_GT_GT_EQ;
	v->a[140718] = anon_sym_AMP_EQ;
	v->a[140719] = anon_sym_CARET_EQ;
	small_parse_table_7036(v);
}

void	small_parse_table_7036(t_small_parse_table_array *v)
{
	v->a[140720] = anon_sym_PIPE_EQ;
	v->a[140721] = anon_sym_PIPE_PIPE;
	v->a[140722] = anon_sym_AMP_AMP;
	v->a[140723] = anon_sym_EQ_EQ;
	v->a[140724] = anon_sym_BANG_EQ;
	v->a[140725] = anon_sym_LT_EQ;
	v->a[140726] = anon_sym_GT_EQ;
	v->a[140727] = anon_sym_RPAREN;
	v->a[140728] = anon_sym_EQ_TILDE;
	v->a[140729] = anon_sym_QMARK;
	v->a[140730] = 7;
	v->a[140731] = actions(71);
	v->a[140732] = 1;
	v->a[140733] = sym_comment;
	v->a[140734] = actions(5821);
	v->a[140735] = 2;
	v->a[140736] = anon_sym_PIPE;
	v->a[140737] = anon_sym_LT_LT;
	v->a[140738] = actions(5823);
	v->a[140739] = 5;
	small_parse_table_7037(v);
}

void	small_parse_table_7037(t_small_parse_table_array *v)
{
	v->a[140740] = anon_sym_LT;
	v->a[140741] = anon_sym_GT;
	v->a[140742] = anon_sym_AMP_GT;
	v->a[140743] = anon_sym_LT_AMP;
	v->a[140744] = anon_sym_GT_AMP;
	v->a[140745] = actions(5826);
	v->a[140746] = 5;
	v->a[140747] = anon_sym_PIPE_PIPE;
	v->a[140748] = anon_sym_AMP_AMP;
	v->a[140749] = anon_sym_PIPE_AMP;
	v->a[140750] = anon_sym_RBRACK;
	v->a[140751] = anon_sym_LT_LT_DASH;
	v->a[140752] = actions(5819);
	v->a[140753] = 6;
	v->a[140754] = anon_sym_DOLLAR;
	v->a[140755] = sym__special_character;
	v->a[140756] = aux_sym_number_token1;
	v->a[140757] = aux_sym_number_token2;
	v->a[140758] = anon_sym_DOLLAR_LPAREN;
	v->a[140759] = sym_word;
	small_parse_table_7038(v);
}

void	small_parse_table_7038(t_small_parse_table_array *v)
{
	v->a[140760] = actions(5828);
	v->a[140761] = 7;
	v->a[140762] = sym_file_descriptor;
	v->a[140763] = anon_sym_GT_GT;
	v->a[140764] = anon_sym_AMP_GT_GT;
	v->a[140765] = anon_sym_GT_PIPE;
	v->a[140766] = anon_sym_LT_AMP_DASH;
	v->a[140767] = anon_sym_GT_AMP_DASH;
	v->a[140768] = anon_sym_LT_LT_LT;
	v->a[140769] = actions(5831);
	v->a[140770] = 14;
	v->a[140771] = sym_variable_name;
	v->a[140772] = sym_test_operator;
	v->a[140773] = sym__brace_start;
	v->a[140774] = anon_sym_LPAREN_LPAREN;
	v->a[140775] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[140776] = anon_sym_DOLLAR_LBRACK;
	v->a[140777] = anon_sym_DQUOTE;
	v->a[140778] = sym_raw_string;
	v->a[140779] = sym_ansi_c_string;
	small_parse_table_7039(v);
}

void	small_parse_table_7039(t_small_parse_table_array *v)
{
	v->a[140780] = anon_sym_DOLLAR_LBRACE;
	v->a[140781] = anon_sym_BQUOTE;
	v->a[140782] = anon_sym_DOLLAR_BQUOTE;
	v->a[140783] = anon_sym_LT_LPAREN;
	v->a[140784] = anon_sym_GT_LPAREN;
	v->a[140785] = 5;
	v->a[140786] = actions(71);
	v->a[140787] = 1;
	v->a[140788] = sym_comment;
	v->a[140789] = actions(6815);
	v->a[140790] = 1;
	v->a[140791] = sym__special_character;
	v->a[140792] = state(2692);
	v->a[140793] = 1;
	v->a[140794] = aux_sym__literal_repeat1;
	v->a[140795] = actions(1362);
	v->a[140796] = 13;
	v->a[140797] = anon_sym_PIPE;
	v->a[140798] = anon_sym_LT;
	v->a[140799] = anon_sym_GT;
	small_parse_table_7040(v);
}

/* EOF small_parse_table_1407.c */
