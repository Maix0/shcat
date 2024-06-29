/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_418.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2090(t_small_parse_table_array *v)
{
	v->a[41800] = anon_sym_GT_AMP;
	v->a[41801] = anon_sym_GT_PIPE;
	v->a[41802] = anon_sym_LT_AMP_DASH;
	v->a[41803] = anon_sym_GT_AMP_DASH;
	v->a[41804] = anon_sym_LT_LT;
	v->a[41805] = anon_sym_LT_LT_DASH;
	v->a[41806] = aux_sym_heredoc_redirect_token1;
	v->a[41807] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41808] = anon_sym_AMP;
	v->a[41809] = aux_sym_concatenation_token1;
	v->a[41810] = anon_sym_DOLLAR;
	v->a[41811] = anon_sym_DQUOTE;
	v->a[41812] = sym_raw_string;
	v->a[41813] = sym_number;
	v->a[41814] = anon_sym_DOLLAR_LBRACE;
	v->a[41815] = anon_sym_DOLLAR_LPAREN;
	v->a[41816] = anon_sym_BQUOTE;
	v->a[41817] = sym_word;
	v->a[41818] = anon_sym_SEMI;
	v->a[41819] = 5;
	small_parse_table_2091(v);
}

void	small_parse_table_2091(t_small_parse_table_array *v)
{
	v->a[41820] = actions(3);
	v->a[41821] = 1;
	v->a[41822] = sym_comment;
	v->a[41823] = actions(548);
	v->a[41824] = 2;
	v->a[41825] = sym_file_descriptor;
	v->a[41826] = sym_variable_name;
	v->a[41827] = state(587);
	v->a[41828] = 2;
	v->a[41829] = sym_concatenation;
	v->a[41830] = aux_sym_for_statement_repeat1;
	v->a[41831] = state(828);
	v->a[41832] = 5;
	v->a[41833] = sym_arithmetic_expansion;
	v->a[41834] = sym_string;
	v->a[41835] = sym_simple_expansion;
	v->a[41836] = sym_expansion;
	v->a[41837] = sym_command_substitution;
	v->a[41838] = actions(546);
	v->a[41839] = 24;
	small_parse_table_2092(v);
}

void	small_parse_table_2092(t_small_parse_table_array *v)
{
	v->a[41840] = anon_sym_PIPE;
	v->a[41841] = anon_sym_AMP_AMP;
	v->a[41842] = anon_sym_PIPE_PIPE;
	v->a[41843] = anon_sym_LT;
	v->a[41844] = anon_sym_GT;
	v->a[41845] = anon_sym_GT_GT;
	v->a[41846] = anon_sym_AMP_GT;
	v->a[41847] = anon_sym_AMP_GT_GT;
	v->a[41848] = anon_sym_LT_AMP;
	v->a[41849] = anon_sym_GT_AMP;
	v->a[41850] = anon_sym_GT_PIPE;
	v->a[41851] = anon_sym_LT_AMP_DASH;
	v->a[41852] = anon_sym_GT_AMP_DASH;
	v->a[41853] = anon_sym_LT_LT;
	v->a[41854] = anon_sym_LT_LT_DASH;
	v->a[41855] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41856] = anon_sym_DOLLAR;
	v->a[41857] = anon_sym_DQUOTE;
	v->a[41858] = sym_raw_string;
	v->a[41859] = sym_number;
	small_parse_table_2093(v);
}

void	small_parse_table_2093(t_small_parse_table_array *v)
{
	v->a[41860] = anon_sym_DOLLAR_LBRACE;
	v->a[41861] = anon_sym_DOLLAR_LPAREN;
	v->a[41862] = anon_sym_BQUOTE;
	v->a[41863] = sym_word;
	v->a[41864] = 17;
	v->a[41865] = actions(1074);
	v->a[41866] = 1;
	v->a[41867] = sym_comment;
	v->a[41868] = actions(1136);
	v->a[41869] = 1;
	v->a[41870] = anon_sym_PIPE;
	v->a[41871] = actions(1138);
	v->a[41872] = 1;
	v->a[41873] = anon_sym_AMP_AMP;
	v->a[41874] = actions(1140);
	v->a[41875] = 1;
	v->a[41876] = anon_sym_PIPE_PIPE;
	v->a[41877] = actions(1150);
	v->a[41878] = 1;
	v->a[41879] = anon_sym_CARET;
	small_parse_table_2094(v);
}

void	small_parse_table_2094(t_small_parse_table_array *v)
{
	v->a[41880] = actions(1152);
	v->a[41881] = 1;
	v->a[41882] = anon_sym_AMP;
	v->a[41883] = actions(1239);
	v->a[41884] = 1;
	v->a[41885] = anon_sym_EQ;
	v->a[41886] = actions(1241);
	v->a[41887] = 1;
	v->a[41888] = anon_sym_QMARK;
	v->a[41889] = actions(1435);
	v->a[41890] = 1;
	v->a[41891] = anon_sym_RPAREN_RPAREN;
	v->a[41892] = actions(1144);
	v->a[41893] = 2;
	v->a[41894] = anon_sym_LT;
	v->a[41895] = anon_sym_GT;
	v->a[41896] = actions(1146);
	v->a[41897] = 2;
	v->a[41898] = anon_sym_GT_GT;
	v->a[41899] = anon_sym_LT_LT;
	small_parse_table_2095(v);
}

/* EOF small_parse_table_418.c */
