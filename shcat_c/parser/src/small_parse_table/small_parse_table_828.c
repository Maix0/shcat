/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_828.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4140(t_small_parse_table_array *v)
{
	v->a[82800] = 1;
	v->a[82801] = sym__special_character;
	v->a[82802] = state(1751);
	v->a[82803] = 1;
	v->a[82804] = aux_sym__literal_repeat1;
	v->a[82805] = actions(4469);
	v->a[82806] = 5;
	v->a[82807] = sym_file_descriptor;
	v->a[82808] = sym_variable_name;
	v->a[82809] = sym_test_operator;
	v->a[82810] = sym__brace_start;
	v->a[82811] = aux_sym_heredoc_redirect_token1;
	v->a[82812] = actions(4467);
	v->a[82813] = 37;
	v->a[82814] = anon_sym_LPAREN_LPAREN;
	v->a[82815] = anon_sym_SEMI;
	v->a[82816] = anon_sym_PIPE_PIPE;
	v->a[82817] = anon_sym_AMP_AMP;
	v->a[82818] = anon_sym_PIPE;
	v->a[82819] = anon_sym_AMP;
	small_parse_table_4141(v);
}

void	small_parse_table_4141(t_small_parse_table_array *v)
{
	v->a[82820] = anon_sym_LT;
	v->a[82821] = anon_sym_GT;
	v->a[82822] = anon_sym_LT_LT;
	v->a[82823] = anon_sym_GT_GT;
	v->a[82824] = anon_sym_RPAREN;
	v->a[82825] = anon_sym_SEMI_SEMI;
	v->a[82826] = anon_sym_PIPE_AMP;
	v->a[82827] = anon_sym_AMP_GT;
	v->a[82828] = anon_sym_AMP_GT_GT;
	v->a[82829] = anon_sym_LT_AMP;
	v->a[82830] = anon_sym_GT_AMP;
	v->a[82831] = anon_sym_GT_PIPE;
	v->a[82832] = anon_sym_LT_AMP_DASH;
	v->a[82833] = anon_sym_GT_AMP_DASH;
	v->a[82834] = anon_sym_LT_LT_DASH;
	v->a[82835] = anon_sym_LT_LT_LT;
	v->a[82836] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82837] = anon_sym_DOLLAR_LBRACK;
	v->a[82838] = anon_sym_DOLLAR;
	v->a[82839] = anon_sym_DQUOTE;
	small_parse_table_4142(v);
}

void	small_parse_table_4142(t_small_parse_table_array *v)
{
	v->a[82840] = sym_raw_string;
	v->a[82841] = sym_ansi_c_string;
	v->a[82842] = aux_sym_number_token1;
	v->a[82843] = aux_sym_number_token2;
	v->a[82844] = anon_sym_DOLLAR_LBRACE;
	v->a[82845] = anon_sym_DOLLAR_LPAREN;
	v->a[82846] = anon_sym_BQUOTE;
	v->a[82847] = anon_sym_DOLLAR_BQUOTE;
	v->a[82848] = anon_sym_LT_LPAREN;
	v->a[82849] = anon_sym_GT_LPAREN;
	v->a[82850] = sym_word;
	v->a[82851] = 5;
	v->a[82852] = actions(3);
	v->a[82853] = 1;
	v->a[82854] = sym_comment;
	v->a[82855] = actions(5968);
	v->a[82856] = 1;
	v->a[82857] = sym__special_character;
	v->a[82858] = state(1751);
	v->a[82859] = 1;
	small_parse_table_4143(v);
}

void	small_parse_table_4143(t_small_parse_table_array *v)
{
	v->a[82860] = aux_sym__literal_repeat1;
	v->a[82861] = actions(5723);
	v->a[82862] = 5;
	v->a[82863] = sym_file_descriptor;
	v->a[82864] = sym_variable_name;
	v->a[82865] = sym_test_operator;
	v->a[82866] = sym__brace_start;
	v->a[82867] = aux_sym_heredoc_redirect_token1;
	v->a[82868] = actions(5721);
	v->a[82869] = 37;
	v->a[82870] = anon_sym_LPAREN_LPAREN;
	v->a[82871] = anon_sym_SEMI;
	v->a[82872] = anon_sym_PIPE_PIPE;
	v->a[82873] = anon_sym_AMP_AMP;
	v->a[82874] = anon_sym_PIPE;
	v->a[82875] = anon_sym_AMP;
	v->a[82876] = anon_sym_LT;
	v->a[82877] = anon_sym_GT;
	v->a[82878] = anon_sym_LT_LT;
	v->a[82879] = anon_sym_GT_GT;
	small_parse_table_4144(v);
}

void	small_parse_table_4144(t_small_parse_table_array *v)
{
	v->a[82880] = anon_sym_RPAREN;
	v->a[82881] = anon_sym_SEMI_SEMI;
	v->a[82882] = anon_sym_PIPE_AMP;
	v->a[82883] = anon_sym_AMP_GT;
	v->a[82884] = anon_sym_AMP_GT_GT;
	v->a[82885] = anon_sym_LT_AMP;
	v->a[82886] = anon_sym_GT_AMP;
	v->a[82887] = anon_sym_GT_PIPE;
	v->a[82888] = anon_sym_LT_AMP_DASH;
	v->a[82889] = anon_sym_GT_AMP_DASH;
	v->a[82890] = anon_sym_LT_LT_DASH;
	v->a[82891] = anon_sym_LT_LT_LT;
	v->a[82892] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82893] = anon_sym_DOLLAR_LBRACK;
	v->a[82894] = anon_sym_DOLLAR;
	v->a[82895] = anon_sym_DQUOTE;
	v->a[82896] = sym_raw_string;
	v->a[82897] = sym_ansi_c_string;
	v->a[82898] = aux_sym_number_token1;
	v->a[82899] = aux_sym_number_token2;
	small_parse_table_4145(v);
}

/* EOF small_parse_table_828.c */
