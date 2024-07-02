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
	v->a[38700] = anon_sym_LT_AMP;
	v->a[38701] = anon_sym_GT_AMP;
	v->a[38702] = anon_sym_GT_PIPE;
	v->a[38703] = anon_sym_LT_GT;
	v->a[38704] = anon_sym_LT_LT;
	v->a[38705] = anon_sym_LT_LT_DASH;
	v->a[38706] = aux_sym_heredoc_redirect_token1;
	v->a[38707] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38708] = anon_sym_AMP;
	v->a[38709] = aux_sym_concatenation_token1;
	v->a[38710] = anon_sym_DOLLAR;
	v->a[38711] = anon_sym_DQUOTE;
	v->a[38712] = sym_raw_string;
	v->a[38713] = sym_number;
	v->a[38714] = anon_sym_DOLLAR_LBRACE;
	v->a[38715] = anon_sym_DOLLAR_LPAREN;
	v->a[38716] = anon_sym_BQUOTE;
	v->a[38717] = sym_word;
	v->a[38718] = anon_sym_SEMI;
	v->a[38719] = 8;
	small_parse_table_1936(v);
}

void	small_parse_table_1936(t_small_parse_table_array *v)
{
	v->a[38720] = actions(3);
	v->a[38721] = 1;
	v->a[38722] = sym_comment;
	v->a[38723] = actions(692);
	v->a[38724] = 1;
	v->a[38725] = anon_sym_PIPE;
	v->a[38726] = actions(702);
	v->a[38727] = 1;
	v->a[38728] = sym_file_descriptor;
	v->a[38729] = actions(1372);
	v->a[38730] = 1;
	v->a[38731] = sym_variable_name;
	v->a[38732] = state(1286);
	v->a[38733] = 2;
	v->a[38734] = sym_variable_assignment;
	v->a[38735] = aux_sym__variable_assignments_repeat1;
	v->a[38736] = state(1354);
	v->a[38737] = 3;
	v->a[38738] = sym_file_redirect;
	v->a[38739] = sym_heredoc_redirect;
	small_parse_table_1937(v);
}

void	small_parse_table_1937(t_small_parse_table_array *v)
{
	v->a[38740] = aux_sym_redirected_statement_repeat1;
	v->a[38741] = actions(997);
	v->a[38742] = 5;
	v->a[38743] = anon_sym_AMP_AMP;
	v->a[38744] = anon_sym_PIPE_PIPE;
	v->a[38745] = anon_sym_LT_LT;
	v->a[38746] = anon_sym_LT_LT_DASH;
	v->a[38747] = aux_sym_heredoc_redirect_token1;
	v->a[38748] = actions(690);
	v->a[38749] = 16;
	v->a[38750] = anon_sym_LT;
	v->a[38751] = anon_sym_GT;
	v->a[38752] = anon_sym_GT_GT;
	v->a[38753] = anon_sym_LT_AMP;
	v->a[38754] = anon_sym_GT_AMP;
	v->a[38755] = anon_sym_GT_PIPE;
	v->a[38756] = anon_sym_LT_GT;
	v->a[38757] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38758] = anon_sym_DOLLAR;
	v->a[38759] = anon_sym_DQUOTE;
	small_parse_table_1938(v);
}

void	small_parse_table_1938(t_small_parse_table_array *v)
{
	v->a[38760] = sym_raw_string;
	v->a[38761] = sym_number;
	v->a[38762] = anon_sym_DOLLAR_LBRACE;
	v->a[38763] = anon_sym_DOLLAR_LPAREN;
	v->a[38764] = anon_sym_BQUOTE;
	v->a[38765] = sym_word;
	v->a[38766] = 3;
	v->a[38767] = actions(3);
	v->a[38768] = 1;
	v->a[38769] = sym_comment;
	v->a[38770] = actions(1377);
	v->a[38771] = 2;
	v->a[38772] = sym_file_descriptor;
	v->a[38773] = sym_variable_name;
	v->a[38774] = actions(1375);
	v->a[38775] = 27;
	v->a[38776] = anon_sym_for;
	v->a[38777] = anon_sym_while;
	v->a[38778] = anon_sym_until;
	v->a[38779] = anon_sym_if;
	small_parse_table_1939(v);
}

void	small_parse_table_1939(t_small_parse_table_array *v)
{
	v->a[38780] = anon_sym_fi;
	v->a[38781] = anon_sym_elif;
	v->a[38782] = anon_sym_else;
	v->a[38783] = anon_sym_case;
	v->a[38784] = anon_sym_LPAREN;
	v->a[38785] = anon_sym_LBRACE;
	v->a[38786] = anon_sym_BANG;
	v->a[38787] = anon_sym_LT;
	v->a[38788] = anon_sym_GT;
	v->a[38789] = anon_sym_GT_GT;
	v->a[38790] = anon_sym_LT_AMP;
	v->a[38791] = anon_sym_GT_AMP;
	v->a[38792] = anon_sym_GT_PIPE;
	v->a[38793] = anon_sym_LT_GT;
	v->a[38794] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38795] = anon_sym_DOLLAR;
	v->a[38796] = anon_sym_DQUOTE;
	v->a[38797] = sym_raw_string;
	v->a[38798] = sym_number;
	v->a[38799] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1940(v);
}

/* EOF small_parse_table_387.c */
