/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_681.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3405(t_small_parse_table_array *v)
{
	v->a[68100] = anon_sym_LT_LT;
	v->a[68101] = anon_sym_LT_LT_DASH;
	v->a[68102] = anon_sym_AMP;
	v->a[68103] = anon_sym_BQUOTE;
	v->a[68104] = anon_sym_SEMI;
	v->a[68105] = 15;
	v->a[68106] = actions(3);
	v->a[68107] = 1;
	v->a[68108] = sym_comment;
	v->a[68109] = actions(1774);
	v->a[68110] = 1;
	v->a[68111] = anon_sym_LPAREN;
	v->a[68112] = actions(1778);
	v->a[68113] = 1;
	v->a[68114] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68115] = actions(1780);
	v->a[68116] = 1;
	v->a[68117] = anon_sym_DOLLAR;
	v->a[68118] = actions(1782);
	v->a[68119] = 1;
	small_parse_table_3406(v);
}

void	small_parse_table_3406(t_small_parse_table_array *v)
{
	v->a[68120] = anon_sym_DQUOTE;
	v->a[68121] = actions(1784);
	v->a[68122] = 1;
	v->a[68123] = anon_sym_DOLLAR_LBRACE;
	v->a[68124] = actions(1786);
	v->a[68125] = 1;
	v->a[68126] = anon_sym_DOLLAR_LPAREN;
	v->a[68127] = actions(1788);
	v->a[68128] = 1;
	v->a[68129] = anon_sym_BQUOTE;
	v->a[68130] = actions(1790);
	v->a[68131] = 1;
	v->a[68132] = sym_extglob_pattern;
	v->a[68133] = state(1329);
	v->a[68134] = 1;
	v->a[68135] = aux_sym_case_statement_repeat1;
	v->a[68136] = state(1920);
	v->a[68137] = 1;
	v->a[68138] = sym_case_item;
	v->a[68139] = state(2156);
	small_parse_table_3407(v);
}

void	small_parse_table_3407(t_small_parse_table_array *v)
{
	v->a[68140] = 1;
	v->a[68141] = sym__case_item_last;
	v->a[68142] = state(2096);
	v->a[68143] = 2;
	v->a[68144] = sym_concatenation;
	v->a[68145] = sym__extglob_blob;
	v->a[68146] = actions(1770);
	v->a[68147] = 3;
	v->a[68148] = sym_raw_string;
	v->a[68149] = sym_number;
	v->a[68150] = sym_word;
	v->a[68151] = state(2001);
	v->a[68152] = 5;
	v->a[68153] = sym_arithmetic_expansion;
	v->a[68154] = sym_string;
	v->a[68155] = sym_simple_expansion;
	v->a[68156] = sym_expansion;
	v->a[68157] = sym_command_substitution;
	v->a[68158] = 5;
	v->a[68159] = actions(3);
	small_parse_table_3408(v);
}

void	small_parse_table_3408(t_small_parse_table_array *v)
{
	v->a[68160] = 1;
	v->a[68161] = sym_comment;
	v->a[68162] = actions(1989);
	v->a[68163] = 1;
	v->a[68164] = sym_variable_name;
	v->a[68165] = actions(1987);
	v->a[68166] = 2;
	v->a[68167] = aux_sym__simple_variable_name_token1;
	v->a[68168] = aux_sym__multiline_variable_name_token1;
	v->a[68169] = actions(381);
	v->a[68170] = 9;
	v->a[68171] = aux_sym_heredoc_redirect_token1;
	v->a[68172] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68173] = anon_sym_DQUOTE;
	v->a[68174] = sym_raw_string;
	v->a[68175] = sym_number;
	v->a[68176] = anon_sym_DOLLAR_LBRACE;
	v->a[68177] = anon_sym_DOLLAR_LPAREN;
	v->a[68178] = anon_sym_BQUOTE;
	v->a[68179] = sym_word;
	small_parse_table_3409(v);
}

void	small_parse_table_3409(t_small_parse_table_array *v)
{
	v->a[68180] = actions(1985);
	v->a[68181] = 9;
	v->a[68182] = anon_sym_BANG;
	v->a[68183] = anon_sym_DASH;
	v->a[68184] = anon_sym_STAR;
	v->a[68185] = anon_sym_QMARK;
	v->a[68186] = anon_sym_DOLLAR;
	v->a[68187] = anon_sym_POUND;
	v->a[68188] = anon_sym_AT;
	v->a[68189] = anon_sym_0;
	v->a[68190] = anon_sym__;
	v->a[68191] = 3;
	v->a[68192] = actions(3);
	v->a[68193] = 1;
	v->a[68194] = sym_comment;
	v->a[68195] = actions(2268);
	v->a[68196] = 3;
	v->a[68197] = sym_file_descriptor;
	v->a[68198] = ts_builtin_sym_end;
	v->a[68199] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3410(v);
}

/* EOF small_parse_table_681.c */
