/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1318.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6590(t_small_parse_table_array *v)
{
	v->a[131800] = sym__special_character;
	v->a[131801] = anon_sym_DQUOTE;
	v->a[131802] = sym_raw_string;
	v->a[131803] = sym_ansi_c_string;
	v->a[131804] = anon_sym_DOLLAR_LBRACE;
	v->a[131805] = anon_sym_DOLLAR_BQUOTE;
	v->a[131806] = anon_sym_LT_LPAREN;
	v->a[131807] = anon_sym_GT_LPAREN;
	v->a[131808] = 3;
	v->a[131809] = actions(71);
	v->a[131810] = 1;
	v->a[131811] = sym_comment;
	v->a[131812] = actions(1320);
	v->a[131813] = 13;
	v->a[131814] = anon_sym_PIPE;
	v->a[131815] = anon_sym_LT;
	v->a[131816] = anon_sym_GT;
	v->a[131817] = anon_sym_LT_LT;
	v->a[131818] = anon_sym_AMP_GT;
	v->a[131819] = anon_sym_LT_AMP;
	small_parse_table_6591(v);
}

void	small_parse_table_6591(t_small_parse_table_array *v)
{
	v->a[131820] = anon_sym_GT_AMP;
	v->a[131821] = anon_sym_DOLLAR;
	v->a[131822] = aux_sym_number_token1;
	v->a[131823] = aux_sym_number_token2;
	v->a[131824] = anon_sym_DOLLAR_LPAREN;
	v->a[131825] = anon_sym_BQUOTE;
	v->a[131826] = sym_word;
	v->a[131827] = actions(1322);
	v->a[131828] = 27;
	v->a[131829] = sym_file_descriptor;
	v->a[131830] = sym__concat;
	v->a[131831] = sym_variable_name;
	v->a[131832] = sym_test_operator;
	v->a[131833] = sym__brace_start;
	v->a[131834] = anon_sym_LPAREN_LPAREN;
	v->a[131835] = anon_sym_PIPE_PIPE;
	v->a[131836] = anon_sym_AMP_AMP;
	v->a[131837] = anon_sym_GT_GT;
	v->a[131838] = anon_sym_PIPE_AMP;
	v->a[131839] = anon_sym_AMP_GT_GT;
	small_parse_table_6592(v);
}

void	small_parse_table_6592(t_small_parse_table_array *v)
{
	v->a[131840] = anon_sym_GT_PIPE;
	v->a[131841] = anon_sym_LT_AMP_DASH;
	v->a[131842] = anon_sym_GT_AMP_DASH;
	v->a[131843] = anon_sym_LT_LT_DASH;
	v->a[131844] = anon_sym_LT_LT_LT;
	v->a[131845] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[131846] = anon_sym_DOLLAR_LBRACK;
	v->a[131847] = aux_sym_concatenation_token1;
	v->a[131848] = sym__special_character;
	v->a[131849] = anon_sym_DQUOTE;
	v->a[131850] = sym_raw_string;
	v->a[131851] = sym_ansi_c_string;
	v->a[131852] = anon_sym_DOLLAR_LBRACE;
	v->a[131853] = anon_sym_DOLLAR_BQUOTE;
	v->a[131854] = anon_sym_LT_LPAREN;
	v->a[131855] = anon_sym_GT_LPAREN;
	v->a[131856] = 6;
	v->a[131857] = actions(71);
	v->a[131858] = 1;
	v->a[131859] = sym_comment;
	small_parse_table_6593(v);
}

void	small_parse_table_6593(t_small_parse_table_array *v)
{
	v->a[131860] = actions(1369);
	v->a[131861] = 1;
	v->a[131862] = sym_test_operator;
	v->a[131863] = state(2475);
	v->a[131864] = 1;
	v->a[131865] = aux_sym_concatenation_repeat1;
	v->a[131866] = actions(1077);
	v->a[131867] = 2;
	v->a[131868] = sym__concat;
	v->a[131869] = aux_sym_concatenation_token1;
	v->a[131870] = actions(6594);
	v->a[131871] = 14;
	v->a[131872] = anon_sym_EQ;
	v->a[131873] = anon_sym_PIPE;
	v->a[131874] = anon_sym_CARET;
	v->a[131875] = anon_sym_AMP;
	v->a[131876] = anon_sym_LT;
	v->a[131877] = anon_sym_GT;
	v->a[131878] = anon_sym_LT_LT;
	v->a[131879] = anon_sym_GT_GT;
	small_parse_table_6594(v);
}

void	small_parse_table_6594(t_small_parse_table_array *v)
{
	v->a[131880] = anon_sym_PLUS;
	v->a[131881] = anon_sym_DASH;
	v->a[131882] = anon_sym_STAR;
	v->a[131883] = anon_sym_SLASH;
	v->a[131884] = anon_sym_PERCENT;
	v->a[131885] = anon_sym_STAR_STAR;
	v->a[131886] = actions(6592);
	v->a[131887] = 22;
	v->a[131888] = anon_sym_PLUS_PLUS;
	v->a[131889] = anon_sym_DASH_DASH;
	v->a[131890] = anon_sym_PLUS_EQ;
	v->a[131891] = anon_sym_DASH_EQ;
	v->a[131892] = anon_sym_STAR_EQ;
	v->a[131893] = anon_sym_SLASH_EQ;
	v->a[131894] = anon_sym_PERCENT_EQ;
	v->a[131895] = anon_sym_STAR_STAR_EQ;
	v->a[131896] = anon_sym_LT_LT_EQ;
	v->a[131897] = anon_sym_GT_GT_EQ;
	v->a[131898] = anon_sym_AMP_EQ;
	v->a[131899] = anon_sym_CARET_EQ;
	small_parse_table_6595(v);
}

/* EOF small_parse_table_1318.c */
