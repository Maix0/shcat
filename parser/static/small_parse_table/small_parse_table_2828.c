/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2828.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14140(t_small_parse_table_array *v)
{
	v->a[282800] = sym__concat;
	v->a[282801] = state(5349);
	v->a[282802] = 1;
	v->a[282803] = aux_sym_concatenation_repeat1;
	v->a[282804] = actions(1265);
	v->a[282805] = 7;
	v->a[282806] = anon_sym_PIPE;
	v->a[282807] = anon_sym_LT;
	v->a[282808] = anon_sym_GT;
	v->a[282809] = anon_sym_LT_LT;
	v->a[282810] = anon_sym_AMP_GT;
	v->a[282811] = anon_sym_LT_AMP;
	v->a[282812] = anon_sym_GT_AMP;
	v->a[282813] = actions(1267);
	v->a[282814] = 11;
	v->a[282815] = sym_file_descriptor;
	v->a[282816] = anon_sym_PIPE_PIPE;
	v->a[282817] = anon_sym_AMP_AMP;
	v->a[282818] = anon_sym_GT_GT;
	v->a[282819] = anon_sym_PIPE_AMP;
	small_parse_table_14141(v);
}

void	small_parse_table_14141(t_small_parse_table_array *v)
{
	v->a[282820] = anon_sym_RBRACK;
	v->a[282821] = anon_sym_AMP_GT_GT;
	v->a[282822] = anon_sym_GT_PIPE;
	v->a[282823] = anon_sym_LT_AMP_DASH;
	v->a[282824] = anon_sym_GT_AMP_DASH;
	v->a[282825] = anon_sym_LT_LT_DASH;
	v->a[282826] = 5;
	v->a[282827] = actions(71);
	v->a[282828] = 1;
	v->a[282829] = sym_comment;
	v->a[282830] = state(5270);
	v->a[282831] = 1;
	v->a[282832] = aux_sym_concatenation_repeat1;
	v->a[282833] = actions(12622);
	v->a[282834] = 2;
	v->a[282835] = sym__concat;
	v->a[282836] = aux_sym_concatenation_token1;
	v->a[282837] = actions(4467);
	v->a[282838] = 7;
	v->a[282839] = anon_sym_PIPE;
	small_parse_table_14142(v);
}

void	small_parse_table_14142(t_small_parse_table_array *v)
{
	v->a[282840] = anon_sym_LT;
	v->a[282841] = anon_sym_GT;
	v->a[282842] = anon_sym_LT_LT;
	v->a[282843] = anon_sym_AMP_GT;
	v->a[282844] = anon_sym_LT_AMP;
	v->a[282845] = anon_sym_GT_AMP;
	v->a[282846] = actions(4469);
	v->a[282847] = 11;
	v->a[282848] = sym_file_descriptor;
	v->a[282849] = anon_sym_PIPE_PIPE;
	v->a[282850] = anon_sym_AMP_AMP;
	v->a[282851] = anon_sym_GT_GT;
	v->a[282852] = anon_sym_PIPE_AMP;
	v->a[282853] = anon_sym_AMP_GT_GT;
	v->a[282854] = anon_sym_GT_PIPE;
	v->a[282855] = anon_sym_LT_AMP_DASH;
	v->a[282856] = anon_sym_GT_AMP_DASH;
	v->a[282857] = anon_sym_LT_LT_DASH;
	v->a[282858] = anon_sym_LT_LT_LT;
	v->a[282859] = 3;
	small_parse_table_14143(v);
}

void	small_parse_table_14143(t_small_parse_table_array *v)
{
	v->a[282860] = actions(71);
	v->a[282861] = 1;
	v->a[282862] = sym_comment;
	v->a[282863] = actions(12350);
	v->a[282864] = 6;
	v->a[282865] = anon_sym_LPAREN;
	v->a[282866] = anon_sym_DOLLAR;
	v->a[282867] = aux_sym_number_token1;
	v->a[282868] = aux_sym_number_token2;
	v->a[282869] = anon_sym_DOLLAR_LPAREN;
	v->a[282870] = sym_word;
	v->a[282871] = actions(12352);
	v->a[282872] = 15;
	v->a[282873] = sym_test_operator;
	v->a[282874] = sym_extglob_pattern;
	v->a[282875] = sym__brace_start;
	v->a[282876] = anon_sym_LPAREN_LPAREN;
	v->a[282877] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[282878] = anon_sym_DOLLAR_LBRACK;
	v->a[282879] = sym__special_character;
	small_parse_table_14144(v);
}

void	small_parse_table_14144(t_small_parse_table_array *v)
{
	v->a[282880] = anon_sym_DQUOTE;
	v->a[282881] = sym_raw_string;
	v->a[282882] = sym_ansi_c_string;
	v->a[282883] = anon_sym_DOLLAR_LBRACE;
	v->a[282884] = anon_sym_BQUOTE;
	v->a[282885] = anon_sym_DOLLAR_BQUOTE;
	v->a[282886] = anon_sym_LT_LPAREN;
	v->a[282887] = anon_sym_GT_LPAREN;
	v->a[282888] = 3;
	v->a[282889] = actions(71);
	v->a[282890] = 1;
	v->a[282891] = sym_comment;
	v->a[282892] = actions(12728);
	v->a[282893] = 6;
	v->a[282894] = anon_sym_LPAREN;
	v->a[282895] = anon_sym_DOLLAR;
	v->a[282896] = aux_sym_number_token1;
	v->a[282897] = aux_sym_number_token2;
	v->a[282898] = anon_sym_DOLLAR_LPAREN;
	v->a[282899] = sym_word;
	small_parse_table_14145(v);
}

/* EOF small_parse_table_2828.c */
