/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_218.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1090(t_small_parse_table_array *v)
{
	v->a[21800] = actions(3876);
	v->a[21801] = 3;
	v->a[21802] = sym_raw_string;
	v->a[21803] = sym_ansi_c_string;
	v->a[21804] = sym_word;
	v->a[21805] = state(1846);
	v->a[21806] = 9;
	v->a[21807] = sym_arithmetic_expansion;
	v->a[21808] = sym_brace_expression;
	v->a[21809] = sym_string;
	v->a[21810] = sym_translated_string;
	v->a[21811] = sym_number;
	v->a[21812] = sym_simple_expansion;
	v->a[21813] = sym_expansion;
	v->a[21814] = sym_command_substitution;
	v->a[21815] = sym_process_substitution;
	v->a[21816] = actions(2072);
	v->a[21817] = 19;
	v->a[21818] = anon_sym_SEMI;
	v->a[21819] = anon_sym_PIPE_PIPE;
	small_parse_table_1091(v);
}

void	small_parse_table_1091(t_small_parse_table_array *v)
{
	v->a[21820] = anon_sym_AMP_AMP;
	v->a[21821] = anon_sym_PIPE;
	v->a[21822] = anon_sym_AMP;
	v->a[21823] = anon_sym_LT;
	v->a[21824] = anon_sym_GT;
	v->a[21825] = anon_sym_LT_LT;
	v->a[21826] = anon_sym_GT_GT;
	v->a[21827] = anon_sym_SEMI_SEMI;
	v->a[21828] = anon_sym_PIPE_AMP;
	v->a[21829] = anon_sym_AMP_GT;
	v->a[21830] = anon_sym_AMP_GT_GT;
	v->a[21831] = anon_sym_LT_AMP;
	v->a[21832] = anon_sym_GT_AMP;
	v->a[21833] = anon_sym_GT_PIPE;
	v->a[21834] = anon_sym_LT_AMP_DASH;
	v->a[21835] = anon_sym_GT_AMP_DASH;
	v->a[21836] = anon_sym_LT_LT_DASH;
	v->a[21837] = 30;
	v->a[21838] = actions(3);
	v->a[21839] = 1;
	small_parse_table_1092(v);
}

void	small_parse_table_1092(t_small_parse_table_array *v)
{
	v->a[21840] = sym_comment;
	v->a[21841] = actions(3727);
	v->a[21842] = 1;
	v->a[21843] = anon_sym_LT_LT_LT;
	v->a[21844] = actions(3729);
	v->a[21845] = 1;
	v->a[21846] = anon_sym_DOLLAR_LBRACK;
	v->a[21847] = actions(3731);
	v->a[21848] = 1;
	v->a[21849] = anon_sym_DOLLAR;
	v->a[21850] = actions(3733);
	v->a[21851] = 1;
	v->a[21852] = sym__special_character;
	v->a[21853] = actions(3735);
	v->a[21854] = 1;
	v->a[21855] = anon_sym_DQUOTE;
	v->a[21856] = actions(3737);
	v->a[21857] = 1;
	v->a[21858] = aux_sym_number_token1;
	v->a[21859] = actions(3739);
	small_parse_table_1093(v);
}

void	small_parse_table_1093(t_small_parse_table_array *v)
{
	v->a[21860] = 1;
	v->a[21861] = aux_sym_number_token2;
	v->a[21862] = actions(3741);
	v->a[21863] = 1;
	v->a[21864] = anon_sym_DOLLAR_LBRACE;
	v->a[21865] = actions(3743);
	v->a[21866] = 1;
	v->a[21867] = anon_sym_DOLLAR_LPAREN;
	v->a[21868] = actions(3745);
	v->a[21869] = 1;
	v->a[21870] = anon_sym_BQUOTE;
	v->a[21871] = actions(3747);
	v->a[21872] = 1;
	v->a[21873] = anon_sym_DOLLAR_BQUOTE;
	v->a[21874] = actions(3751);
	v->a[21875] = 1;
	v->a[21876] = sym_file_descriptor;
	v->a[21877] = actions(3753);
	v->a[21878] = 1;
	v->a[21879] = sym_test_operator;
	small_parse_table_1094(v);
}

void	small_parse_table_1094(t_small_parse_table_array *v)
{
	v->a[21880] = actions(3755);
	v->a[21881] = 1;
	v->a[21882] = sym__brace_start;
	v->a[21883] = actions(4040);
	v->a[21884] = 1;
	v->a[21885] = aux_sym_heredoc_redirect_token1;
	v->a[21886] = state(3567);
	v->a[21887] = 1;
	v->a[21888] = aux_sym__heredoc_command;
	v->a[21889] = state(5351);
	v->a[21890] = 1;
	v->a[21891] = aux_sym__literal_repeat1;
	v->a[21892] = state(5456);
	v->a[21893] = 1;
	v->a[21894] = sym_concatenation;
	v->a[21895] = state(6843);
	v->a[21896] = 1;
	v->a[21897] = sym__heredoc_expression;
	v->a[21898] = state(6844);
	v->a[21899] = 1;
	small_parse_table_1095(v);
}

/* EOF small_parse_table_218.c */
