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
	v->a[18800] = actions(107);
	v->a[18801] = 1;
	v->a[18802] = anon_sym_DOLLAR_LBRACE;
	v->a[18803] = actions(109);
	v->a[18804] = 1;
	v->a[18805] = anon_sym_DOLLAR_LPAREN;
	v->a[18806] = actions(111);
	v->a[18807] = 1;
	v->a[18808] = anon_sym_BQUOTE;
	v->a[18809] = actions(499);
	v->a[18810] = 1;
	v->a[18811] = sym__bare_dollar;
	v->a[18812] = state(239);
	v->a[18813] = 1;
	v->a[18814] = aux_sym_command_repeat2;
	v->a[18815] = state(592);
	v->a[18816] = 1;
	v->a[18817] = sym_concatenation;
	v->a[18818] = actions(495);
	v->a[18819] = 3;
	small_parse_table_941(v);
}

void	small_parse_table_941(t_small_parse_table_array *v)
{
	v->a[18820] = sym_raw_string;
	v->a[18821] = sym_number;
	v->a[18822] = sym_word;
	v->a[18823] = state(357);
	v->a[18824] = 5;
	v->a[18825] = sym_arithmetic_expansion;
	v->a[18826] = sym_string;
	v->a[18827] = sym_simple_expansion;
	v->a[18828] = sym_expansion;
	v->a[18829] = sym_command_substitution;
	v->a[18830] = actions(533);
	v->a[18831] = 16;
	v->a[18832] = anon_sym_esac;
	v->a[18833] = anon_sym_PIPE;
	v->a[18834] = anon_sym_SEMI_SEMI;
	v->a[18835] = anon_sym_AMP_AMP;
	v->a[18836] = anon_sym_PIPE_PIPE;
	v->a[18837] = anon_sym_LT;
	v->a[18838] = anon_sym_GT;
	v->a[18839] = anon_sym_GT_GT;
	small_parse_table_942(v);
}

void	small_parse_table_942(t_small_parse_table_array *v)
{
	v->a[18840] = anon_sym_LT_AMP;
	v->a[18841] = anon_sym_GT_AMP;
	v->a[18842] = anon_sym_GT_PIPE;
	v->a[18843] = anon_sym_LT_GT;
	v->a[18844] = anon_sym_LT_LT;
	v->a[18845] = anon_sym_LT_LT_DASH;
	v->a[18846] = aux_sym_heredoc_redirect_token1;
	v->a[18847] = anon_sym_SEMI;
	v->a[18848] = 17;
	v->a[18849] = actions(407);
	v->a[18850] = 1;
	v->a[18851] = sym_comment;
	v->a[18852] = actions(409);
	v->a[18853] = 1;
	v->a[18854] = anon_sym_PIPE;
	v->a[18855] = actions(411);
	v->a[18856] = 1;
	v->a[18857] = anon_sym_AMP_AMP;
	v->a[18858] = actions(413);
	v->a[18859] = 1;
	small_parse_table_943(v);
}

void	small_parse_table_943(t_small_parse_table_array *v)
{
	v->a[18860] = anon_sym_PIPE_PIPE;
	v->a[18861] = actions(423);
	v->a[18862] = 1;
	v->a[18863] = anon_sym_CARET;
	v->a[18864] = actions(425);
	v->a[18865] = 1;
	v->a[18866] = anon_sym_AMP;
	v->a[18867] = actions(479);
	v->a[18868] = 1;
	v->a[18869] = anon_sym_QMARK;
	v->a[18870] = actions(485);
	v->a[18871] = 1;
	v->a[18872] = anon_sym_EQ;
	v->a[18873] = actions(599);
	v->a[18874] = 1;
	v->a[18875] = anon_sym_RPAREN_RPAREN;
	v->a[18876] = actions(405);
	v->a[18877] = 2;
	v->a[18878] = anon_sym_PLUS_PLUS2;
	v->a[18879] = anon_sym_DASH_DASH2;
	small_parse_table_944(v);
}

void	small_parse_table_944(t_small_parse_table_array *v)
{
	v->a[18880] = actions(417);
	v->a[18881] = 2;
	v->a[18882] = anon_sym_LT;
	v->a[18883] = anon_sym_GT;
	v->a[18884] = actions(419);
	v->a[18885] = 2;
	v->a[18886] = anon_sym_GT_GT;
	v->a[18887] = anon_sym_LT_LT;
	v->a[18888] = actions(427);
	v->a[18889] = 2;
	v->a[18890] = anon_sym_EQ_EQ;
	v->a[18891] = anon_sym_BANG_EQ;
	v->a[18892] = actions(429);
	v->a[18893] = 2;
	v->a[18894] = anon_sym_LT_EQ;
	v->a[18895] = anon_sym_GT_EQ;
	v->a[18896] = actions(431);
	v->a[18897] = 2;
	v->a[18898] = anon_sym_PLUS;
	v->a[18899] = anon_sym_DASH;
	small_parse_table_945(v);
}

/* EOF small_parse_table_188.c */
