/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_307.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1535(t_small_parse_table_array *v)
{
	v->a[30700] = anon_sym_PIPE_PIPE;
	v->a[30701] = anon_sym_LT_LT;
	v->a[30702] = aux_sym_heredoc_redirect_token1;
	v->a[30703] = anon_sym_SEMI;
	v->a[30704] = actions(1247);
	v->a[30705] = 9;
	v->a[30706] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30707] = anon_sym_DOLLAR;
	v->a[30708] = anon_sym_DQUOTE;
	v->a[30709] = sym_raw_string;
	v->a[30710] = sym_number;
	v->a[30711] = anon_sym_DOLLAR_LBRACE;
	v->a[30712] = anon_sym_DOLLAR_LPAREN;
	v->a[30713] = anon_sym_BQUOTE;
	v->a[30714] = sym_word;
	v->a[30715] = 5;
	v->a[30716] = actions(3);
	v->a[30717] = 1;
	v->a[30718] = sym_comment;
	v->a[30719] = actions(1274);
	small_parse_table_1536(v);
}

void	small_parse_table_1536(t_small_parse_table_array *v)
{
	v->a[30720] = 1;
	v->a[30721] = ts_builtin_sym_end;
	v->a[30722] = actions(1278);
	v->a[30723] = 1;
	v->a[30724] = sym_variable_name;
	v->a[30725] = actions(576);
	v->a[30726] = 9;
	v->a[30727] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30728] = anon_sym_DOLLAR;
	v->a[30729] = anon_sym_DQUOTE;
	v->a[30730] = sym_raw_string;
	v->a[30731] = sym_number;
	v->a[30732] = anon_sym_DOLLAR_LBRACE;
	v->a[30733] = anon_sym_DOLLAR_LPAREN;
	v->a[30734] = anon_sym_BQUOTE;
	v->a[30735] = sym_word;
	v->a[30736] = actions(1276);
	v->a[30737] = 10;
	v->a[30738] = anon_sym_PIPE;
	v->a[30739] = anon_sym_SEMI_SEMI;
	small_parse_table_1537(v);
}

void	small_parse_table_1537(t_small_parse_table_array *v)
{
	v->a[30740] = anon_sym_AMP_AMP;
	v->a[30741] = anon_sym_PIPE_PIPE;
	v->a[30742] = anon_sym_LT;
	v->a[30743] = anon_sym_GT;
	v->a[30744] = anon_sym_GT_GT;
	v->a[30745] = anon_sym_LT_LT;
	v->a[30746] = aux_sym_heredoc_redirect_token1;
	v->a[30747] = anon_sym_SEMI;
	v->a[30748] = 15;
	v->a[30749] = actions(3);
	v->a[30750] = 1;
	v->a[30751] = sym_comment;
	v->a[30752] = actions(778);
	v->a[30753] = 1;
	v->a[30754] = anon_sym_LPAREN;
	v->a[30755] = actions(782);
	v->a[30756] = 1;
	v->a[30757] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30758] = actions(784);
	v->a[30759] = 1;
	small_parse_table_1538(v);
}

void	small_parse_table_1538(t_small_parse_table_array *v)
{
	v->a[30760] = anon_sym_DOLLAR;
	v->a[30761] = actions(786);
	v->a[30762] = 1;
	v->a[30763] = anon_sym_DQUOTE;
	v->a[30764] = actions(788);
	v->a[30765] = 1;
	v->a[30766] = anon_sym_DOLLAR_LBRACE;
	v->a[30767] = actions(790);
	v->a[30768] = 1;
	v->a[30769] = anon_sym_DOLLAR_LPAREN;
	v->a[30770] = actions(792);
	v->a[30771] = 1;
	v->a[30772] = anon_sym_BQUOTE;
	v->a[30773] = actions(794);
	v->a[30774] = 1;
	v->a[30775] = sym_extglob_pattern;
	v->a[30776] = state(597);
	v->a[30777] = 1;
	v->a[30778] = aux_sym_case_statement_repeat1;
	v->a[30779] = state(1232);
	small_parse_table_1539(v);
}

void	small_parse_table_1539(t_small_parse_table_array *v)
{
	v->a[30780] = 1;
	v->a[30781] = sym_case_item;
	v->a[30782] = state(1658);
	v->a[30783] = 1;
	v->a[30784] = sym__case_item_last;
	v->a[30785] = state(1538);
	v->a[30786] = 2;
	v->a[30787] = sym_concatenation;
	v->a[30788] = sym__extglob_blob;
	v->a[30789] = actions(774);
	v->a[30790] = 3;
	v->a[30791] = sym_raw_string;
	v->a[30792] = sym_number;
	v->a[30793] = sym_word;
	v->a[30794] = state(1468);
	v->a[30795] = 5;
	v->a[30796] = sym_arithmetic_expansion;
	v->a[30797] = sym_string;
	v->a[30798] = sym_simple_expansion;
	v->a[30799] = sym_expansion;
	small_parse_table_1540(v);
}

/* EOF small_parse_table_307.c */
