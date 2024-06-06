/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_70.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_350(t_small_parse_table_array *v)
{
	v->a[7000] = 1;
	v->a[7001] = sym_comment;
	v->a[7002] = actions(1699);
	v->a[7003] = 1;
	v->a[7004] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7005] = actions(1701);
	v->a[7006] = 1;
	v->a[7007] = anon_sym_DOLLAR;
	v->a[7008] = actions(1703);
	v->a[7009] = 1;
	v->a[7010] = sym__special_character;
	v->a[7011] = actions(1705);
	v->a[7012] = 1;
	v->a[7013] = anon_sym_DQUOTE;
	v->a[7014] = actions(1707);
	v->a[7015] = 1;
	v->a[7016] = aux_sym_number_token1;
	v->a[7017] = actions(1709);
	v->a[7018] = 1;
	v->a[7019] = aux_sym_number_token2;
	small_parse_table_351(v);
}

void	small_parse_table_351(t_small_parse_table_array *v)
{
	v->a[7020] = actions(1711);
	v->a[7021] = 1;
	v->a[7022] = anon_sym_DOLLAR_LBRACE;
	v->a[7023] = actions(1713);
	v->a[7024] = 1;
	v->a[7025] = anon_sym_DOLLAR_LPAREN;
	v->a[7026] = actions(1715);
	v->a[7027] = 1;
	v->a[7028] = anon_sym_BQUOTE;
	v->a[7029] = actions(1717);
	v->a[7030] = 1;
	v->a[7031] = anon_sym_DOLLAR_BQUOTE;
	v->a[7032] = actions(1719);
	v->a[7033] = 1;
	v->a[7034] = sym_test_operator;
	v->a[7035] = actions(1721);
	v->a[7036] = 1;
	v->a[7037] = sym__brace_start;
	v->a[7038] = state(1994);
	v->a[7039] = 1;
	small_parse_table_352(v);
}

void	small_parse_table_352(t_small_parse_table_array *v)
{
	v->a[7040] = aux_sym__literal_repeat1;
	v->a[7041] = state(2234);
	v->a[7042] = 1;
	v->a[7043] = sym_concatenation;
	v->a[7044] = actions(1534);
	v->a[7045] = 2;
	v->a[7046] = sym_file_descriptor;
	v->a[7047] = aux_sym_heredoc_redirect_token1;
	v->a[7048] = actions(1697);
	v->a[7049] = 2;
	v->a[7050] = sym_raw_string;
	v->a[7051] = sym_word;
	v->a[7052] = state(1917);
	v->a[7053] = 7;
	v->a[7054] = sym_arithmetic_expansion;
	v->a[7055] = sym_brace_expression;
	v->a[7056] = sym_string;
	v->a[7057] = sym_number;
	v->a[7058] = sym_simple_expansion;
	v->a[7059] = sym_expansion;
	small_parse_table_353(v);
}

void	small_parse_table_353(t_small_parse_table_array *v)
{
	v->a[7060] = sym_command_substitution;
	v->a[7061] = actions(1532);
	v->a[7062] = 22;
	v->a[7063] = anon_sym_esac;
	v->a[7064] = anon_sym_PIPE;
	v->a[7065] = anon_sym_SEMI_SEMI;
	v->a[7066] = anon_sym_SEMI_AMP;
	v->a[7067] = anon_sym_SEMI_SEMI_AMP;
	v->a[7068] = anon_sym_PIPE_AMP;
	v->a[7069] = anon_sym_AMP_AMP;
	v->a[7070] = anon_sym_PIPE_PIPE;
	v->a[7071] = anon_sym_LT;
	v->a[7072] = anon_sym_GT;
	v->a[7073] = anon_sym_GT_GT;
	v->a[7074] = anon_sym_AMP_GT;
	v->a[7075] = anon_sym_AMP_GT_GT;
	v->a[7076] = anon_sym_LT_AMP;
	v->a[7077] = anon_sym_GT_AMP;
	v->a[7078] = anon_sym_GT_PIPE;
	v->a[7079] = anon_sym_LT_AMP_DASH;
	small_parse_table_354(v);
}

void	small_parse_table_354(t_small_parse_table_array *v)
{
	v->a[7080] = anon_sym_GT_AMP_DASH;
	v->a[7081] = anon_sym_LT_LT;
	v->a[7082] = anon_sym_LT_LT_DASH;
	v->a[7083] = anon_sym_AMP;
	v->a[7084] = anon_sym_SEMI;
	v->a[7085] = 6;
	v->a[7086] = actions(3);
	v->a[7087] = 1;
	v->a[7088] = sym_comment;
	v->a[7089] = actions(1727);
	v->a[7090] = 1;
	v->a[7091] = sym_variable_name;
	v->a[7092] = actions(1725);
	v->a[7093] = 2;
	v->a[7094] = aux_sym__simple_variable_name_token1;
	v->a[7095] = aux_sym__multiline_variable_name_token1;
	v->a[7096] = actions(828);
	v->a[7097] = 3;
	v->a[7098] = sym_file_descriptor;
	v->a[7099] = sym_test_operator;
	small_parse_table_355(v);
}

/* EOF small_parse_table_70.c */
