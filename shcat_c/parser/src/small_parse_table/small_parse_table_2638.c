/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2638.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13190(t_small_parse_table_array *v)
{
	v->a[263800] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[263801] = anon_sym_DOLLAR_LBRACK;
	v->a[263802] = aux_sym_concatenation_token1;
	v->a[263803] = anon_sym_DOLLAR;
	v->a[263804] = sym__special_character;
	v->a[263805] = anon_sym_DQUOTE;
	v->a[263806] = sym_raw_string;
	v->a[263807] = sym_ansi_c_string;
	v->a[263808] = aux_sym_number_token1;
	v->a[263809] = aux_sym_number_token2;
	v->a[263810] = anon_sym_DOLLAR_LBRACE;
	v->a[263811] = anon_sym_DOLLAR_LPAREN;
	v->a[263812] = anon_sym_BQUOTE;
	v->a[263813] = anon_sym_DOLLAR_BQUOTE;
	v->a[263814] = anon_sym_LT_LPAREN;
	v->a[263815] = anon_sym_GT_LPAREN;
	v->a[263816] = sym_word;
	v->a[263817] = 3;
	v->a[263818] = actions(3);
	v->a[263819] = 1;
	small_parse_table_13191(v);
}

void	small_parse_table_13191(t_small_parse_table_array *v)
{
	v->a[263820] = sym_comment;
	v->a[263821] = actions(1350);
	v->a[263822] = 4;
	v->a[263823] = sym__concat;
	v->a[263824] = sym_test_operator;
	v->a[263825] = sym__brace_start;
	v->a[263826] = aux_sym_heredoc_redirect_token1;
	v->a[263827] = actions(1348);
	v->a[263828] = 21;
	v->a[263829] = anon_sym_LPAREN_LPAREN;
	v->a[263830] = anon_sym_SEMI;
	v->a[263831] = anon_sym_AMP;
	v->a[263832] = anon_sym_SEMI_SEMI;
	v->a[263833] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[263834] = anon_sym_DOLLAR_LBRACK;
	v->a[263835] = aux_sym_concatenation_token1;
	v->a[263836] = anon_sym_DOLLAR;
	v->a[263837] = sym__special_character;
	v->a[263838] = anon_sym_DQUOTE;
	v->a[263839] = sym_raw_string;
	small_parse_table_13192(v);
}

void	small_parse_table_13192(t_small_parse_table_array *v)
{
	v->a[263840] = sym_ansi_c_string;
	v->a[263841] = aux_sym_number_token1;
	v->a[263842] = aux_sym_number_token2;
	v->a[263843] = anon_sym_DOLLAR_LBRACE;
	v->a[263844] = anon_sym_DOLLAR_LPAREN;
	v->a[263845] = anon_sym_BQUOTE;
	v->a[263846] = anon_sym_DOLLAR_BQUOTE;
	v->a[263847] = anon_sym_LT_LPAREN;
	v->a[263848] = anon_sym_GT_LPAREN;
	v->a[263849] = sym_word;
	v->a[263850] = 16;
	v->a[263851] = actions(3);
	v->a[263852] = 1;
	v->a[263853] = sym_comment;
	v->a[263854] = actions(11760);
	v->a[263855] = 1;
	v->a[263856] = anon_sym_BANG2;
	v->a[263857] = actions(11764);
	v->a[263858] = 1;
	v->a[263859] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_13193(v);
}

void	small_parse_table_13193(t_small_parse_table_array *v)
{
	v->a[263860] = actions(11766);
	v->a[263861] = 1;
	v->a[263862] = anon_sym_BQUOTE;
	v->a[263863] = actions(11768);
	v->a[263864] = 1;
	v->a[263865] = anon_sym_DOLLAR_BQUOTE;
	v->a[263866] = actions(11770);
	v->a[263867] = 1;
	v->a[263868] = aux_sym__simple_variable_name_token1;
	v->a[263869] = actions(11772);
	v->a[263870] = 1;
	v->a[263871] = sym_variable_name;
	v->a[263872] = actions(12050);
	v->a[263873] = 1;
	v->a[263874] = anon_sym_RBRACE3;
	v->a[263875] = state(3532);
	v->a[263876] = 1;
	v->a[263877] = sym_subscript;
	v->a[263878] = state(6428);
	v->a[263879] = 1;
	small_parse_table_13194(v);
}

void	small_parse_table_13194(t_small_parse_table_array *v)
{
	v->a[263880] = aux_sym__expansion_body_repeat1;
	v->a[263881] = state(6472);
	v->a[263882] = 1;
	v->a[263883] = sym_command_substitution;
	v->a[263884] = state(6807);
	v->a[263885] = 1;
	v->a[263886] = sym__expansion_body;
	v->a[263887] = actions(11762);
	v->a[263888] = 2;
	v->a[263889] = anon_sym_POUND2;
	v->a[263890] = anon_sym_EQ2;
	v->a[263891] = actions(8050);
	v->a[263892] = 3;
	v->a[263893] = sym__external_expansion_sym_hash;
	v->a[263894] = sym__external_expansion_sym_bang;
	v->a[263895] = sym__external_expansion_sym_equal;
	v->a[263896] = actions(11754);
	v->a[263897] = 4;
	v->a[263898] = anon_sym_DASH;
	v->a[263899] = anon_sym_STAR;
	small_parse_table_13195(v);
}

/* EOF small_parse_table_2638.c */
