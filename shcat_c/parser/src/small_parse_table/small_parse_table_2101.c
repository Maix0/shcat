/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2101.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10505(t_small_parse_table_array *v)
{
	v->a[210100] = aux_sym__literal_repeat1;
	v->a[210101] = state(1301);
	v->a[210102] = 1;
	v->a[210103] = sym_concatenation;
	v->a[210104] = actions(9092);
	v->a[210105] = 2;
	v->a[210106] = anon_sym_LPAREN_LPAREN;
	v->a[210107] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[210108] = actions(9108);
	v->a[210109] = 2;
	v->a[210110] = anon_sym_LT_LPAREN;
	v->a[210111] = anon_sym_GT_LPAREN;
	v->a[210112] = actions(9928);
	v->a[210113] = 2;
	v->a[210114] = sym_raw_string;
	v->a[210115] = sym_ansi_c_string;
	v->a[210116] = state(880);
	v->a[210117] = 9;
	v->a[210118] = sym_arithmetic_expansion;
	v->a[210119] = sym_brace_expression;
	small_parse_table_10506(v);
}

void	small_parse_table_10506(t_small_parse_table_array *v)
{
	v->a[210120] = sym_string;
	v->a[210121] = sym_translated_string;
	v->a[210122] = sym_number;
	v->a[210123] = sym_simple_expansion;
	v->a[210124] = sym_expansion;
	v->a[210125] = sym_command_substitution;
	v->a[210126] = sym_process_substitution;
	v->a[210127] = 18;
	v->a[210128] = actions(3);
	v->a[210129] = 1;
	v->a[210130] = sym_comment;
	v->a[210131] = actions(3787);
	v->a[210132] = 1;
	v->a[210133] = anon_sym_DOLLAR;
	v->a[210134] = actions(3793);
	v->a[210135] = 1;
	v->a[210136] = aux_sym_number_token1;
	v->a[210137] = actions(3795);
	v->a[210138] = 1;
	v->a[210139] = aux_sym_number_token2;
	small_parse_table_10507(v);
}

void	small_parse_table_10507(t_small_parse_table_array *v)
{
	v->a[210140] = actions(3799);
	v->a[210141] = 1;
	v->a[210142] = anon_sym_DOLLAR_LPAREN;
	v->a[210143] = actions(3809);
	v->a[210144] = 1;
	v->a[210145] = sym__brace_start;
	v->a[210146] = actions(9636);
	v->a[210147] = 1;
	v->a[210148] = anon_sym_DOLLAR_LBRACK;
	v->a[210149] = actions(9640);
	v->a[210150] = 1;
	v->a[210151] = anon_sym_DQUOTE;
	v->a[210152] = actions(9644);
	v->a[210153] = 1;
	v->a[210154] = anon_sym_DOLLAR_LBRACE;
	v->a[210155] = actions(9646);
	v->a[210156] = 1;
	v->a[210157] = anon_sym_BQUOTE;
	v->a[210158] = actions(9648);
	v->a[210159] = 1;
	small_parse_table_10508(v);
}

void	small_parse_table_10508(t_small_parse_table_array *v)
{
	v->a[210160] = anon_sym_DOLLAR_BQUOTE;
	v->a[210161] = actions(9872);
	v->a[210162] = 1;
	v->a[210163] = sym_word;
	v->a[210164] = actions(9880);
	v->a[210165] = 1;
	v->a[210166] = sym__comment_word;
	v->a[210167] = actions(9634);
	v->a[210168] = 2;
	v->a[210169] = anon_sym_LPAREN_LPAREN;
	v->a[210170] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[210171] = actions(9650);
	v->a[210172] = 2;
	v->a[210173] = anon_sym_LT_LPAREN;
	v->a[210174] = anon_sym_GT_LPAREN;
	v->a[210175] = actions(9876);
	v->a[210176] = 2;
	v->a[210177] = sym_test_operator;
	v->a[210178] = sym__special_character;
	v->a[210179] = actions(9878);
	small_parse_table_10509(v);
}

void	small_parse_table_10509(t_small_parse_table_array *v)
{
	v->a[210180] = 3;
	v->a[210181] = sym__bare_dollar;
	v->a[210182] = sym_raw_string;
	v->a[210183] = sym_ansi_c_string;
	v->a[210184] = state(4337);
	v->a[210185] = 9;
	v->a[210186] = sym_arithmetic_expansion;
	v->a[210187] = sym_brace_expression;
	v->a[210188] = sym_string;
	v->a[210189] = sym_translated_string;
	v->a[210190] = sym_number;
	v->a[210191] = sym_simple_expansion;
	v->a[210192] = sym_expansion;
	v->a[210193] = sym_command_substitution;
	v->a[210194] = sym_process_substitution;
	v->a[210195] = 18;
	v->a[210196] = actions(3);
	v->a[210197] = 1;
	v->a[210198] = sym_comment;
	v->a[210199] = actions(3616);
	small_parse_table_10510(v);
}

/* EOF small_parse_table_2101.c */
