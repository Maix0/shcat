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
	v->a[41800] = anon_sym_SEMI_SEMI_AMP;
	v->a[41801] = anon_sym_PIPE_AMP;
	v->a[41802] = anon_sym_AMP_AMP;
	v->a[41803] = anon_sym_PIPE_PIPE;
	v->a[41804] = anon_sym_LT;
	v->a[41805] = anon_sym_GT;
	v->a[41806] = anon_sym_GT_GT;
	v->a[41807] = anon_sym_AMP_GT;
	v->a[41808] = anon_sym_AMP_GT_GT;
	v->a[41809] = anon_sym_LT_AMP;
	v->a[41810] = anon_sym_GT_AMP;
	v->a[41811] = anon_sym_GT_PIPE;
	v->a[41812] = anon_sym_LT_AMP_DASH;
	v->a[41813] = anon_sym_GT_AMP_DASH;
	v->a[41814] = anon_sym_LT_LT;
	v->a[41815] = anon_sym_LT_LT_DASH;
	v->a[41816] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41817] = anon_sym_AMP;
	v->a[41818] = aux_sym_concatenation_token1;
	v->a[41819] = anon_sym_DOLLAR;
	small_parse_table_2091(v);
}

void	small_parse_table_2091(t_small_parse_table_array *v)
{
	v->a[41820] = sym__special_character;
	v->a[41821] = anon_sym_DQUOTE;
	v->a[41822] = sym_raw_string;
	v->a[41823] = aux_sym_number_token1;
	v->a[41824] = aux_sym_number_token2;
	v->a[41825] = anon_sym_DOLLAR_LBRACE;
	v->a[41826] = anon_sym_DOLLAR_LPAREN;
	v->a[41827] = anon_sym_BQUOTE;
	v->a[41828] = anon_sym_DOLLAR_BQUOTE;
	v->a[41829] = sym_word;
	v->a[41830] = anon_sym_SEMI;
	v->a[41831] = 6;
	v->a[41832] = actions(3);
	v->a[41833] = 1;
	v->a[41834] = sym_comment;
	v->a[41835] = actions(3434);
	v->a[41836] = 1;
	v->a[41837] = aux_sym_concatenation_token1;
	v->a[41838] = actions(3584);
	v->a[41839] = 1;
	small_parse_table_2092(v);
}

void	small_parse_table_2092(t_small_parse_table_array *v)
{
	v->a[41840] = sym__concat;
	v->a[41841] = state(915);
	v->a[41842] = 1;
	v->a[41843] = aux_sym_concatenation_repeat1;
	v->a[41844] = actions(2690);
	v->a[41845] = 5;
	v->a[41846] = sym_file_descriptor;
	v->a[41847] = sym_test_operator;
	v->a[41848] = sym__brace_start;
	v->a[41849] = ts_builtin_sym_end;
	v->a[41850] = aux_sym_heredoc_redirect_token1;
	v->a[41851] = actions(2688);
	v->a[41852] = 32;
	v->a[41853] = anon_sym_PIPE;
	v->a[41854] = anon_sym_SEMI_SEMI;
	v->a[41855] = anon_sym_PIPE_AMP;
	v->a[41856] = anon_sym_AMP_AMP;
	v->a[41857] = anon_sym_PIPE_PIPE;
	v->a[41858] = anon_sym_LT;
	v->a[41859] = anon_sym_GT;
	small_parse_table_2093(v);
}

void	small_parse_table_2093(t_small_parse_table_array *v)
{
	v->a[41860] = anon_sym_GT_GT;
	v->a[41861] = anon_sym_AMP_GT;
	v->a[41862] = anon_sym_AMP_GT_GT;
	v->a[41863] = anon_sym_LT_AMP;
	v->a[41864] = anon_sym_GT_AMP;
	v->a[41865] = anon_sym_GT_PIPE;
	v->a[41866] = anon_sym_LT_AMP_DASH;
	v->a[41867] = anon_sym_GT_AMP_DASH;
	v->a[41868] = anon_sym_LT_LT;
	v->a[41869] = anon_sym_LT_LT_DASH;
	v->a[41870] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41871] = anon_sym_AMP;
	v->a[41872] = anon_sym_DOLLAR;
	v->a[41873] = sym__special_character;
	v->a[41874] = anon_sym_DQUOTE;
	v->a[41875] = sym_raw_string;
	v->a[41876] = aux_sym_number_token1;
	v->a[41877] = aux_sym_number_token2;
	v->a[41878] = anon_sym_DOLLAR_LBRACE;
	v->a[41879] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2094(v);
}

void	small_parse_table_2094(t_small_parse_table_array *v)
{
	v->a[41880] = anon_sym_BQUOTE;
	v->a[41881] = anon_sym_DOLLAR_BQUOTE;
	v->a[41882] = aux_sym__simple_variable_name_token1;
	v->a[41883] = sym_word;
	v->a[41884] = anon_sym_SEMI;
	v->a[41885] = 3;
	v->a[41886] = actions(3);
	v->a[41887] = 1;
	v->a[41888] = sym_comment;
	v->a[41889] = actions(3066);
	v->a[41890] = 5;
	v->a[41891] = sym_file_descriptor;
	v->a[41892] = sym__concat;
	v->a[41893] = sym_test_operator;
	v->a[41894] = sym__brace_start;
	v->a[41895] = aux_sym_heredoc_redirect_token1;
	v->a[41896] = actions(3064);
	v->a[41897] = 35;
	v->a[41898] = anon_sym_PIPE;
	v->a[41899] = anon_sym_SEMI_SEMI;
	small_parse_table_2095(v);
}

/* EOF small_parse_table_418.c */
