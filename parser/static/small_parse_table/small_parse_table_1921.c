/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1921.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9605(t_small_parse_table_array *v)
{
	v->a[192100] = sym_raw_string;
	v->a[192101] = sym_ansi_c_string;
	v->a[192102] = anon_sym_DOLLAR_LBRACE;
	v->a[192103] = anon_sym_BQUOTE;
	v->a[192104] = anon_sym_DOLLAR_BQUOTE;
	v->a[192105] = anon_sym_LT_LPAREN;
	v->a[192106] = anon_sym_GT_LPAREN;
	v->a[192107] = 5;
	v->a[192108] = actions(71);
	v->a[192109] = 1;
	v->a[192110] = sym_comment;
	v->a[192111] = actions(8562);
	v->a[192112] = 1;
	v->a[192113] = sym__special_character;
	v->a[192114] = state(3544);
	v->a[192115] = 1;
	v->a[192116] = aux_sym__literal_repeat1;
	v->a[192117] = actions(1362);
	v->a[192118] = 10;
	v->a[192119] = anon_sym_LT;
	small_parse_table_9606(v);
}

void	small_parse_table_9606(t_small_parse_table_array *v)
{
	v->a[192120] = anon_sym_GT;
	v->a[192121] = anon_sym_AMP_GT;
	v->a[192122] = anon_sym_LT_AMP;
	v->a[192123] = anon_sym_GT_AMP;
	v->a[192124] = anon_sym_DOLLAR;
	v->a[192125] = aux_sym_number_token1;
	v->a[192126] = aux_sym_number_token2;
	v->a[192127] = anon_sym_DOLLAR_LPAREN;
	v->a[192128] = sym_word;
	v->a[192129] = actions(1364);
	v->a[192130] = 21;
	v->a[192131] = sym_file_descriptor;
	v->a[192132] = sym_variable_name;
	v->a[192133] = sym_test_operator;
	v->a[192134] = sym__brace_start;
	v->a[192135] = anon_sym_LPAREN_LPAREN;
	v->a[192136] = anon_sym_GT_GT;
	v->a[192137] = anon_sym_AMP_GT_GT;
	v->a[192138] = anon_sym_GT_PIPE;
	v->a[192139] = anon_sym_LT_AMP_DASH;
	small_parse_table_9607(v);
}

void	small_parse_table_9607(t_small_parse_table_array *v)
{
	v->a[192140] = anon_sym_GT_AMP_DASH;
	v->a[192141] = anon_sym_LT_LT_LT;
	v->a[192142] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[192143] = anon_sym_DOLLAR_LBRACK;
	v->a[192144] = anon_sym_DQUOTE;
	v->a[192145] = sym_raw_string;
	v->a[192146] = sym_ansi_c_string;
	v->a[192147] = anon_sym_DOLLAR_LBRACE;
	v->a[192148] = anon_sym_BQUOTE;
	v->a[192149] = anon_sym_DOLLAR_BQUOTE;
	v->a[192150] = anon_sym_LT_LPAREN;
	v->a[192151] = anon_sym_GT_LPAREN;
	v->a[192152] = 5;
	v->a[192153] = actions(71);
	v->a[192154] = 1;
	v->a[192155] = sym_comment;
	v->a[192156] = actions(8552);
	v->a[192157] = 1;
	v->a[192158] = sym__special_character;
	v->a[192159] = state(3544);
	small_parse_table_9608(v);
}

void	small_parse_table_9608(t_small_parse_table_array *v)
{
	v->a[192160] = 1;
	v->a[192161] = aux_sym__literal_repeat1;
	v->a[192162] = actions(5721);
	v->a[192163] = 10;
	v->a[192164] = anon_sym_LT;
	v->a[192165] = anon_sym_GT;
	v->a[192166] = anon_sym_AMP_GT;
	v->a[192167] = anon_sym_LT_AMP;
	v->a[192168] = anon_sym_GT_AMP;
	v->a[192169] = anon_sym_DOLLAR;
	v->a[192170] = aux_sym_number_token1;
	v->a[192171] = aux_sym_number_token2;
	v->a[192172] = anon_sym_DOLLAR_LPAREN;
	v->a[192173] = sym_word;
	v->a[192174] = actions(5723);
	v->a[192175] = 21;
	v->a[192176] = sym_file_descriptor;
	v->a[192177] = sym_variable_name;
	v->a[192178] = sym_test_operator;
	v->a[192179] = sym__brace_start;
	small_parse_table_9609(v);
}

void	small_parse_table_9609(t_small_parse_table_array *v)
{
	v->a[192180] = anon_sym_LPAREN_LPAREN;
	v->a[192181] = anon_sym_GT_GT;
	v->a[192182] = anon_sym_AMP_GT_GT;
	v->a[192183] = anon_sym_GT_PIPE;
	v->a[192184] = anon_sym_LT_AMP_DASH;
	v->a[192185] = anon_sym_GT_AMP_DASH;
	v->a[192186] = anon_sym_LT_LT_LT;
	v->a[192187] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[192188] = anon_sym_DOLLAR_LBRACK;
	v->a[192189] = anon_sym_DQUOTE;
	v->a[192190] = sym_raw_string;
	v->a[192191] = sym_ansi_c_string;
	v->a[192192] = anon_sym_DOLLAR_LBRACE;
	v->a[192193] = anon_sym_BQUOTE;
	v->a[192194] = anon_sym_DOLLAR_BQUOTE;
	v->a[192195] = anon_sym_LT_LPAREN;
	v->a[192196] = anon_sym_GT_LPAREN;
	v->a[192197] = 21;
	v->a[192198] = actions(71);
	v->a[192199] = 1;
	small_parse_table_9610(v);
}

/* EOF small_parse_table_1921.c */
