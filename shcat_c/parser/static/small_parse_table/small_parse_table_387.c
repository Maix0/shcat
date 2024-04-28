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
	v->a[38700] = sym_raw_string;
	v->a[38701] = sym_ansi_c_string;
	v->a[38702] = aux_sym_number_token1;
	v->a[38703] = aux_sym_number_token2;
	v->a[38704] = anon_sym_DOLLAR_LBRACE;
	v->a[38705] = anon_sym_DOLLAR_LPAREN;
	v->a[38706] = anon_sym_BQUOTE;
	v->a[38707] = anon_sym_DOLLAR_BQUOTE;
	v->a[38708] = anon_sym_LT_LPAREN;
	v->a[38709] = anon_sym_GT_LPAREN;
	v->a[38710] = sym_word;
	v->a[38711] = 9;
	v->a[38712] = actions(3);
	v->a[38713] = 1;
	v->a[38714] = sym_comment;
	v->a[38715] = actions(4696);
	v->a[38716] = 1;
	v->a[38717] = sym_variable_name;
	v->a[38718] = state(6757);
	v->a[38719] = 1;
	small_parse_table_1936(v);
}

void	small_parse_table_1936(t_small_parse_table_array *v)
{
	v->a[38720] = sym_subscript;
	v->a[38721] = actions(4261);
	v->a[38722] = 2;
	v->a[38723] = sym_test_operator;
	v->a[38724] = sym__brace_start;
	v->a[38725] = state(4574);
	v->a[38726] = 2;
	v->a[38727] = sym_variable_assignment;
	v->a[38728] = aux_sym_variable_assignments_repeat1;
	v->a[38729] = actions(4348);
	v->a[38730] = 3;
	v->a[38731] = sym_file_descriptor;
	v->a[38732] = ts_builtin_sym_end;
	v->a[38733] = aux_sym_heredoc_redirect_token1;
	v->a[38734] = state(4650);
	v->a[38735] = 3;
	v->a[38736] = sym_file_redirect;
	v->a[38737] = sym_heredoc_redirect;
	v->a[38738] = aux_sym_redirected_statement_repeat1;
	v->a[38739] = actions(4247);
	small_parse_table_1937(v);
}

void	small_parse_table_1937(t_small_parse_table_array *v)
{
	v->a[38740] = 18;
	v->a[38741] = anon_sym_LPAREN_LPAREN;
	v->a[38742] = anon_sym_LT_LT_LT;
	v->a[38743] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38744] = anon_sym_DOLLAR_LBRACK;
	v->a[38745] = anon_sym_DOLLAR;
	v->a[38746] = sym__special_character;
	v->a[38747] = anon_sym_DQUOTE;
	v->a[38748] = sym_raw_string;
	v->a[38749] = sym_ansi_c_string;
	v->a[38750] = aux_sym_number_token1;
	v->a[38751] = aux_sym_number_token2;
	v->a[38752] = anon_sym_DOLLAR_LBRACE;
	v->a[38753] = anon_sym_DOLLAR_LPAREN;
	v->a[38754] = anon_sym_BQUOTE;
	v->a[38755] = anon_sym_DOLLAR_BQUOTE;
	v->a[38756] = anon_sym_LT_LPAREN;
	v->a[38757] = anon_sym_GT_LPAREN;
	v->a[38758] = sym_word;
	v->a[38759] = actions(4253);
	small_parse_table_1938(v);
}

void	small_parse_table_1938(t_small_parse_table_array *v)
{
	v->a[38760] = 19;
	v->a[38761] = anon_sym_SEMI;
	v->a[38762] = anon_sym_PIPE_PIPE;
	v->a[38763] = anon_sym_AMP_AMP;
	v->a[38764] = anon_sym_PIPE;
	v->a[38765] = anon_sym_AMP;
	v->a[38766] = anon_sym_LT;
	v->a[38767] = anon_sym_GT;
	v->a[38768] = anon_sym_LT_LT;
	v->a[38769] = anon_sym_GT_GT;
	v->a[38770] = anon_sym_SEMI_SEMI;
	v->a[38771] = anon_sym_PIPE_AMP;
	v->a[38772] = anon_sym_AMP_GT;
	v->a[38773] = anon_sym_AMP_GT_GT;
	v->a[38774] = anon_sym_LT_AMP;
	v->a[38775] = anon_sym_GT_AMP;
	v->a[38776] = anon_sym_GT_PIPE;
	v->a[38777] = anon_sym_LT_AMP_DASH;
	v->a[38778] = anon_sym_GT_AMP_DASH;
	v->a[38779] = anon_sym_LT_LT_DASH;
	small_parse_table_1939(v);
}

void	small_parse_table_1939(t_small_parse_table_array *v)
{
	v->a[38780] = 3;
	v->a[38781] = actions(3);
	v->a[38782] = 1;
	v->a[38783] = sym_comment;
	v->a[38784] = actions(1318);
	v->a[38785] = 6;
	v->a[38786] = sym_file_descriptor;
	v->a[38787] = sym__concat;
	v->a[38788] = sym_test_operator;
	v->a[38789] = sym__bare_dollar;
	v->a[38790] = sym__brace_start;
	v->a[38791] = aux_sym_heredoc_redirect_token1;
	v->a[38792] = actions(1316);
	v->a[38793] = 43;
	v->a[38794] = anon_sym_LPAREN_LPAREN;
	v->a[38795] = anon_sym_SEMI;
	v->a[38796] = anon_sym_PIPE_PIPE;
	v->a[38797] = anon_sym_AMP_AMP;
	v->a[38798] = anon_sym_PIPE;
	v->a[38799] = anon_sym_AMP;
	small_parse_table_1940(v);
}

/* EOF small_parse_table_387.c */
