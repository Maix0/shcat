/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_387.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1935(t_small_parse_table_array *v)
{
	v->a[38700] = anon_sym_AMP_GT_GT;
	v->a[38701] = anon_sym_LT_AMP;
	v->a[38702] = anon_sym_GT_AMP;
	v->a[38703] = anon_sym_GT_PIPE;
	v->a[38704] = anon_sym_LT_AMP_DASH;
	v->a[38705] = anon_sym_GT_AMP_DASH;
	v->a[38706] = anon_sym_LT_LT;
	v->a[38707] = anon_sym_LT_LT_DASH;
	v->a[38708] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38709] = anon_sym_AMP;
	v->a[38710] = anon_sym_DOLLAR;
	v->a[38711] = anon_sym_DQUOTE;
	v->a[38712] = sym_raw_string;
	v->a[38713] = aux_sym_number_token1;
	v->a[38714] = aux_sym_number_token2;
	v->a[38715] = anon_sym_DOLLAR_LBRACE;
	v->a[38716] = anon_sym_DOLLAR_LPAREN;
	v->a[38717] = anon_sym_BQUOTE;
	v->a[38718] = anon_sym_DOLLAR_BQUOTE;
	v->a[38719] = sym_word;
	small_parse_table_1936(v);
}

void	small_parse_table_1936(t_small_parse_table_array *v)
{
	v->a[38720] = anon_sym_SEMI;
	v->a[38721] = 6;
	v->a[38722] = actions(3);
	v->a[38723] = 1;
	v->a[38724] = sym_comment;
	v->a[38725] = actions(3167);
	v->a[38726] = 1;
	v->a[38727] = aux_sym_concatenation_token1;
	v->a[38728] = actions(3523);
	v->a[38729] = 1;
	v->a[38730] = sym__concat;
	v->a[38731] = state(715);
	v->a[38732] = 1;
	v->a[38733] = aux_sym_concatenation_repeat1;
	v->a[38734] = actions(2696);
	v->a[38735] = 5;
	v->a[38736] = sym_file_descriptor;
	v->a[38737] = sym_variable_name;
	v->a[38738] = sym_test_operator;
	v->a[38739] = sym__brace_start;
	small_parse_table_1937(v);
}

void	small_parse_table_1937(t_small_parse_table_array *v)
{
	v->a[38740] = aux_sym_heredoc_redirect_token1;
	v->a[38741] = actions(2694);
	v->a[38742] = 32;
	v->a[38743] = anon_sym_PIPE;
	v->a[38744] = anon_sym_SEMI_SEMI;
	v->a[38745] = anon_sym_PIPE_AMP;
	v->a[38746] = anon_sym_AMP_AMP;
	v->a[38747] = anon_sym_PIPE_PIPE;
	v->a[38748] = anon_sym_LT;
	v->a[38749] = anon_sym_GT;
	v->a[38750] = anon_sym_GT_GT;
	v->a[38751] = anon_sym_AMP_GT;
	v->a[38752] = anon_sym_AMP_GT_GT;
	v->a[38753] = anon_sym_LT_AMP;
	v->a[38754] = anon_sym_GT_AMP;
	v->a[38755] = anon_sym_GT_PIPE;
	v->a[38756] = anon_sym_LT_AMP_DASH;
	v->a[38757] = anon_sym_GT_AMP_DASH;
	v->a[38758] = anon_sym_LT_LT;
	v->a[38759] = anon_sym_LT_LT_DASH;
	small_parse_table_1938(v);
}

void	small_parse_table_1938(t_small_parse_table_array *v)
{
	v->a[38760] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38761] = anon_sym_AMP;
	v->a[38762] = anon_sym_DOLLAR;
	v->a[38763] = sym__special_character;
	v->a[38764] = anon_sym_DQUOTE;
	v->a[38765] = sym_raw_string;
	v->a[38766] = aux_sym_number_token1;
	v->a[38767] = aux_sym_number_token2;
	v->a[38768] = anon_sym_DOLLAR_LBRACE;
	v->a[38769] = anon_sym_DOLLAR_LPAREN;
	v->a[38770] = anon_sym_BQUOTE;
	v->a[38771] = anon_sym_DOLLAR_BQUOTE;
	v->a[38772] = aux_sym__simple_variable_name_token1;
	v->a[38773] = sym_word;
	v->a[38774] = anon_sym_SEMI;
	v->a[38775] = 3;
	v->a[38776] = actions(3);
	v->a[38777] = 1;
	v->a[38778] = sym_comment;
	v->a[38779] = actions(3159);
	small_parse_table_1939(v);
}

void	small_parse_table_1939(t_small_parse_table_array *v)
{
	v->a[38780] = 6;
	v->a[38781] = sym_file_descriptor;
	v->a[38782] = sym__concat;
	v->a[38783] = sym_test_operator;
	v->a[38784] = sym__bare_dollar;
	v->a[38785] = sym__brace_start;
	v->a[38786] = aux_sym_heredoc_redirect_token1;
	v->a[38787] = actions(3157);
	v->a[38788] = 34;
	v->a[38789] = anon_sym_LPAREN;
	v->a[38790] = anon_sym_PIPE;
	v->a[38791] = anon_sym_RPAREN;
	v->a[38792] = anon_sym_SEMI_SEMI;
	v->a[38793] = anon_sym_PIPE_AMP;
	v->a[38794] = anon_sym_AMP_AMP;
	v->a[38795] = anon_sym_PIPE_PIPE;
	v->a[38796] = anon_sym_LT;
	v->a[38797] = anon_sym_GT;
	v->a[38798] = anon_sym_GT_GT;
	v->a[38799] = anon_sym_AMP_GT;
	small_parse_table_1940(v);
}

/* EOF small_parse_table_387.c */
