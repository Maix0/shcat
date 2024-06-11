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
	v->a[30700] = anon_sym_PERCENT_EQ;
	v->a[30701] = anon_sym_LT_LT_EQ;
	v->a[30702] = anon_sym_GT_GT_EQ;
	v->a[30703] = anon_sym_AMP_EQ;
	v->a[30704] = anon_sym_CARET_EQ;
	v->a[30705] = anon_sym_PIPE_EQ;
	v->a[30706] = anon_sym_EQ_EQ;
	v->a[30707] = anon_sym_BANG_EQ;
	v->a[30708] = anon_sym_LT_EQ;
	v->a[30709] = anon_sym_GT_EQ;
	v->a[30710] = anon_sym_QMARK;
	v->a[30711] = anon_sym_COLON;
	v->a[30712] = anon_sym_PLUS_PLUS2;
	v->a[30713] = anon_sym_DASH_DASH2;
	v->a[30714] = 21;
	v->a[30715] = actions(3);
	v->a[30716] = 1;
	v->a[30717] = sym_comment;
	v->a[30718] = actions(17);
	v->a[30719] = 1;
	small_parse_table_1536(v);
}

void	small_parse_table_1536(t_small_parse_table_array *v)
{
	v->a[30720] = anon_sym_LPAREN;
	v->a[30721] = actions(27);
	v->a[30722] = 1;
	v->a[30723] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30724] = actions(29);
	v->a[30725] = 1;
	v->a[30726] = anon_sym_DOLLAR;
	v->a[30727] = actions(31);
	v->a[30728] = 1;
	v->a[30729] = anon_sym_DQUOTE;
	v->a[30730] = actions(35);
	v->a[30731] = 1;
	v->a[30732] = anon_sym_DOLLAR_LBRACE;
	v->a[30733] = actions(37);
	v->a[30734] = 1;
	v->a[30735] = anon_sym_DOLLAR_LPAREN;
	v->a[30736] = actions(39);
	v->a[30737] = 1;
	v->a[30738] = anon_sym_BQUOTE;
	v->a[30739] = actions(43);
	small_parse_table_1537(v);
}

void	small_parse_table_1537(t_small_parse_table_array *v)
{
	v->a[30740] = 1;
	v->a[30741] = sym_variable_name;
	v->a[30742] = actions(1201);
	v->a[30743] = 1;
	v->a[30744] = sym_file_descriptor;
	v->a[30745] = state(185);
	v->a[30746] = 1;
	v->a[30747] = sym_command_name;
	v->a[30748] = state(639);
	v->a[30749] = 1;
	v->a[30750] = sym_concatenation;
	v->a[30751] = state(732);
	v->a[30752] = 1;
	v->a[30753] = sym_variable_assignment;
	v->a[30754] = state(745);
	v->a[30755] = 1;
	v->a[30756] = aux_sym_command_repeat1;
	v->a[30757] = state(1328);
	v->a[30758] = 1;
	v->a[30759] = sym_command;
	small_parse_table_1538(v);
}

void	small_parse_table_1538(t_small_parse_table_array *v)
{
	v->a[30760] = state(1329);
	v->a[30761] = 1;
	v->a[30762] = sym_subshell;
	v->a[30763] = state(1477);
	v->a[30764] = 1;
	v->a[30765] = sym_file_redirect;
	v->a[30766] = actions(1199);
	v->a[30767] = 2;
	v->a[30768] = anon_sym_LT_AMP_DASH;
	v->a[30769] = anon_sym_GT_AMP_DASH;
	v->a[30770] = actions(33);
	v->a[30771] = 3;
	v->a[30772] = sym_raw_string;
	v->a[30773] = sym_number;
	v->a[30774] = sym_word;
	v->a[30775] = state(291);
	v->a[30776] = 5;
	v->a[30777] = sym_arithmetic_expansion;
	v->a[30778] = sym_string;
	v->a[30779] = sym_simple_expansion;
	small_parse_table_1539(v);
}

void	small_parse_table_1539(t_small_parse_table_array *v)
{
	v->a[30780] = sym_expansion;
	v->a[30781] = sym_command_substitution;
	v->a[30782] = actions(1197);
	v->a[30783] = 8;
	v->a[30784] = anon_sym_LT;
	v->a[30785] = anon_sym_GT;
	v->a[30786] = anon_sym_GT_GT;
	v->a[30787] = anon_sym_AMP_GT;
	v->a[30788] = anon_sym_AMP_GT_GT;
	v->a[30789] = anon_sym_LT_AMP;
	v->a[30790] = anon_sym_GT_AMP;
	v->a[30791] = anon_sym_GT_PIPE;
	v->a[30792] = 13;
	v->a[30793] = actions(1078);
	v->a[30794] = 1;
	v->a[30795] = anon_sym_EQ;
	v->a[30796] = actions(1094);
	v->a[30797] = 1;
	v->a[30798] = sym_comment;
	v->a[30799] = actions(1108);
	small_parse_table_1540(v);
}

/* EOF small_parse_table_307.c */
