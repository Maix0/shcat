/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_488.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2440(t_small_parse_table_array *v)
{
	v->a[48800] = aux_sym_concatenation_token1;
	v->a[48801] = anon_sym_DOLLAR;
	v->a[48802] = anon_sym_DQUOTE;
	v->a[48803] = sym_raw_string;
	v->a[48804] = sym_number;
	v->a[48805] = anon_sym_DOLLAR_LBRACE;
	v->a[48806] = anon_sym_DOLLAR_LPAREN;
	v->a[48807] = anon_sym_BQUOTE;
	v->a[48808] = sym_word;
	v->a[48809] = 3;
	v->a[48810] = actions(3);
	v->a[48811] = 1;
	v->a[48812] = sym_comment;
	v->a[48813] = actions(1147);
	v->a[48814] = 2;
	v->a[48815] = sym__concat;
	v->a[48816] = sym_variable_name;
	v->a[48817] = actions(1145);
	v->a[48818] = 17;
	v->a[48819] = anon_sym_LT;
	small_parse_table_2441(v);
}

void	small_parse_table_2441(t_small_parse_table_array *v)
{
	v->a[48820] = anon_sym_GT;
	v->a[48821] = anon_sym_GT_GT;
	v->a[48822] = anon_sym_LT_AMP;
	v->a[48823] = anon_sym_GT_AMP;
	v->a[48824] = anon_sym_GT_PIPE;
	v->a[48825] = anon_sym_LT_GT;
	v->a[48826] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48827] = aux_sym_concatenation_token1;
	v->a[48828] = anon_sym_DOLLAR;
	v->a[48829] = anon_sym_DQUOTE;
	v->a[48830] = sym_raw_string;
	v->a[48831] = sym_number;
	v->a[48832] = anon_sym_DOLLAR_LBRACE;
	v->a[48833] = anon_sym_DOLLAR_LPAREN;
	v->a[48834] = anon_sym_BQUOTE;
	v->a[48835] = sym_word;
	v->a[48836] = 3;
	v->a[48837] = actions(3);
	v->a[48838] = 1;
	v->a[48839] = sym_comment;
	small_parse_table_2442(v);
}

void	small_parse_table_2442(t_small_parse_table_array *v)
{
	v->a[48840] = actions(449);
	v->a[48841] = 2;
	v->a[48842] = sym__concat;
	v->a[48843] = sym_variable_name;
	v->a[48844] = actions(447);
	v->a[48845] = 17;
	v->a[48846] = anon_sym_LT;
	v->a[48847] = anon_sym_GT;
	v->a[48848] = anon_sym_GT_GT;
	v->a[48849] = anon_sym_LT_AMP;
	v->a[48850] = anon_sym_GT_AMP;
	v->a[48851] = anon_sym_GT_PIPE;
	v->a[48852] = anon_sym_LT_GT;
	v->a[48853] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48854] = aux_sym_concatenation_token1;
	v->a[48855] = anon_sym_DOLLAR;
	v->a[48856] = anon_sym_DQUOTE;
	v->a[48857] = sym_raw_string;
	v->a[48858] = sym_number;
	v->a[48859] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2443(v);
}

void	small_parse_table_2443(t_small_parse_table_array *v)
{
	v->a[48860] = anon_sym_DOLLAR_LPAREN;
	v->a[48861] = anon_sym_BQUOTE;
	v->a[48862] = sym_word;
	v->a[48863] = 9;
	v->a[48864] = actions(3);
	v->a[48865] = 1;
	v->a[48866] = sym_comment;
	v->a[48867] = actions(746);
	v->a[48868] = 1;
	v->a[48869] = anon_sym_PIPE;
	v->a[48870] = actions(1591);
	v->a[48871] = 1;
	v->a[48872] = aux_sym_heredoc_redirect_token1;
	v->a[48873] = state(634);
	v->a[48874] = 1;
	v->a[48875] = sym_terminator;
	v->a[48876] = actions(850);
	v->a[48877] = 2;
	v->a[48878] = anon_sym_LT_LT;
	v->a[48879] = anon_sym_LT_LT_DASH;
	small_parse_table_2444(v);
}

void	small_parse_table_2444(t_small_parse_table_array *v)
{
	v->a[48880] = actions(858);
	v->a[48881] = 2;
	v->a[48882] = anon_sym_SEMI_SEMI;
	v->a[48883] = anon_sym_SEMI;
	v->a[48884] = actions(898);
	v->a[48885] = 2;
	v->a[48886] = anon_sym_AMP_AMP;
	v->a[48887] = anon_sym_PIPE_PIPE;
	v->a[48888] = state(984);
	v->a[48889] = 3;
	v->a[48890] = sym_file_redirect;
	v->a[48891] = sym_heredoc_redirect;
	v->a[48892] = aux_sym_redirected_statement_repeat1;
	v->a[48893] = actions(1676);
	v->a[48894] = 7;
	v->a[48895] = anon_sym_LT;
	v->a[48896] = anon_sym_GT;
	v->a[48897] = anon_sym_GT_GT;
	v->a[48898] = anon_sym_LT_AMP;
	v->a[48899] = anon_sym_GT_AMP;
	small_parse_table_2445(v);
}

/* EOF small_parse_table_488.c */
