/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_607.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3035(t_small_parse_table_array *v)
{
	v->a[60700] = 3;
	v->a[60701] = actions(3);
	v->a[60702] = 1;
	v->a[60703] = sym_comment;
	v->a[60704] = actions(1159);
	v->a[60705] = 3;
	v->a[60706] = sym_file_descriptor;
	v->a[60707] = sym__concat;
	v->a[60708] = sym__bare_dollar;
	v->a[60709] = actions(1157);
	v->a[60710] = 25;
	v->a[60711] = anon_sym_PIPE;
	v->a[60712] = anon_sym_AMP_AMP;
	v->a[60713] = anon_sym_PIPE_PIPE;
	v->a[60714] = anon_sym_LT;
	v->a[60715] = anon_sym_GT;
	v->a[60716] = anon_sym_GT_GT;
	v->a[60717] = anon_sym_AMP_GT;
	v->a[60718] = anon_sym_AMP_GT_GT;
	v->a[60719] = anon_sym_LT_AMP;
	small_parse_table_3036(v);
}

void	small_parse_table_3036(t_small_parse_table_array *v)
{
	v->a[60720] = anon_sym_GT_AMP;
	v->a[60721] = anon_sym_GT_PIPE;
	v->a[60722] = anon_sym_LT_AMP_DASH;
	v->a[60723] = anon_sym_GT_AMP_DASH;
	v->a[60724] = anon_sym_LT_LT;
	v->a[60725] = anon_sym_LT_LT_DASH;
	v->a[60726] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60727] = aux_sym_concatenation_token1;
	v->a[60728] = anon_sym_DOLLAR;
	v->a[60729] = anon_sym_DQUOTE;
	v->a[60730] = sym_raw_string;
	v->a[60731] = sym_number;
	v->a[60732] = anon_sym_DOLLAR_LBRACE;
	v->a[60733] = anon_sym_DOLLAR_LPAREN;
	v->a[60734] = anon_sym_BQUOTE;
	v->a[60735] = sym_word;
	v->a[60736] = 12;
	v->a[60737] = actions(3);
	v->a[60738] = 1;
	v->a[60739] = sym_comment;
	small_parse_table_3037(v);
}

void	small_parse_table_3037(t_small_parse_table_array *v)
{
	v->a[60740] = actions(1845);
	v->a[60741] = 1;
	v->a[60742] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60743] = actions(1848);
	v->a[60744] = 1;
	v->a[60745] = anon_sym_DOLLAR;
	v->a[60746] = actions(1851);
	v->a[60747] = 1;
	v->a[60748] = anon_sym_DQUOTE;
	v->a[60749] = actions(1854);
	v->a[60750] = 1;
	v->a[60751] = anon_sym_DOLLAR_LBRACE;
	v->a[60752] = actions(1857);
	v->a[60753] = 1;
	v->a[60754] = anon_sym_DOLLAR_LPAREN;
	v->a[60755] = actions(1860);
	v->a[60756] = 1;
	v->a[60757] = anon_sym_BQUOTE;
	v->a[60758] = actions(559);
	v->a[60759] = 2;
	small_parse_table_3038(v);
}

void	small_parse_table_3038(t_small_parse_table_array *v)
{
	v->a[60760] = sym_file_descriptor;
	v->a[60761] = sym_variable_name;
	v->a[60762] = state(1034);
	v->a[60763] = 2;
	v->a[60764] = sym_concatenation;
	v->a[60765] = aux_sym_for_statement_repeat1;
	v->a[60766] = actions(1842);
	v->a[60767] = 3;
	v->a[60768] = sym_raw_string;
	v->a[60769] = sym_number;
	v->a[60770] = sym_word;
	v->a[60771] = state(1200);
	v->a[60772] = 5;
	v->a[60773] = sym_arithmetic_expansion;
	v->a[60774] = sym_string;
	v->a[60775] = sym_simple_expansion;
	v->a[60776] = sym_expansion;
	v->a[60777] = sym_command_substitution;
	v->a[60778] = actions(564);
	v->a[60779] = 10;
	small_parse_table_3039(v);
}

void	small_parse_table_3039(t_small_parse_table_array *v)
{
	v->a[60780] = anon_sym_LT;
	v->a[60781] = anon_sym_GT;
	v->a[60782] = anon_sym_GT_GT;
	v->a[60783] = anon_sym_AMP_GT;
	v->a[60784] = anon_sym_AMP_GT_GT;
	v->a[60785] = anon_sym_LT_AMP;
	v->a[60786] = anon_sym_GT_AMP;
	v->a[60787] = anon_sym_GT_PIPE;
	v->a[60788] = anon_sym_LT_AMP_DASH;
	v->a[60789] = anon_sym_GT_AMP_DASH;
	v->a[60790] = 3;
	v->a[60791] = actions(3);
	v->a[60792] = 1;
	v->a[60793] = sym_comment;
	v->a[60794] = actions(1153);
	v->a[60795] = 2;
	v->a[60796] = sym_file_descriptor;
	v->a[60797] = sym__concat;
	v->a[60798] = actions(1151);
	v->a[60799] = 25;
	small_parse_table_3040(v);
}

/* EOF small_parse_table_607.c */
