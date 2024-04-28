/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1238.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6190(t_small_parse_table_array *v)
{
	v->a[123800] = sym_expansion;
	v->a[123801] = sym_command_substitution;
	v->a[123802] = sym_process_substitution;
	v->a[123803] = 3;
	v->a[123804] = actions(71);
	v->a[123805] = 1;
	v->a[123806] = sym_comment;
	v->a[123807] = actions(1344);
	v->a[123808] = 14;
	v->a[123809] = anon_sym_PIPE;
	v->a[123810] = anon_sym_LT;
	v->a[123811] = anon_sym_GT;
	v->a[123812] = anon_sym_LT_LT;
	v->a[123813] = anon_sym_AMP_GT;
	v->a[123814] = anon_sym_LT_AMP;
	v->a[123815] = anon_sym_GT_AMP;
	v->a[123816] = anon_sym_DOLLAR;
	v->a[123817] = sym__special_character;
	v->a[123818] = aux_sym_number_token1;
	v->a[123819] = aux_sym_number_token2;
	small_parse_table_6191(v);
}

void	small_parse_table_6191(t_small_parse_table_array *v)
{
	v->a[123820] = anon_sym_DOLLAR_LPAREN;
	v->a[123821] = anon_sym_BQUOTE;
	v->a[123822] = sym_word;
	v->a[123823] = actions(1346);
	v->a[123824] = 27;
	v->a[123825] = sym_file_descriptor;
	v->a[123826] = sym__concat;
	v->a[123827] = sym_variable_name;
	v->a[123828] = sym_test_operator;
	v->a[123829] = sym__brace_start;
	v->a[123830] = anon_sym_LPAREN_LPAREN;
	v->a[123831] = anon_sym_PIPE_PIPE;
	v->a[123832] = anon_sym_AMP_AMP;
	v->a[123833] = anon_sym_GT_GT;
	v->a[123834] = anon_sym_PIPE_AMP;
	v->a[123835] = anon_sym_RBRACK;
	v->a[123836] = anon_sym_AMP_GT_GT;
	v->a[123837] = anon_sym_GT_PIPE;
	v->a[123838] = anon_sym_LT_AMP_DASH;
	v->a[123839] = anon_sym_GT_AMP_DASH;
	small_parse_table_6192(v);
}

void	small_parse_table_6192(t_small_parse_table_array *v)
{
	v->a[123840] = anon_sym_LT_LT_DASH;
	v->a[123841] = anon_sym_LT_LT_LT;
	v->a[123842] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[123843] = anon_sym_DOLLAR_LBRACK;
	v->a[123844] = aux_sym_concatenation_token1;
	v->a[123845] = anon_sym_DQUOTE;
	v->a[123846] = sym_raw_string;
	v->a[123847] = sym_ansi_c_string;
	v->a[123848] = anon_sym_DOLLAR_LBRACE;
	v->a[123849] = anon_sym_DOLLAR_BQUOTE;
	v->a[123850] = anon_sym_LT_LPAREN;
	v->a[123851] = anon_sym_GT_LPAREN;
	v->a[123852] = 3;
	v->a[123853] = actions(71);
	v->a[123854] = 1;
	v->a[123855] = sym_comment;
	v->a[123856] = actions(1356);
	v->a[123857] = 14;
	v->a[123858] = anon_sym_PIPE;
	v->a[123859] = anon_sym_LT;
	small_parse_table_6193(v);
}

void	small_parse_table_6193(t_small_parse_table_array *v)
{
	v->a[123860] = anon_sym_GT;
	v->a[123861] = anon_sym_LT_LT;
	v->a[123862] = anon_sym_AMP_GT;
	v->a[123863] = anon_sym_LT_AMP;
	v->a[123864] = anon_sym_GT_AMP;
	v->a[123865] = anon_sym_DOLLAR;
	v->a[123866] = sym__special_character;
	v->a[123867] = aux_sym_number_token1;
	v->a[123868] = aux_sym_number_token2;
	v->a[123869] = anon_sym_DOLLAR_LPAREN;
	v->a[123870] = anon_sym_BQUOTE;
	v->a[123871] = sym_word;
	v->a[123872] = actions(1358);
	v->a[123873] = 27;
	v->a[123874] = sym_file_descriptor;
	v->a[123875] = sym__concat;
	v->a[123876] = sym_variable_name;
	v->a[123877] = sym_test_operator;
	v->a[123878] = sym__brace_start;
	v->a[123879] = anon_sym_LPAREN_LPAREN;
	small_parse_table_6194(v);
}

void	small_parse_table_6194(t_small_parse_table_array *v)
{
	v->a[123880] = anon_sym_PIPE_PIPE;
	v->a[123881] = anon_sym_AMP_AMP;
	v->a[123882] = anon_sym_GT_GT;
	v->a[123883] = anon_sym_PIPE_AMP;
	v->a[123884] = anon_sym_RBRACK;
	v->a[123885] = anon_sym_AMP_GT_GT;
	v->a[123886] = anon_sym_GT_PIPE;
	v->a[123887] = anon_sym_LT_AMP_DASH;
	v->a[123888] = anon_sym_GT_AMP_DASH;
	v->a[123889] = anon_sym_LT_LT_DASH;
	v->a[123890] = anon_sym_LT_LT_LT;
	v->a[123891] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[123892] = anon_sym_DOLLAR_LBRACK;
	v->a[123893] = aux_sym_concatenation_token1;
	v->a[123894] = anon_sym_DQUOTE;
	v->a[123895] = sym_raw_string;
	v->a[123896] = sym_ansi_c_string;
	v->a[123897] = anon_sym_DOLLAR_LBRACE;
	v->a[123898] = anon_sym_DOLLAR_BQUOTE;
	v->a[123899] = anon_sym_LT_LPAREN;
	small_parse_table_6195(v);
}

/* EOF small_parse_table_1238.c */
