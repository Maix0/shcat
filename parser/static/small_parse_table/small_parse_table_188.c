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
	v->a[18800] = aux_sym_number_token1;
	v->a[18801] = aux_sym_number_token2;
	v->a[18802] = anon_sym_DOLLAR_LPAREN;
	v->a[18803] = sym_word;
	v->a[18804] = 6;
	v->a[18805] = actions(3);
	v->a[18806] = 1;
	v->a[18807] = sym_comment;
	v->a[18808] = actions(2684);
	v->a[18809] = 1;
	v->a[18810] = aux_sym_concatenation_token1;
	v->a[18811] = actions(2686);
	v->a[18812] = 1;
	v->a[18813] = sym__concat;
	v->a[18814] = state(481);
	v->a[18815] = 1;
	v->a[18816] = aux_sym_concatenation_repeat1;
	v->a[18817] = actions(2754);
	v->a[18818] = 5;
	v->a[18819] = sym_file_descriptor;
	small_parse_table_941(v);
}

void	small_parse_table_941(t_small_parse_table_array *v)
{
	v->a[18820] = sym_test_operator;
	v->a[18821] = sym__bare_dollar;
	v->a[18822] = sym__brace_start;
	v->a[18823] = aux_sym_heredoc_redirect_token1;
	v->a[18824] = actions(2749);
	v->a[18825] = 35;
	v->a[18826] = anon_sym_esac;
	v->a[18827] = anon_sym_LPAREN;
	v->a[18828] = anon_sym_PIPE;
	v->a[18829] = anon_sym_SEMI_SEMI;
	v->a[18830] = anon_sym_SEMI_AMP;
	v->a[18831] = anon_sym_SEMI_SEMI_AMP;
	v->a[18832] = anon_sym_PIPE_AMP;
	v->a[18833] = anon_sym_AMP_AMP;
	v->a[18834] = anon_sym_PIPE_PIPE;
	v->a[18835] = anon_sym_LT;
	v->a[18836] = anon_sym_GT;
	v->a[18837] = anon_sym_GT_GT;
	v->a[18838] = anon_sym_AMP_GT;
	v->a[18839] = anon_sym_AMP_GT_GT;
	small_parse_table_942(v);
}

void	small_parse_table_942(t_small_parse_table_array *v)
{
	v->a[18840] = anon_sym_LT_AMP;
	v->a[18841] = anon_sym_GT_AMP;
	v->a[18842] = anon_sym_GT_PIPE;
	v->a[18843] = anon_sym_LT_AMP_DASH;
	v->a[18844] = anon_sym_GT_AMP_DASH;
	v->a[18845] = anon_sym_LT_LT;
	v->a[18846] = anon_sym_LT_LT_DASH;
	v->a[18847] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18848] = anon_sym_AMP;
	v->a[18849] = anon_sym_DOLLAR;
	v->a[18850] = sym__special_character;
	v->a[18851] = anon_sym_DQUOTE;
	v->a[18852] = sym_raw_string;
	v->a[18853] = aux_sym_number_token1;
	v->a[18854] = aux_sym_number_token2;
	v->a[18855] = anon_sym_DOLLAR_LBRACE;
	v->a[18856] = anon_sym_DOLLAR_LPAREN;
	v->a[18857] = anon_sym_BQUOTE;
	v->a[18858] = anon_sym_DOLLAR_BQUOTE;
	v->a[18859] = sym_word;
	small_parse_table_943(v);
}

void	small_parse_table_943(t_small_parse_table_array *v)
{
	v->a[18860] = anon_sym_SEMI;
	v->a[18861] = 3;
	v->a[18862] = actions(3);
	v->a[18863] = 1;
	v->a[18864] = sym_comment;
	v->a[18865] = actions(2774);
	v->a[18866] = 6;
	v->a[18867] = sym_file_descriptor;
	v->a[18868] = sym__concat;
	v->a[18869] = sym_variable_name;
	v->a[18870] = sym_test_operator;
	v->a[18871] = sym__brace_start;
	v->a[18872] = aux_sym_heredoc_redirect_token1;
	v->a[18873] = actions(2772);
	v->a[18874] = 36;
	v->a[18875] = anon_sym_esac;
	v->a[18876] = anon_sym_PIPE;
	v->a[18877] = anon_sym_SEMI_SEMI;
	v->a[18878] = anon_sym_SEMI_AMP;
	v->a[18879] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_944(v);
}

void	small_parse_table_944(t_small_parse_table_array *v)
{
	v->a[18880] = anon_sym_PIPE_AMP;
	v->a[18881] = anon_sym_AMP_AMP;
	v->a[18882] = anon_sym_PIPE_PIPE;
	v->a[18883] = anon_sym_LT;
	v->a[18884] = anon_sym_GT;
	v->a[18885] = anon_sym_GT_GT;
	v->a[18886] = anon_sym_AMP_GT;
	v->a[18887] = anon_sym_AMP_GT_GT;
	v->a[18888] = anon_sym_LT_AMP;
	v->a[18889] = anon_sym_GT_AMP;
	v->a[18890] = anon_sym_GT_PIPE;
	v->a[18891] = anon_sym_LT_AMP_DASH;
	v->a[18892] = anon_sym_GT_AMP_DASH;
	v->a[18893] = anon_sym_LT_LT;
	v->a[18894] = anon_sym_LT_LT_DASH;
	v->a[18895] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18896] = anon_sym_AMP;
	v->a[18897] = aux_sym_concatenation_token1;
	v->a[18898] = anon_sym_DOLLAR;
	v->a[18899] = sym__special_character;
	small_parse_table_945(v);
}

/* EOF small_parse_table_188.c */
