/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1671.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8355(t_small_parse_table_array *v)
{
	v->a[167100] = 2;
	v->a[167101] = anon_sym_LPAREN_LPAREN;
	v->a[167102] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[167103] = actions(7232);
	v->a[167104] = 2;
	v->a[167105] = sym_raw_string;
	v->a[167106] = sym_ansi_c_string;
	v->a[167107] = actions(7240);
	v->a[167108] = 2;
	v->a[167109] = anon_sym_LT_LPAREN;
	v->a[167110] = anon_sym_GT_LPAREN;
	v->a[167111] = state(3310);
	v->a[167112] = 2;
	v->a[167113] = sym_case_item;
	v->a[167114] = aux_sym_case_statement_repeat1;
	v->a[167115] = state(6695);
	v->a[167116] = 2;
	v->a[167117] = sym_concatenation;
	v->a[167118] = sym__extglob_blob;
	v->a[167119] = state(6303);
	small_parse_table_8356(v);
}

void	small_parse_table_8356(t_small_parse_table_array *v)
{
	v->a[167120] = 9;
	v->a[167121] = sym_arithmetic_expansion;
	v->a[167122] = sym_brace_expression;
	v->a[167123] = sym_string;
	v->a[167124] = sym_translated_string;
	v->a[167125] = sym_number;
	v->a[167126] = sym_simple_expansion;
	v->a[167127] = sym_expansion;
	v->a[167128] = sym_command_substitution;
	v->a[167129] = sym_process_substitution;
	v->a[167130] = 8;
	v->a[167131] = actions(3);
	v->a[167132] = 1;
	v->a[167133] = sym_comment;
	v->a[167134] = actions(1241);
	v->a[167135] = 1;
	v->a[167136] = sym_file_descriptor;
	v->a[167137] = actions(3791);
	v->a[167138] = 1;
	v->a[167139] = anon_sym_DQUOTE;
	small_parse_table_8357(v);
}

void	small_parse_table_8357(t_small_parse_table_array *v)
{
	v->a[167140] = actions(7444);
	v->a[167141] = 1;
	v->a[167142] = sym_variable_name;
	v->a[167143] = state(4389);
	v->a[167144] = 1;
	v->a[167145] = sym_string;
	v->a[167146] = actions(7442);
	v->a[167147] = 2;
	v->a[167148] = aux_sym__simple_variable_name_token1;
	v->a[167149] = aux_sym__multiline_variable_name_token1;
	v->a[167150] = actions(7440);
	v->a[167151] = 9;
	v->a[167152] = anon_sym_DASH;
	v->a[167153] = anon_sym_STAR;
	v->a[167154] = anon_sym_BANG;
	v->a[167155] = anon_sym_QMARK;
	v->a[167156] = anon_sym_DOLLAR;
	v->a[167157] = anon_sym_POUND;
	v->a[167158] = anon_sym_AT2;
	v->a[167159] = anon_sym_0;
	small_parse_table_8358(v);
}

void	small_parse_table_8358(t_small_parse_table_array *v)
{
	v->a[167160] = anon_sym__;
	v->a[167161] = actions(1239);
	v->a[167162] = 22;
	v->a[167163] = anon_sym_SEMI;
	v->a[167164] = anon_sym_PIPE_PIPE;
	v->a[167165] = anon_sym_AMP_AMP;
	v->a[167166] = anon_sym_PIPE;
	v->a[167167] = anon_sym_AMP;
	v->a[167168] = anon_sym_LT;
	v->a[167169] = anon_sym_GT;
	v->a[167170] = anon_sym_LT_LT;
	v->a[167171] = anon_sym_GT_GT;
	v->a[167172] = anon_sym_RPAREN;
	v->a[167173] = anon_sym_SEMI_SEMI;
	v->a[167174] = anon_sym_PIPE_AMP;
	v->a[167175] = anon_sym_AMP_GT;
	v->a[167176] = anon_sym_AMP_GT_GT;
	v->a[167177] = anon_sym_LT_AMP;
	v->a[167178] = anon_sym_GT_AMP;
	v->a[167179] = anon_sym_GT_PIPE;
	small_parse_table_8359(v);
}

void	small_parse_table_8359(t_small_parse_table_array *v)
{
	v->a[167180] = anon_sym_LT_AMP_DASH;
	v->a[167181] = anon_sym_GT_AMP_DASH;
	v->a[167182] = anon_sym_LT_LT_DASH;
	v->a[167183] = aux_sym_heredoc_redirect_token1;
	v->a[167184] = anon_sym_LT_LT_LT;
	v->a[167185] = 25;
	v->a[167186] = actions(71);
	v->a[167187] = 1;
	v->a[167188] = sym_comment;
	v->a[167189] = actions(6474);
	v->a[167190] = 1;
	v->a[167191] = sym_word;
	v->a[167192] = actions(6480);
	v->a[167193] = 1;
	v->a[167194] = anon_sym_LPAREN;
	v->a[167195] = actions(6488);
	v->a[167196] = 1;
	v->a[167197] = anon_sym_DOLLAR;
	v->a[167198] = actions(6494);
	v->a[167199] = 1;
	small_parse_table_8360(v);
}

/* EOF small_parse_table_1671.c */
