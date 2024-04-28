/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_558.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2790(t_small_parse_table_array *v)
{
	v->a[55800] = anon_sym_SEMI;
	v->a[55801] = anon_sym_PIPE_PIPE;
	v->a[55802] = anon_sym_AMP_AMP;
	v->a[55803] = anon_sym_PIPE;
	v->a[55804] = anon_sym_AMP;
	v->a[55805] = anon_sym_LT;
	v->a[55806] = anon_sym_GT;
	v->a[55807] = anon_sym_LT_LT;
	v->a[55808] = anon_sym_GT_GT;
	v->a[55809] = anon_sym_SEMI_SEMI;
	v->a[55810] = anon_sym_SEMI_AMP;
	v->a[55811] = anon_sym_SEMI_SEMI_AMP;
	v->a[55812] = anon_sym_PIPE_AMP;
	v->a[55813] = anon_sym_AMP_GT;
	v->a[55814] = anon_sym_AMP_GT_GT;
	v->a[55815] = anon_sym_LT_AMP;
	v->a[55816] = anon_sym_GT_AMP;
	v->a[55817] = anon_sym_GT_PIPE;
	v->a[55818] = anon_sym_LT_AMP_DASH;
	v->a[55819] = anon_sym_GT_AMP_DASH;
	small_parse_table_2791(v);
}

void	small_parse_table_2791(t_small_parse_table_array *v)
{
	v->a[55820] = anon_sym_LT_LT_DASH;
	v->a[55821] = anon_sym_LT_LT_LT;
	v->a[55822] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55823] = anon_sym_DOLLAR_LBRACK;
	v->a[55824] = anon_sym_DOLLAR;
	v->a[55825] = sym__special_character;
	v->a[55826] = anon_sym_DQUOTE;
	v->a[55827] = sym_raw_string;
	v->a[55828] = sym_ansi_c_string;
	v->a[55829] = aux_sym_number_token1;
	v->a[55830] = aux_sym_number_token2;
	v->a[55831] = anon_sym_DOLLAR_LBRACE;
	v->a[55832] = anon_sym_DOLLAR_LPAREN;
	v->a[55833] = anon_sym_BQUOTE;
	v->a[55834] = anon_sym_DOLLAR_BQUOTE;
	v->a[55835] = anon_sym_LT_LPAREN;
	v->a[55836] = anon_sym_GT_LPAREN;
	v->a[55837] = sym_word;
	v->a[55838] = 6;
	v->a[55839] = actions(3);
	small_parse_table_2792(v);
}

void	small_parse_table_2792(t_small_parse_table_array *v)
{
	v->a[55840] = 1;
	v->a[55841] = sym_comment;
	v->a[55842] = actions(5464);
	v->a[55843] = 1;
	v->a[55844] = aux_sym_concatenation_token1;
	v->a[55845] = actions(5466);
	v->a[55846] = 1;
	v->a[55847] = sym__concat;
	v->a[55848] = state(1245);
	v->a[55849] = 1;
	v->a[55850] = aux_sym_concatenation_repeat1;
	v->a[55851] = actions(4469);
	v->a[55852] = 5;
	v->a[55853] = sym_file_descriptor;
	v->a[55854] = sym_variable_name;
	v->a[55855] = sym_test_operator;
	v->a[55856] = sym__brace_start;
	v->a[55857] = aux_sym_heredoc_redirect_token1;
	v->a[55858] = actions(4467);
	v->a[55859] = 39;
	small_parse_table_2793(v);
}

void	small_parse_table_2793(t_small_parse_table_array *v)
{
	v->a[55860] = anon_sym_LPAREN_LPAREN;
	v->a[55861] = anon_sym_SEMI;
	v->a[55862] = anon_sym_PIPE_PIPE;
	v->a[55863] = anon_sym_AMP_AMP;
	v->a[55864] = anon_sym_PIPE;
	v->a[55865] = anon_sym_AMP;
	v->a[55866] = anon_sym_LT;
	v->a[55867] = anon_sym_GT;
	v->a[55868] = anon_sym_LT_LT;
	v->a[55869] = anon_sym_GT_GT;
	v->a[55870] = anon_sym_SEMI_SEMI;
	v->a[55871] = anon_sym_SEMI_AMP;
	v->a[55872] = anon_sym_SEMI_SEMI_AMP;
	v->a[55873] = anon_sym_PIPE_AMP;
	v->a[55874] = anon_sym_AMP_GT;
	v->a[55875] = anon_sym_AMP_GT_GT;
	v->a[55876] = anon_sym_LT_AMP;
	v->a[55877] = anon_sym_GT_AMP;
	v->a[55878] = anon_sym_GT_PIPE;
	v->a[55879] = anon_sym_LT_AMP_DASH;
	small_parse_table_2794(v);
}

void	small_parse_table_2794(t_small_parse_table_array *v)
{
	v->a[55880] = anon_sym_GT_AMP_DASH;
	v->a[55881] = anon_sym_LT_LT_DASH;
	v->a[55882] = anon_sym_LT_LT_LT;
	v->a[55883] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55884] = anon_sym_DOLLAR_LBRACK;
	v->a[55885] = anon_sym_DOLLAR;
	v->a[55886] = sym__special_character;
	v->a[55887] = anon_sym_DQUOTE;
	v->a[55888] = sym_raw_string;
	v->a[55889] = sym_ansi_c_string;
	v->a[55890] = aux_sym_number_token1;
	v->a[55891] = aux_sym_number_token2;
	v->a[55892] = anon_sym_DOLLAR_LBRACE;
	v->a[55893] = anon_sym_DOLLAR_LPAREN;
	v->a[55894] = anon_sym_BQUOTE;
	v->a[55895] = anon_sym_DOLLAR_BQUOTE;
	v->a[55896] = anon_sym_LT_LPAREN;
	v->a[55897] = anon_sym_GT_LPAREN;
	v->a[55898] = sym_word;
	v->a[55899] = 6;
	small_parse_table_2795(v);
}

/* EOF small_parse_table_558.c */
