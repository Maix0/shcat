/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_188.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_940(t_small_parse_table_array *v)
{
	v->a[18800] = anon_sym_DOLLAR;
	v->a[18801] = actions(708);
	v->a[18802] = 1;
	v->a[18803] = anon_sym_DQUOTE;
	v->a[18804] = actions(710);
	v->a[18805] = 1;
	v->a[18806] = anon_sym_DOLLAR_LBRACE;
	v->a[18807] = actions(712);
	v->a[18808] = 1;
	v->a[18809] = anon_sym_DOLLAR_LPAREN;
	v->a[18810] = state(225);
	v->a[18811] = 2;
	v->a[18812] = sym_concatenation;
	v->a[18813] = aux_sym_for_statement_repeat1;
	v->a[18814] = actions(760);
	v->a[18815] = 3;
	v->a[18816] = sym_raw_string;
	v->a[18817] = sym_number;
	v->a[18818] = sym_word;
	v->a[18819] = state(493);
	small_parse_table_941(v);
}

void	small_parse_table_941(t_small_parse_table_array *v)
{
	v->a[18820] = 5;
	v->a[18821] = sym_arithmetic_expansion;
	v->a[18822] = sym_string;
	v->a[18823] = sym_simple_expansion;
	v->a[18824] = sym_expansion;
	v->a[18825] = sym_command_substitution;
	v->a[18826] = actions(421);
	v->a[18827] = 11;
	v->a[18828] = anon_sym_PIPE;
	v->a[18829] = anon_sym_SEMI_SEMI;
	v->a[18830] = anon_sym_AMP_AMP;
	v->a[18831] = anon_sym_PIPE_PIPE;
	v->a[18832] = anon_sym_LT;
	v->a[18833] = anon_sym_GT;
	v->a[18834] = anon_sym_GT_GT;
	v->a[18835] = anon_sym_LT_LT;
	v->a[18836] = aux_sym_heredoc_redirect_token1;
	v->a[18837] = anon_sym_BQUOTE;
	v->a[18838] = anon_sym_SEMI;
	v->a[18839] = 11;
	small_parse_table_942(v);
}

void	small_parse_table_942(t_small_parse_table_array *v)
{
	v->a[18840] = actions(3);
	v->a[18841] = 1;
	v->a[18842] = sym_comment;
	v->a[18843] = actions(578);
	v->a[18844] = 1;
	v->a[18845] = anon_sym_BQUOTE;
	v->a[18846] = actions(580);
	v->a[18847] = 1;
	v->a[18848] = anon_sym_PIPE;
	v->a[18849] = actions(597);
	v->a[18850] = 1;
	v->a[18851] = anon_sym_LT_LT;
	v->a[18852] = actions(764);
	v->a[18853] = 1;
	v->a[18854] = sym_variable_name;
	v->a[18855] = state(559);
	v->a[18856] = 1;
	v->a[18857] = sym_terminator;
	v->a[18858] = actions(762);
	v->a[18859] = 2;
	small_parse_table_943(v);
}

void	small_parse_table_943(t_small_parse_table_array *v)
{
	v->a[18860] = anon_sym_AMP_AMP;
	v->a[18861] = anon_sym_PIPE_PIPE;
	v->a[18862] = state(967);
	v->a[18863] = 2;
	v->a[18864] = sym_variable_assignment;
	v->a[18865] = aux_sym__variable_assignments_repeat1;
	v->a[18866] = actions(593);
	v->a[18867] = 3;
	v->a[18868] = anon_sym_SEMI_SEMI;
	v->a[18869] = aux_sym_heredoc_redirect_token1;
	v->a[18870] = anon_sym_SEMI;
	v->a[18871] = state(925);
	v->a[18872] = 3;
	v->a[18873] = sym_file_redirect;
	v->a[18874] = sym_heredoc_redirect;
	v->a[18875] = aux_sym_redirected_statement_repeat1;
	v->a[18876] = actions(576);
	v->a[18877] = 11;
	v->a[18878] = anon_sym_LT;
	v->a[18879] = anon_sym_GT;
	small_parse_table_944(v);
}

void	small_parse_table_944(t_small_parse_table_array *v)
{
	v->a[18880] = anon_sym_GT_GT;
	v->a[18881] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18882] = anon_sym_DOLLAR;
	v->a[18883] = anon_sym_DQUOTE;
	v->a[18884] = sym_raw_string;
	v->a[18885] = sym_number;
	v->a[18886] = anon_sym_DOLLAR_LBRACE;
	v->a[18887] = anon_sym_DOLLAR_LPAREN;
	v->a[18888] = sym_word;
	v->a[18889] = 10;
	v->a[18890] = actions(3);
	v->a[18891] = 1;
	v->a[18892] = sym_comment;
	v->a[18893] = actions(580);
	v->a[18894] = 1;
	v->a[18895] = anon_sym_PIPE;
	v->a[18896] = actions(597);
	v->a[18897] = 1;
	v->a[18898] = anon_sym_LT_LT;
	v->a[18899] = actions(771);
	small_parse_table_945(v);
}

/* EOF small_parse_table_188.c */
