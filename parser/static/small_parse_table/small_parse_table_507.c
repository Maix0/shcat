/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_507.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2535(t_small_parse_table_array *v)
{
	v->a[50700] = anon_sym_LBRACE;
	v->a[50701] = anon_sym_BANG;
	v->a[50702] = anon_sym_LT;
	v->a[50703] = anon_sym_GT;
	v->a[50704] = anon_sym_GT_GT;
	v->a[50705] = anon_sym_LT_AMP;
	v->a[50706] = anon_sym_GT_AMP;
	v->a[50707] = anon_sym_GT_PIPE;
	v->a[50708] = anon_sym_LT_AMP_DASH;
	v->a[50709] = anon_sym_GT_AMP_DASH;
	v->a[50710] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50711] = anon_sym_DOLLAR;
	v->a[50712] = anon_sym_DQUOTE;
	v->a[50713] = sym_raw_string;
	v->a[50714] = sym_number;
	v->a[50715] = anon_sym_DOLLAR_LBRACE;
	v->a[50716] = anon_sym_DOLLAR_LPAREN;
	v->a[50717] = sym_word;
	v->a[50718] = 4;
	v->a[50719] = actions(3);
	small_parse_table_2536(v);
}

void	small_parse_table_2536(t_small_parse_table_array *v)
{
	v->a[50720] = 1;
	v->a[50721] = sym_comment;
	v->a[50722] = actions(1575);
	v->a[50723] = 1;
	v->a[50724] = anon_sym_BQUOTE;
	v->a[50725] = actions(1577);
	v->a[50726] = 2;
	v->a[50727] = sym_file_descriptor;
	v->a[50728] = sym_variable_name;
	v->a[50729] = actions(1573);
	v->a[50730] = 24;
	v->a[50731] = anon_sym_for;
	v->a[50732] = anon_sym_while;
	v->a[50733] = anon_sym_until;
	v->a[50734] = anon_sym_if;
	v->a[50735] = anon_sym_case;
	v->a[50736] = anon_sym_LPAREN;
	v->a[50737] = anon_sym_LBRACE;
	v->a[50738] = anon_sym_BANG;
	v->a[50739] = anon_sym_LT;
	small_parse_table_2537(v);
}

void	small_parse_table_2537(t_small_parse_table_array *v)
{
	v->a[50740] = anon_sym_GT;
	v->a[50741] = anon_sym_GT_GT;
	v->a[50742] = anon_sym_LT_AMP;
	v->a[50743] = anon_sym_GT_AMP;
	v->a[50744] = anon_sym_GT_PIPE;
	v->a[50745] = anon_sym_LT_AMP_DASH;
	v->a[50746] = anon_sym_GT_AMP_DASH;
	v->a[50747] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50748] = anon_sym_DOLLAR;
	v->a[50749] = anon_sym_DQUOTE;
	v->a[50750] = sym_raw_string;
	v->a[50751] = sym_number;
	v->a[50752] = anon_sym_DOLLAR_LBRACE;
	v->a[50753] = anon_sym_DOLLAR_LPAREN;
	v->a[50754] = sym_word;
	v->a[50755] = 12;
	v->a[50756] = actions(3);
	v->a[50757] = 1;
	v->a[50758] = sym_comment;
	v->a[50759] = actions(713);
	small_parse_table_2538(v);
}

void	small_parse_table_2538(t_small_parse_table_array *v)
{
	v->a[50760] = 1;
	v->a[50761] = sym_file_descriptor;
	v->a[50762] = actions(1796);
	v->a[50763] = 1;
	v->a[50764] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50765] = actions(1798);
	v->a[50766] = 1;
	v->a[50767] = anon_sym_DOLLAR;
	v->a[50768] = actions(1800);
	v->a[50769] = 1;
	v->a[50770] = anon_sym_DQUOTE;
	v->a[50771] = actions(1802);
	v->a[50772] = 1;
	v->a[50773] = anon_sym_DOLLAR_LBRACE;
	v->a[50774] = actions(1804);
	v->a[50775] = 1;
	v->a[50776] = anon_sym_DOLLAR_LPAREN;
	v->a[50777] = actions(1806);
	v->a[50778] = 1;
	v->a[50779] = anon_sym_BQUOTE;
	small_parse_table_2539(v);
}

void	small_parse_table_2539(t_small_parse_table_array *v)
{
	v->a[50780] = state(1806);
	v->a[50781] = 1;
	v->a[50782] = sym_concatenation;
	v->a[50783] = actions(1794);
	v->a[50784] = 3;
	v->a[50785] = sym_raw_string;
	v->a[50786] = sym_number;
	v->a[50787] = sym_word;
	v->a[50788] = state(1624);
	v->a[50789] = 5;
	v->a[50790] = sym_arithmetic_expansion;
	v->a[50791] = sym_string;
	v->a[50792] = sym_simple_expansion;
	v->a[50793] = sym_expansion;
	v->a[50794] = sym_command_substitution;
	v->a[50795] = actions(711);
	v->a[50796] = 11;
	v->a[50797] = anon_sym_AMP_AMP;
	v->a[50798] = anon_sym_PIPE_PIPE;
	v->a[50799] = anon_sym_LT;
	small_parse_table_2540(v);
}

/* EOF small_parse_table_507.c */
